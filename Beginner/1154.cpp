#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int count = 0;
    int sum =0;
    while(1){
        int age;
        cin>>age;

        if(age > 0){
            count++;
            sum = sum + age;
        }else
            break;
    }
    float average = (sum+0.0)/(count+0.0);

    cout<<fixed<<setprecision(2)<<average<<endl;

    return 0;
}