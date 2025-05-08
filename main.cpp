#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string driveMode;

    Car(string b, string d) {
        brand = b;
        driveMode = d;
        cout << "Constructing " << brand << "_Car" << endl;
    }

    void showDriveMode() {
        cout << brand << " : Drive Mode = " << driveMode << endl;
    }
};

class BMW_Car : public Car {
public:
    BMW_Car() : Car("BMW", "Rear-wheel") {}
};

class AUDI_Car : public Car {
public:
    AUDI_Car() : Car("Audi", "Front-wheel") {}
};

class BENZ_Car : public Car {
public:
    BENZ_Car() : Car("Benz", "Front-wheel") {}
};


int main() {
    BMW_Car bmw;
    bmw.showDriveMode();

    AUDI_Car audi;
    audi.showDriveMode();

    BENZ_Car benz;
    benz.showDriveMode();

    return 0;
}
