#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int productcode,items;
    cin>>productcode>>items;
    float productprizes[5] = {4.00,4.50,5.00,2.00,1.50};
    double amount;
    for(int i=0;i<=5;i++){
        if(i+1 == productcode){
            amount = productprizes[i] * items;
            break;
        }
    }

    cout<<fixed<<setprecision(2)<<"Total: R$ "<<amount<<endl;
}