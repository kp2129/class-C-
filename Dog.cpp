// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        Car(string b, float m) {
            brand = b;
            milage = m;
        };
        Car(string b) {
            brand = b;
        };
        ~Car() {
            cout << "\n" << brand << " is dead\n";
        }
        
        void makeNoise() {
        cout << "Beep Beep!";
    };
    private:
        string milage;
};

class Dog {
    public:
        string name;
        Dog(string n, int a) {
            name = n;
            age = a;
        };
        void birthday() {
            age++;
        }
        void woof() {
            cout << "Woof!";
        }
    private:
        int age;
};

int main() {
    // Car car1("renault", 435212.31);
    // car1.makeNoise();
    
    // Car* car2 = new Car("microsoft vehicle");
    // car2-> makeNoise();
    
    // delete car2;
    
    Dog dog1("Reksis", 6);
    dog1.woof();
    

    return 0;
}
