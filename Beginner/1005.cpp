#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float val1,val2,res;
    cin>>val1>>val2;

    res = ((val1*3.5)+(val2*7.5))/(3.5+7.5);
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<res<<endl;

    return 0;
}