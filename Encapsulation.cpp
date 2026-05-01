#include <bits/stdc++.h>
using namespace std;
class SportsCar{
private:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;
public:
    SportsCar(string b, string m){
        this->brand=b;
        this->model=m;
        isEngineOn=false;
        currentGear=0;
        currentSpeed=0;
    }
    //getters and setters
    int getCurrentSpeed(){
        return this->currentSpeed;
    }
    void startEngine(){
        isEngineOn=true;
        cout<<brand<<" "<<model<<" "<<":Engine starts!"<<"\n";
    }
    void shiftGear(int gear){
        if(!isEngineOn){
            cout<<brand<<" "<<model<<" "<<":Engine is off! Cannot shift gear"<<"\n";
            return ;
        }
        currentGear=gear;
        cout<<brand<<" "<<model<<" "<<":Shifted to gear "<<currentGear<<"\n";
    }
    void accelerate(){
        if(!isEngineOn){
            cout<<brand<<" "<<model<<" "<<":Engine is off! Cannot accelerate"<<"\n";
            return ;
        }
        currentSpeed+=20;
        cout<<brand<<" "<<model<<" "<<":Accelerating to "<<currentSpeed<<" km/h"<<"\n";
    }
    void stopEngine(){
        isEngineOn=false;
        currentSpeed=0;
        currentGear=0;
        cout<<brand<<" "<<model<<" "<<":Engine turned off"<<"\n";
    }
};
int main() {
	SportsCar* myCar=new SportsCar("Ford","Mustang");
	myCar->startEngine();
	myCar->shiftGear(1);
	myCar->accelerate();
	myCar->shiftGear(2);
	myCar->accelerate();
	cout<<"Current Speed is :"<<myCar->getCurrentSpeed()<<" km/h"<<"\n";
	myCar->stopEngine();
}
