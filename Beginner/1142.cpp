#include<iostream>

using namespace std;

int main(){
    int val;
    cin>>val;

    for(int i=1;i<val*4;i=i+4){
        cout<<i<<" "<<i+1<<" "<<i+2<<" "<<"PUM"<<endl;
    }

    return 0;
}