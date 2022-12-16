#include <string>
#include <iostream>
#include <vector>

using namespace std;

class TextNode {
public:
    TextNode(const string &filename) : filename(filename) {}

    string filename;
};

class DirNode {
public:
    DirNode(const string &dir_name) : dir_name(dir_name) {}

    void add_textNode(const TextNode &textNode) {
        textNodes.push_back(textNode);
    }

    string dir_name;
    vector<TextNode> textNodes;
};

template<typename BaseClass>
class FileOptVisitor {
public:
    void visit(const DirNode &node) const {
        // TODO
    }

    void visit(const TextNode &node) const {
        // TODO
    }
};