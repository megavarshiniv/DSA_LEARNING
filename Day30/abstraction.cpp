#include<bits\stdc++.h>
using namespace std;
class CoffeeMachine{
    private:
    void boilWater(){
        cout<<"Water is boiling"<<endl;
    }
    void addMilk(){
        cout<<"Milk is added"<<endl;
    }
    void addCoffeepowder(){
        cout<<"Coffee powder is added"<<endl;
    }
    public:
    void MakeCoffee(){
        cout<<"Coffee is preparing...."<<endl;
        boilWater();
        addMilk();
        addCoffeepowder();
        cout<<"Coffee is ready!!!"<<endl;
    }
};
int main(){
    CoffeeMachine coffee;
    coffee.MakeCoffee();
}