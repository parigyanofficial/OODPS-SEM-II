/*A library wants to manage books
Class name: Book
Attributes: bookid, title, author, price
Operations: inputdetail(), showdetail();

Question - Write a cpp program using class Book to inout and display book details for 3 books using an array of objects;
*/
#include <iostream>
using namespace std;

class Book{
    private:
    string bookid,title,author;
    int price;
    public:
    void inputDetail();
    void showDetail();
};

void Book::inputDetail(){
    cout<<"bookid,title,author and price";
    cin>>bookid>>title>>author>>price;
}

void Book::showDetail(){
    cout<<"\nBookid:"<<bookid<<endl;
    cout<<"Title:"<<title<<endl;
    cout<<"Author:"<<author<<endl;
    cout<<"Price:"<<price<<endl;
}

int main(){
    Book b[3]; //array of objects for 3 books
    
    for(int i=0;i<3;i++){
        b[i].inputDetail();
    }
    for(int i=0;i<3;i++){
        b[i].showDetail();
    }
    return 0;
}

/*
Sample input

B101 CppPrimer Lippman 550
B102 CleanCode Martin 650
B103 AlgorithmsSedgewick Sedgewick 720

  */
