#include "implement.h"
#include <iostream>

using namespace std;

int main(){
    cout<<Equal(1,2)<<endl;
    cout<<Equal(1.0,1.5)<<endl;
    cout<<Equal(1.0f,1.0001f)<<endl;
    cout<<Equal(100L,100L)<<endl;
    cout<<Equal(100.0l,100.000001l)<<endl;
}