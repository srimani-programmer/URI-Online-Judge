#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;

    while(testcases--){
        int a,b;
        cin>>a>>b;
        if(b == 0)
            cout<<"divisao impossivel"<<endl;
        else{
            double res = (double)a/b;
            cout<<fixed<<setprecision(1)<<res<<endl;
        }
    }

    return 0;
    
}