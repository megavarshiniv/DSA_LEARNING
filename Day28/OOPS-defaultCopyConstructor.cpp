#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int *marks;
    int rollno;
    // default constructor
    Student(){
        // default initial values
         name = "Nithya sri";
        rollno = 123;
        marks = new int (90);
        cout<<"Default Construcctor called"<<endl;
    }
    void study(){
        cout<<name<<" is studying"<<endl;
    }
}
int main(){
    Student s1;
    Student s2=s1;

    // s2.study;

    // modify s1 and s2
    // *s1.marks = 90;modifying through s1
    cout<<"s1.marks:"<<*s1.marks<<endl;/*90*/
    cout<<"s2.marks:"<<*s2.marks<<endl;/*50*/

    // print the address of object s1 and s2
    cout<<"address of s1:"<<s1.marks<<endl;
    cout<<"address of s2:"<<s2.marks<<endl;

    // modify through s2
    *s2.marks=100;
    cout<<"s1 marks after modifying through s1:"<<*s1.marks<<endl;/*100*/
    cout<<"s2 marks after modifying through s2"<<*s2.marks<<endl;/*100*/

}
