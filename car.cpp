#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
public:
    virtual void start() {
        std::cout << "Starting the car" << std::endl;
    }
    
    virtual void showInfo() {
        std::cout << "This is a car" << std::endl;
    }

    virtual ~Car() {}
};

class Pride : public Car {
public:
    void start() override {
        Car::start();
        std::cout << "Pride is starting with clutch and brake" << std::endl;
    }

    void showInfo() override {
        std::cout << "This is a Pride car" << std::endl;
    }
};

class Benz : public Car {
private:
    std::vector<std::string> sensors;

public:
    Benz() {
        sensors.push_back("Parking Sensor");
        sensors.push_back("Blind Spot Sensor");
        sensors.push_back("Lane Assist Sensor");
    }

    void start() override {
        Car::start();
        std::cout << "Benz is starting with additional features" << std::endl;
        
        std::cout << "Benz sensors: ";
        for (const auto& sensor : sensors) {
            std::cout << sensor << " ";
        }
        std::cout << std::endl;
    }

    void showInfo() override {
        std::cout << "This is a Benz car" << std::endl;
    }
};

int main() {
    Car* myPride = new Pride();
    Car* myBenz = new Benz();

    myPride->start();
    myPride->showInfo();

    std::cout << std::endl;

    myBenz->start();
    myBenz->showInfo();

    delete myPride;
    delete myBenz;

    return 0; 
}