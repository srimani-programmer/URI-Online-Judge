#include<iostream>

using namespace std;

int main(){
    int val;
    cin>>val;
    int fact = 1;

    for(int i=1;i<=val;i++)
        fact = fact * i;

        cout<<fact<<endl;

        return 0; 
}