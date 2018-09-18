#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int a[size];

    for(int i=0;i<size;i++)
        cin>>a[i];

    int in = 0,out = 0;
    for(int i=0;i<size;i++){
        if(a[i] >= 10 && a[i] <= 20)
            in++;
        else
            out++;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}