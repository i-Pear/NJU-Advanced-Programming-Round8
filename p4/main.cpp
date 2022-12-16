#include "implement.h"
#include <iostream>

using namespace std;

class A{

};

int main(){
    cout<<is_same_type(1,2)<<endl;
    cout<<is_same_type(1,A())<<endl;
    cout<<is_same_type(new A(),2)<<endl;
    cout<<is_same_type(A(),A())<<endl;
}