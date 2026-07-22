#include<bits\stdc++.h>
using namespace std;
class Student{
    void study(){
        cout<<"Student study"<<endl;
    }
    void calculateMarks(){
        cout<<"calculating marks"<<endl;
    }
    void makeReports(){
        cout<<"Making reports"<<endl;
    }
};
//Applying SRP
class Student{
    void study(){
        cout<<"Student study"<<endl;
    }
};
class MarksCalculator{
    void calculateMarks(){
        cout<<"Calculating marks"<<endl;
    }
};
class ReportGenerator{
    void generateReports(){
        cout<<"Generating reports"<<endl;
    }
};