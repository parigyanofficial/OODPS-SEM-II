//bank wants a system to manage customers create a class and demonstrate object creation
//crete a class in cpp to demonstrate object creation in main function
//class nam backaccount
//data members are acc_no, cust_name, balance
//member function is display

#include <iostream>
using namespace std;
class Bank_Acoount{
    public:
    int acc_no,balance;
    string customer_name;
    void display(){
        cout<<acc_no<<endl;
        cout<<customer_name<<endl;
        cout<<balance;
    };
};

int main(){
    Bank_Acoount s1;
    s1.acc_no=066;
    s1.customer_name="Raj";
    s1.balance=25000;
    s1.display();
}
