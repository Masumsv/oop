#include <iostream>
using namespace std;

class Benz {
public:
    bool startEngine() {
        if (startElectronicServices() && startLightSystem()) {
           cout << "Engine started successfully." << endl;
            return true;
        } else {
            cout << "Failed to start engine." << endl;
            return false;
        }
    }
private:

    bool startElectronicServices() {
       
        cout << "Electronic services started." << endl;
        return true;   
    }
    bool startLightSystem() {
       
        cout << "Light system started." << endl;
        return true;  
    }
};
int main() {
    Benz b; 
    bool r = b.startEngine();  
    return 0;
}
