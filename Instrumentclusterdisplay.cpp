#include <iostream>
#include <random>
#include <thread>  
#include <chrono>  

using namespace std;

class vehicle {
public:
    double speed;
    double fuel;
    double temp;

    
    void update(double sp, double fl, double tmp) {
        speed = sp;
        fuel = fl;
        temp = tmp;
    }
};

class display : public vehicle {
public:

    void displaydetails() {
        cout << "Current Speed: " << speed << " KM/h" << " "
             << "Fuel Level: " << fuel << "%" << " "
             << "Temperature: " << temp << " C" << endl;
    }

  
    void updateRandomValues() {
        random_device rd;
        mt19937 gen(rd()); 

        uniform_int_distribution<> speedrange(0, 180);  
        uniform_int_distribution<> fuelrange(0, 100);  
        uniform_int_distribution<> temprange(90, 105);   

    
        double Speed1 = speedrange(gen);
        double Fuel1 = fuelrange(gen);
        double Temp1 = temprange(gen);

     
        update(Speed1, Fuel1, Temp1);
    }
};

int main() {
    display obj1;

    while (true) {
      
        obj1.updateRandomValues();
        obj1.displaydetails();
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
