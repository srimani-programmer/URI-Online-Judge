#include<iostream>

using namespace std;

int main(){
    while(1){
        int val1,val2;
        cin>>val1>>val2;
    int sum = 0;
        if(val1 <= 0 || val2 <= 0)
            break;
        else if(val1 > val2){
            for(int i=val2;i<=val1;i++){
                cout<<i<<" ";
                sum = sum + i;
            }
            cout<<"Sum="<<sum<<endl;
        }else{
            for(int i=val1;i<=val2;i++){
                cout<<i<<" ";
                sum = sum + i;
            }
            cout<<"Sum="<<sum<<endl;
        }
    }

    return 0;
}