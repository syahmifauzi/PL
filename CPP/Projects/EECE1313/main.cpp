#include <algorithm>     // std::erase, std::remove
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

string classifyPlace(int *popul, int idx) {
    if (popul[idx] < 10000)
        return "Rural";
    else if (popul[idx] < 100000)
        return "Suburban";
    else if (popul[idx] < 1000000)
        return "Small City";
    else if (popul[idx] < 10000000)
        return "Metropolitan";
}

void sortByPopulation(string *areas, int *popul, int size) {
    // Using insertion sort algorithm
    string temp_area;
    int min_idx, temp_pop;
    for (int i = 0; i < size - 1; ++i) {
        min_idx = i;
        // Find the index of min value
        for (int j = i + 1; j < size; ++j)
            if (popul[min_idx] > popul[j])
                min_idx = j;
        // After each inner loop, we swap areas and
        temp_area = areas[i];
        areas[i] = areas[min_idx];
        areas[min_idx] = temp_area;
        // population
        temp_pop = popul[i];
        popul[i] = popul[min_idx];
        popul[min_idx] = temp_pop;
    }
}

void pathLoss(string area, string category) {
    // Get info data from file to calculate path loss
    double fo, d, hb, hm;
    ifstream infoFile("info.txt");
    if (!infoFile.fail())
        infoFile >> fo >> d >> hb >> hm;
    infoFile.close();
    // Calculate path loss based on category
    double LOH, A, B, C, ahm;
    if (category.compare("Metropolitan") == 0) {
        if (fo <= 200)
            ahm = 8.29 * pow(log10(1.54 * hm), 2.0) - 1.1;
        else if (fo >= 400)
            ahm = 3.2 * pow(log10(11.75 * hm), 2.0) - 4.97;
        C = 0.0;
    } else {
        ahm = (1.1 * log10(fo) - 0.7) * hm - (1.56 * log10(fo) - 0.8);
        if (category.compare("Small City") == 0)
            C = 0.0;
        else if (category.compare("Suburban") == 0)
            C = -2 * pow(log10(fo / 28), 2.0) - 5.4;
        else // if Rural area
            C = -4.78 * pow(log10(fo), 2.0) + 18.33 * log10(fo) - 40.94;
    }
    A = 69.55 + 26.16 * log10(fo) - 13.82 * log10(hb) - ahm;
    B = 44.9 - 6.55 * log(hb);
    LOH = A + B * log10(d) + C;
    // Write path loss in another file
    ofstream rplWF("reportPathLoss.txt", ios::app);
    if (!rplWF.fail())
        rplWF << area << ' ' << LOH << '\n';
    rplWF.close();
}

int main()
{
    string tempLine;
    int totalLines = 0;
    // Read the file SizeArea.txt to get total lines
    ifstream lineRF("SizeArea.txt");
    if (!lineRF.fail())
        while (getline(lineRF, tempLine))
            ++totalLines;
    lineRF.close();

    int *population = new int[totalLines];
    string *areas = new string[totalLines];
    // Read the file SizeArea.txt to store all data in areas[]
    ifstream dataRF("SizeArea.txt");
    if (!dataRF.fail()) {
        for (int i = 0; i < totalLines; ++i) {
            getline(dataRF, areas[i], ';');
            dataRF >> population[i];
            // Remove more than one spaces in areas[i] string
            areas[i] = areas[i].substr(0, areas[i].find("  "));
            // Remove new line from multiline string
            areas[i].erase(remove(areas[i].begin(), 
                areas[i].end(), '\n'), areas[i].end());
        }
    }
    dataRF.close();

    // Sorting both arrays based on population array
    sortByPopulation(areas, population, totalLines);

    // Display All data from memory
    string category;
    cout << setw(18) << left << "Areas"
         << setw(18) << left << "Population"
         << setw(18) << left << "Category"
         << endl << string(48, '-') << endl;
    for (int i = 0; i < totalLines; ++i) {
        category = classifyPlace(population, i);
        cout << setw(18) << left << areas[i]
             << setw(18) << left << population[i]
             << setw(18) << left << category
             << endl;
        pathLoss(areas[i], category);
    }

    // Free the memory (MUST)
    delete[] population;
    delete[] areas;

    return 0;
}
