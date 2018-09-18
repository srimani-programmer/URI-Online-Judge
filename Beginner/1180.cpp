#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int a[size];

    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int minval = a[0];
    int pos = 0;

    for(int i=1;i<size;i++){
        if(minval>a[i]){
            minval = a[i];
            pos = i;
        }
    }

    cout<<"Menor valor: "<<minval<<endl;
    cout<<"Posicao: "<<pos<<endl;

    return 0;

}