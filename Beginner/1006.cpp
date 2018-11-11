#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float val1,val2,val3,res;
    cin>>val1>>val2>>val3;

    res = ((val1*2)+(val2*3)+(val3*5))/(2+3+5);

    cout<<fixed<<setprecision(1)<<"MEDIA = "<<res<<endl;

    return 0;
}