#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int num,hours;
    cin>>num>>hours;
    double salary;
    cin>>salary;
    double amount  = hours * salary;
    cout<<"NUMBER = "<<num<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<amount<<endl;
    return 0;
}