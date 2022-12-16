#include <optional>
#include <string>
#include <fstream>

std::optional<std::string> read_file(const std::string& filename){
    try{
        std::ifstream ifs(filename);
        if(!ifs.good())return {};
        std::string s;
        ifs>>s;
        return s;
    }catch (std::exception& e){
        return {};
    }
}