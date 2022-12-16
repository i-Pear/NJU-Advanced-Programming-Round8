#include "implement.h"
#include <iostream>

using namespace std;

int main() {
    auto file1= read_file("1.txt");
    if(file1){
        cout<<file1.value()<<endl;
    }else{
        cout<<"File 1 read error."<<endl;
    }
    auto file2= read_file("2.txt");
    if(file2){
        cout<<file2.value()<<endl;
    }else{
        cout<<"File 2 read error."<<endl;
    }
}