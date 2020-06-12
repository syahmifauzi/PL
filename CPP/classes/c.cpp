#include <iostream>
#include <string>
using namespace std;

class SyhmiClass {
    public:
        // declaring constructor (same as class name)
        // will run as soon after the obj is declared
        SyhmiClass(string n) {
            setName(n);
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main()
{
    SyhmiClass so("Syahmi Fauzi");
    SyhmiClass so2("Faiz Aiman Fauzi");
    // so.setName("Bro Syahmi Fauzi");
    cout << so.getName() << endl;
    cout << so2.getName() << endl;

    return 0;
}