#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int val;
        cin>>val;

        int sum =0;
        for(int i=1;i<val;i++){
            if(val%i == 0)
                sum = sum + i;
        }
        if(sum == val)
            cout<<val<<" eh perfeito"<<endl;
        else
            cout<<val<<" nao eh perfeito"<<endl;
}

    return 0;
}