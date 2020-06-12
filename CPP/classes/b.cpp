#include <iostream>
#include <string>
using namespace std;

class SyhmiClass {
    public:
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
    SyhmiClass so;
    so.setName("Bro Syahmi Fauzi");
    cout << so.getName() << endl;


    SyhmiClass so2;
    so2.setName("Paan");
    cout << so2.getName() << endl;

    return 0;
}