#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int distance;
    double fuel;
    cin>>distance;
    cin>>fuel;

    double result = distance/fuel;

    cout<<fixed<<setprecision(3)<<result<<" km/l"<<endl;

    return 0;
}