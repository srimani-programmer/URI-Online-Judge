#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int code1,code2,quantity1,quantity2;
    float cost1,cost2;
    cin>>code1>>quantity1>>cost1;
    cin>>code2>>quantity2>>cost2;

    float totalPrice;

    totalPrice = (quantity1*cost1)+(quantity2*cost2);

    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<totalPrice<<endl;

    return 0;
}