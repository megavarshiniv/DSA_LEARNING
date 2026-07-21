#include<bits/stdc++.h>
using namespace std;

class vehicle{
    public:
    int speed;
    string color;
    int gears;
    int wheels;
    void start(){
        cout<<"Starts the vehicle"<<endl;
    }
    void applybrakes(){
        cout<<"Applying brakes!!!"<<endl;
    }
};
class Car:public vehicle{
    public:
    string brandName;

    Car(int speed,string color,int  wheels,string brandName){
        this->speed=speed;
        this->color=color;
        this->wheels=wheels;
        this->brandName=brandName;

    }
    void openSunroof(){
        cout<<"Opening sunroof"<<endl;
    }
    void display(){
        cout<<"Car speed: "<<speed<<endl;
        cout<<"Car color: "<<color<<endl;
        cout<<"Number of wheels: "<<wheels<<endl;
        cout<<"Car brandname: "<<brandName<<endl;
    }
};

int main(){
    Car c(200,"red",4,"Toyota");
    // cout<<"Car speed: "<<c.speed<<endl;
    // cout<<"Car color: "<<c.color<<endl;
    // cout<<"Number of wheels: "<<c.wheels<<endl;
    // cout<<"Car brandname: "<<c.brandName<<endl;
    c.display();
    c.start();
}