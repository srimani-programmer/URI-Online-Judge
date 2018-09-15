#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double radius,area;
    cin>>radius;
    const double PI = 3.14159;
    area = PI * radius * radius;
    cout<<fixed<<setprecision(4)<<"A="<<area<<endl;

    return 0;
}