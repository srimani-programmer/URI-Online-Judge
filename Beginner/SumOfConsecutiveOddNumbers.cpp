#include<iostream>

using namespace std;

int main(){
    int hb,lb;
    cin>>hb>>lb;
    int sum =0;
    for(int i=lb+1;i<hb;i++){
        if(i%2 != 0)
            sum = sum + i;
    }

    cout<<sum<<endl;

    return 0;
}