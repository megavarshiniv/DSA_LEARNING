#include<bits\stdc++.h>
using namespace std;
class ComplexNumber{
    int real;
    int imaginary;
    public: 
    ComplexNumber(){
        real=0;
        imaginary=0;
    }
    ComplexNumber(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    ComplexNumber operator+(const ComplexNumber &c){
        int newreal=this->real+c.real;
        int newimaginary=this->imaginary+c.imaginary;
        //return ComplexNumber(newreal,newimaginary);
        ComplexNumber temp;
        temp.real=newreal;
        temp.imaginary=newimaginary;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main(){
    //2+3i
    ComplexNumber c1(2,3);
    //3+4i
    ComplexNumber c2(3,4);
    ComplexNumber c3;
    c3=c1+c2;
    c3.display();
}