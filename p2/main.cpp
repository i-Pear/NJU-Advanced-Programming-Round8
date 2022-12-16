#include "implement.h"
#include <iostream>

using namespace std;

int main() {
    cout << sizeof(ClassWithFixedSize<1>)<<endl;
    cout << sizeof(ClassWithFixedSize<10>)<<endl;
    cout << sizeof(ClassWithFixedSize<50>)<<endl;
    cout << sizeof(ClassWithFixedSize<1000>)<<endl;
}