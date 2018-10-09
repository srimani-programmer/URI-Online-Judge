#include<iostream>

using namespace std;

int main(){
    int a[100];

    for(int i=0;i<100;i++)
        cin>>a[i];

    int minVal = a[0];
    int position = 1;

    for(int i=0;i<100;i++){
        if(a[i] > minVal){
            minVal = a[i];
            position = i+1;
        }
    }

    cout<<minVal<<endl;
    cout<<position<<endl;

    return 0;
}