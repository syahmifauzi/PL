#include <iostream>
#include <string>
using namespace std;

class Transport {
    private:
        int tTyres;
        string color;
        float speed;
    public:
        // Constructor
        Transport(float s, string c) {
            setSpeed(s);
            setColor(c);
            cout << "Constructor working" << endl;
        }
        // Setter
        void setSpeed(float s) {
            s = s * 20;
            this->speed = s;
        }
        void setColor(string c) {
            this->color = c;
        }
        void setTotalTyres(int t) {
            this->tTyres = t; 
        }
        // Getter
        float getSpeed() const;
        string getColor() const;
        int getTotalTyres() const;
        // Destructor
        ~Transport() {
            cout << "Destructor working" << endl;
        }
};

// Getter
float Transport::getSpeed() const {
    return this->speed;
}

string Transport::getColor() const {
    return this->color;
}

int Transport::getTotalTyres() const {
    return this->tTyres;
}
