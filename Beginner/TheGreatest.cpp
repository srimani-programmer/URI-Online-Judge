#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int res = (n1 >n2) && (n1 > n3)? n1 : (n2 > n3)&&(n2 > n1)?n2:n3;
    cout<<res<<" eh o maior"<<endl;

    return 0;
}