#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int speed,timespent;
    cin>>speed>>timespent;

    int distance = speed*timespent;

    float petrolSpent = (distance+0.0)/12;

    cout<<fixed<<setprecision(3)<<petrolSpent<<endl;

    return 0;
}