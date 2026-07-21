#include<bits\stdc++.h>
using namespace std;
//Student -boy,girl
class Student{
    public:
    string name;
    int marks;
    void aboutStudent(){
        cout<<"I study "<<endl;
    }
};
class Boy: public Student{
    public:
    string favGame;
    Boy(string favGame){
        this->favGame=favGame;
    }
    void playgame(){
        cout<<"Boy plays game "<<endl;
    }
};
class Girl: public Student{
    public :
    bool songName;
    Girl(bool songName){
        this->songName=songName;
    }
    void sing(){
        cout<<"Girl sings "<<songName<<endl;
    }
};
int main(){
    Boy boy("Temple Run");
    Girl girl(false);
}