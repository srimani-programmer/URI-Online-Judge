#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float sum = 1;
    for(float i=2.0;i<=100;i++){
        sum = sum + (1/i);
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;

    return 0;
}