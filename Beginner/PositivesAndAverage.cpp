#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float a[6];
    for(int i=0;i<6;i++)
        cin>>a[i];

    int count = 0;
    double sum = 0;
    for(int i=0;i<6;i++)
        if(a[i] > 0){
            count++;
            sum = sum + a[i];
        }
            

    cout<<count<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<sum/count<<endl;

    return 0;
}