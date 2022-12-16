#include "implement.h"
#include <iostream>
#include <string>

template<typename... Mixins>
class Book : public Mixins ... {
public:
    std::string name;

    Book() = default;

    Book(const std::string &name) : name(name) {}
};

int main() {
    Book<withLabel, withColor, withPrice> book;
    book.setColor(BLUE);
    book.setLabel("C++ Primer");
    book.setPrice(100);
    std::cout<<book.getPrice()<<std::endl;
    std::cout<<book.getColor()<<std::endl;
    std::cout<<book.getLabel()<<std::endl;
}