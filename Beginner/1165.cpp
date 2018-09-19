#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;

    while(testcases--){
        int val;
        cin>>val;
    int count = 0;
        for(int i=2;i<val;i++){
            if(val%i == 0){
                count++;
                break;
            }
        }
        if(count == 0)
            cout<<val<<" eh primo"<<endl;
        else
            cout<<val<<" nao eh primo"<<endl;
    }

    return 0;
}