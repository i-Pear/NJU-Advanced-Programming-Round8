#include <string>

enum Color {
    RED, BLACK, BLUE, GREEN
};

class withLabel {
    std::string label;
public:
    void setLabel(const std::string &_label) {
        this->label = _label;
    }

    std::string getLabel() {
        return label;
    }
};

class withColor {
public:

    void setColor(Color _color) {
        this->color = _color;
    }

    Color getColor() {
        return this->color;
    }

private:
    Color color;
};

class withPrice {
    int price;
public:
    void setPrice(int _price) {
        this->price = _price;
    }

    int getPrice() {
        return price;
    }
};