#include<iostream>

using namespace std;

int main(){
    int i=1,j=7;

    while(i<=9){
        int count = 0;

        while(count < 3){
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
            j = j-1;
            count++;
        }
        j = j+count;
        i = i+2;
    }

    return 0;
}