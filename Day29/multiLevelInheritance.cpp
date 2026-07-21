#include<bits\stdc++.h>
using namespace std;

class Engineer{
    public:
    string name;
    Engineer(string name){
        this->name=name;
    }
    void aboutEngineer(){
        cout<<"My name is "<<name<<endl;
    }
};
class Employee :  public Engineer{
    public:
    int salary;
    string role;
    Employee(string name,int salary,string role):Engineer(name){
        this->salary=salary;
        this->role=role;
    }
    void aboutEmployee(){
        cout<<"I work as a "<<role<<endl;
        cout<<"My salary is "<<salary<<endl;
    }
    
};
class Manager : public Employee{
    public:
    string department;
    int numberOfEmployees;
    Manager(string name,int salary,string role,string department,int numberOfEmployees) : Employee(name,salary,role){
        this->name=name;
        this->salary=salary;
        this->role=role;
        this->department=department;
        this->numberOfEmployees=numberOfEmployees;
    }
    void aboutManager(){
        cout<<"I work in "<<department<<endl;
        cout<<"I lead a team of "<<numberOfEmployees<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Role: "<<role<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Number of employees working under "<<name<<": "<<numberOfEmployees<<endl;
    }
};
int main(){
    Manager manager("Alice", 500000, "Software Engineer", "IT", 30);
    manager.display();
}