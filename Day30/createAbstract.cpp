//create abstract class using pure functions
#include<bits\stdc++.h>
using namespace std;
class Payment{
    public:
    virtual void Pay(int amount)=0;
};
class UPI : public Payment{
    public :
    void Pay(int amount) override{
        cout<<"Amount of "<<amount<<"is processing using UPI "<<endl;
    }
};
class CreditCard : public Payment{
    public :
    void Pay(int amount) override{
       cout<<"Amount of "<<amount<<"is processing using Creditcard "<<endl;
    }
};
class Netbanking : public Payment{
    public :
    void Pay(int amount) override{
        cout<<"Amount of "<<amount<<"is processing using Netbanking "<<endl;
    }
};
class Wallet{
    public :
    void Pay(int amount){
        cout<<"Amount of "<<amount<<"is processing using Wallet "<<endl;
    }
};
int main(){
   UPI upi;
   CreditCard creditcard;
   upi.Pay(500);
   creditcard.Pay(1000);
}