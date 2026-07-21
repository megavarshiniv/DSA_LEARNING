// #include<bits\stdc++.h>
// using namespace std;
// class Student{
//     public :
//     string name;
//     int age;
//     void aboutstudent(){
//         cout<<"My name is "<<name<<endl;
//         cout<<"My age is : "<<age<<endl;
//     }
// };
// class Male{
//     public:
//     int numOfMaleStudents;
//     void numOfMale(){
//         cout<<"Students in male: "<<endl;
//     }
// };
// class Female{
//     public :
//     int numOfFemaleStudents;
//     void numOfFemale(){
//         cout<<"Studemts in female: "<<endl;
//     }
// };
// class Boy : public Student , public Male{
//     public:
//     string gender;
//     Boy(string name,int age,int numofMaleStudents,string gender){
//         this->name=name;
//         this->age=age;
//         this->numOfMaleStudents=numOfMaleStudents;
//         this->gender=gender;
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Male students: "<<numOfMaleStudents<<endl;
//         cout<<"Gender: "<<gender<<endl;
//     }
// };
// class Girl : public Student , public Female{
//     public:
//     string gender;
//     Girl(string name,int age,int numOfFemaleStudents,string gender){
//         this->name=name;
//         this->age=age;
//         this->numOfFemaleStudents=numOfFemaleStudents;
//         this->gender=gender;
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Female students: "<<numOfFemaleStudents<<endl;
//         cout<<"Gender: "<<gender<<endl;
//     }
// };
// int main(){
//     Boy boy("Alice",20,11,"male");
//     Girl girl("Lilly",18,5,"Female");
//     boy.display();
//     girl.display();
// }
// Student - Boy, Girl
#include <string>
#include <iostream>
using namespace std;

class Student{
    public: 
    string name;
    int marks;

    void study(){
        cout << "Student study" << endl;
    }
};

class Male{
    public:
    string gender;

    void maleIntro(){
        cout << "Gender is " << gender << endl;
    }
};

class Female{
    public:
    string gender;

    void FemaleIntro(){
        cout << "Gender is " << gender << endl;
    }usu
};

class Boy: public Student, public Male{
    public:
    Boy(string name, int marks, string gender){
        this -> name = name;
        this -> marks = marks;
        this -> gender = gender;
    }

    void boyIntro(){
        cout << "My name is " << name << endl;
        cout << "Gender is " << gender << endl;
        cout << "I got " << marks << endl;
    }
};

class Girl: public Student, public Female{
    public:
    Girl(string name, int marks, string gender){
        this -> name = name;
        this -> marks = marks;
        this -> gender = gender;
    }
    void girlIntro(){
        cout << "My name is " << name << endl;
        cout << "Gender is " << gender << endl;
        cout << "I got " << marks << endl;
    }
};

int main(){
   Boy boy("Rahul", 100, "Male");
   boy.boyIntro();

   Girl girl("Shreya", 200, "Female");
   girl.girlIntro();
}