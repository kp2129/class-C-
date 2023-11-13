#include <iostream>
using namespace std;

// Class car
class Car {
public:
    string brand;
    Car(string brand, float mileage) {
        this->brand = brand;
        this->mileage = mileage;
        cout << brand << " is created \n";
    }
    
    Car(string brand) {
        this->brand = brand;
    }
    
    ~Car(){
        cout << brand << " is dead! \n";
    }

    float getMileage() const {
        return mileage;
    }

    void makeNoise() {
        cout << "Beep, beep!";
    };
    
private:
    float mileage = 0;
};

int main() {
    Car car1("Mazda", 43244);
    cout << car1.brand << "\n";
    cout << car1.getMileage() << " km \n";
    car1.makeNoise();
    cout << "\n";

    Car* car2 = new Car("Tesla", 12.2);
    cout << car2->brand << " \n";
    cout << car2->getMileage() << " km \n";
    car2->makeNoise();
    cout << "\n";

    delete car2;

    return 0;
}
