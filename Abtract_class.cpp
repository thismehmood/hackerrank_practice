#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
    class MyBook : public Book{
        protected:
                      int new_price;
        public:
    //   Class Constructor
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
             MyBook(string title, string author, int price):Book(title,author){
                //   Book(title,author);
                  new_price = price;        
                //    new_price = price;
            }      
    
    
    // Write your constructor here
    
      void display(){
    cout << "Title: " << Book::title << "\nAuthor: " << Book::author <<"\nPrice: " << new_price << endl;
            }
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
};// End class

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}

