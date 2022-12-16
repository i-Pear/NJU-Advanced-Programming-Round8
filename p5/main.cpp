#include "implement.h"

using namespace std;

class ListFileOpt : public FileOptVisitor<ListFileOpt> {
public:
    void visitDirNode(const DirNode &node) const {
        cout << "Entered [DirNode] " << node.dir_name << endl;
        for (auto &subNode: node.textNodes) {
            visit(subNode);
        }
        cout << "Exited [DirNode] " << node.dir_name << endl;
    }

    void visitTextNode(const TextNode &node) const {
        cout << "[TextNode] " << node.filename << endl;
    }
};

int main() {
    DirNode dir1("dir1");
    dir1.add_textNode({"file1"});
    dir1.add_textNode({"file2"});
    dir1.add_textNode({"file3"});

    ListFileOpt lsOpt;
    lsOpt.visit(dir1);
}