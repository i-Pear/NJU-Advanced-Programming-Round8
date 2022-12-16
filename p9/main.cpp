#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int len;
    cin>>len;
    vector<int> v;
    while (len--){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    int op,val;
    while (n--){
        cin>>op;
        if(op==1){
            cin>>val;
            v.push_back(val);
        }else{
            // show
            sort(v.begin(),v.end());
            cout<<v[int(ceil(v.size()/2-1))]<<endl;
        }
    }

}