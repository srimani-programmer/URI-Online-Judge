#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int val;
    cin>>val;

    for(int i=1;i<=val;i++){
        cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<endl;
    }

    return 0;
}