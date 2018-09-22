#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    string name;
    double salary,sales;
    cin>>name;
    cin>>salary>>sales;
    double percentage = sales * 0.15;
    double finalsalary = percentage + salary;

    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<finalsalary<<endl;

    return 0;
}