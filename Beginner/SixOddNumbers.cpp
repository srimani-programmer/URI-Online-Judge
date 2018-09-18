#include<iostream>

using namespace std;

int main(){
    int val;
    cin>>val;
    int count = 0;
    for(int i=val;;i++){
        if(i%2 != 0){
            count++;
            cout<<i<<endl;
        }
        if(count == 6)
            break;
    }

    return 0;
}