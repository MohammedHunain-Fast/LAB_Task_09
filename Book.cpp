#include "Book.h"

Book::Book(std::string t, std::string a, std::string i) : title(t), author(a), ISBN(i) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getISBN() const {
    return ISBN;
}
