//4 Feb 2026
//calling a function outside class......readabilty
#include <iostream>
using namespace std;

class Student{
    private:
    int roll;
    string name;
    public:
    void getdata();
    void display();
};

void Student::getdata()
{
    cout<<"Enter rollno,name";
    cin>>roll>>name;
}
void Student::display()
{
    getdata();
    cout<<"Rollno:"<<roll<<endl;
    cout<<"Name:"<<name;
}

int main(){
    Student s1;
    s1.display();
    return 0;
}
