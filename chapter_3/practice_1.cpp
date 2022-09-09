#include <iostream>
#include <string>

using namespace std;

class Book{

    string title;
    string writer;
    int    price;

public:
    Book(string title, string writer, int price);
    Book(const Book& other);

    string get_title() const;
    string get_writer() const;
    int    get_price() const;

    void set_title(string new_title);
    void set_writer(string writer);
    void set_price(int price);
};

string Book::get_title() const{
    return title;
}

string Book::get_writer() const{
    return writer;
}

int Book::get_price() const{
    return price;
}

void Book::set_title(string new_title){
    title = new_title;
}

void Book::set_writer(string new_writer){
    writer = new_writer;
}

void Book::set_price(int new_price){
    price = new_price;
}

// コンダクター
Book::Book(string title, string writer, int price){
    set_title(title);
    set_writer(writer);
    set_price(price);

    cout << "init fin." << endl;
}

// コピー
Book::Book(const Book& other){
    set_title(other.get_title());
    set_writer(other.get_writer());
    set_price(other.get_price());
    cout << "copy fin." << endl;
}

void show_Book_info(Book* book1){
    
    cout << book1->get_title() << endl;
    cout << book1->get_writer() << endl;
    cout << book1->get_price() <<endl;
}

int main(void){

    Book book1("dokushuu cpp", "takahashikouhei", 1230);

    show_Book_info(&book1);

    Book copy(book1);

    show_Book_info(&copy);

    return 0;
}