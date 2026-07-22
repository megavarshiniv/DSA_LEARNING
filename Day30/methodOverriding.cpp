#include<bits\stdc++.h>
using namespace std;
class Animal{
    public:
    string eats;
    public:
    virtual void sound(){
        cout<<"Animal makes sound"<<endl;
    }
};
class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};
class Cat : public Animal{
    public :
    void sound(){
        cout<<"Cat meows"<<endl;
    }
};
int main(){
    Dog d;
    // d.sound();
    Cat c;
    //c.sound();
    Animal *p;
    p=&d;
    p->sound();
    p=&c;
    p->sound();
}