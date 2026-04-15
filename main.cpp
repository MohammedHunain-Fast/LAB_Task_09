#include <iostream>
#include "Book.h"

int main() {
    Book book1("The C++ Programming Language", "Bjarne Stroustrup", "978-0321563842");

    std::cout << book1.getTitle() << "\n";
    std::cout << book1.getAuthor() << "\n";
    std::cout << book1.getISBN() << "\n";

    return 0;
}
