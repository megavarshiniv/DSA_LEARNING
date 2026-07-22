#include<bits\stdc++.h>
using namespace std;
class Shape{
    public :
    virtual void area()=0;
};
class Circle : public Shape{
    public :
    int radius;
    public :
    Circle(int r){
       this-> radius=r;
    }
    public :
    void area(){
        cout<<"Area of circle is : " <<3.14*radius*radius<<endl;
    }
};
class Rectangle : public Shape{
    public :
    int length;
    int width;
    public :
    Rectangle(int l,int w){
        this->length=l;
        this->width=w;
    }
    public :
    void area(){
        cout<<"Area of Rectangle is : "<<length*width<<endl;
    }
};
class Square : public Shape{
    public :
    int a;
    public :
    Square(int a){
        this->a=a;
    }
    public :
    void area(){
        cout<<"Area of Square is : "<<a*a<<endl;
    }
};
int main(){
    Circle c(5);
    Rectangle r(5,10);
    Square s(4);
    c.area();
    r.area();
    s.area();
}