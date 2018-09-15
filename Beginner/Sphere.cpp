#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int radius;
    cin>>radius;
    double volume;
    const double PI = 3.14159;

    volume = (4.0/3.0)* PI * pow(radius,3);

    cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<endl;

    return 0;

}