#include <string>

enum Color {
    RED, BLACK, BLUE, GREEN
};

class withLabel {
    std::string label;
public:
    void setLabel(const std::string &label) {
        this->label = label;
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
    void setPrice(const std::string &label) {
        this->price = price;
    }

    int getPrice() {
        return price;
    }
};