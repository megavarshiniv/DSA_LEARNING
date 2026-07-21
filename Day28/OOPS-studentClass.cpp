class Student{
    public:
        string name;

    private:
        int rollNo;

    public:
        int marks;
        bool isPresent;
    
    void study(){
        cout<<"Default constructor called"<<endl;
    }
    
};
int main(){
    Student s1;
    s1.name="ABC";  /*set name*/
    cout<<s1.name<<endl;/*get name*/

    s1.marks=100;/*set marks*/
    cout<<s1.marks<<endl;/*get marks*/
    
    s1.study();/*call study function*/  
}