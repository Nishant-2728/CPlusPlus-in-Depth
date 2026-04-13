#include<iostream>
#include<string>
using namespace std;
class Car{
protected:
    string brand;
    string model;
    bool isEngineOn;
    int currSpeed;
public:
    Car(string b,string m){
        this->brand=b;
        this->model=m;
        isEngineOn=false;
        currSpeed=0;
    }
    void startEngine(){
        isEngineOn=true;
        cout<<brand<<" "<<model<<": Engine started"<<"\n";
    }
    void stopEngine(){
        isEngineOn=false;
        cout<<brand<<" "<<model<<": Engine turned off"<<"\n";
    }
    void accelerate(){
        if(!isEngineOn){
            cout<<brand<<" "<<model<<": Cannot accelerate"<<"\n";
            return ;
        }
        currSpeed+=20;
        cout<<brand<<" "<<model<<": Accelerating to "<<currSpeed<<" km/h"<<"\n";
    }
};
class ManualCar: public Car{
private:
    int currentGear;
public:
    ManualCar(string b,string m): Car(b,m){
        currentGear=0;
    }
    void shiftGear(int gear){
        currentGear=gear;
        cout<<brand<<" "<<model<<": Shifted to gear "<<currentGear<<"\n";
    }
};
class ElectricCar: public Car{
private:
    int batteryLevel;
public:
    ElectricCar(string b,string m):Car(b,m){
        batteryLevel=100;
    }
    void chargeBattery(){
        batteryLevel=100;
        cout<<brand<<" "<<model<<": Battery fully charged"<<"\n";
    }
};
int main(){
    ManualCar myManualCar("Suzuki","WagonR");
    myManualCar.startEngine();
    myManualCar.shiftGear(1);
    myManualCar.accelerate();
    myManualCar.stopEngine();
    cout<<"\n";
    ElectricCar myElectricCar("Tesla", "Model 5");
    myElectricCar.startEngine();
    myElectricCar.chargeBattery();
    myElectricCar.accelerate();
    myElectricCar.stopEngine();
}
