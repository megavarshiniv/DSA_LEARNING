#include<bits/stdc++.h>
using namespace std;
class Engineer{
    public:
    string name;
    void aboutEngineer(){
        cout<<"My name is: "<<name<<endl;
    }
};
class Teacher{
    public :
    string subject;
    void aboutTeacher(){
        cout<<"I teach "<<subject<<endl;
    }
};
class Youtuber{
    public :
    int subscribers;
    void aboutYoutubers(){
        cout<<"I have a subscribers count of "<<subscribers<<endl;
    }
};
class Person:public Engineer,public Teacher,public Youtuber{
    public:
    int age;

    Person(string name,int age,string subject,int subscribers){
        this->name=name;
        this->age=age;
        this->subject=subject;
        this->subscribers=subscribers;
    }
    void aboutPerson(){
        cout<<"I am "<<age<<"years old "<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Subscribers: "<<subscribers<<endl;
    }
};
int main(){
    Person person("Alice",20,"Physics",2000);
    person.display();
}