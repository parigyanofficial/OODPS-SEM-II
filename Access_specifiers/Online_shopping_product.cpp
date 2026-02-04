// 4 Feb 2026


/*
Online shoppign product 
An e commerce system stores product details;

Class: Product
Data Members: productId, productName, price, stock
Tasks:  Create the class
        Creat two objects 
        display details of both products
*/



#include <iostream>
using namespace std;

class Product{
    private:
    string productId, productName;
    int price, stock;
    public:
    void inputDetail();
    void showDetail();
};

void Product::inputDetail(){
    cout<<"productId, productName, price, stock";
    cin>>productId>>productName>>price>>stock;
}

void Product::showDetail(){
    cout<<"\nProduct ID:"<<productId<<endl;
    cout<<"Product Name:"<<productName<<endl;
    cout<<"Price:"<<price<<endl;
    cout<<"Stock:"<<stock<<endl;
}

int main(){
    Product p1;
    Product p2;
    p1.inputDetail();
    p1.showDetail();
    p2.inputDetail();
    p2.showDetail();
}

/*
Sample input

P101 Laptop 55000 10
P102 Mobile 25000 25

*/
