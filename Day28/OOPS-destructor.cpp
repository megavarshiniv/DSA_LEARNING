#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int* marks;

    // parameterized constructor
    Student(string name,int marks){
        this-> name=name;
        ths-> marks=new int(marks);
        cout<<"Parameterized constructor called"<<endl;
    }
    
    // destructor to deallocate dynamic memory
    Student(){
        delete marks;
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    Student s("Rohit",100);
    cout<<"name:"<<s.name<<"marks:"<<*s.marks<<endl;
}
