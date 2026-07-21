// dynamic data members
class Student{
    public:
    string name;
    int *marks;

    // parameterized costructor
    Student(string name,int marks){
        this->name=name;
        this->mark=new int(marks);
    }
    // copy constructor
    // this is how internal/default copy cnstructor behaves
    Student(Student &st){
        this->name=st.name;
        this->marks=st.marks;
        cout<<"copy constructor called"<<endl;
    }
    // method
    void eat(){
        cout<<"Student eats"<<endl;
    }
    void studt(){
        cout<<"Student study"<<endl;
    }
    void sleep(){
        cout<<"Student sleeps"<<endl;
    }
}
int main(){
    Student s1("Hari",90);
    // Student s2(s1);calling custom copy constructor
    cout<<*s2.marks<<endl;
    cout<<s2.name<<endl;
    cout<<endl;
    cout<<
}