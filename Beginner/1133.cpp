#include<iostream>

using namespace std;

int main(){
    int val1,val2;
    cin>>val1>>val2;

    if(val1<val2){
        for(int i=val1+1;i<val2;i++){
            if(i%5 == 2 || i%5 == 3)
                cout<<i<<endl;
        }
    }else{
        for(int i=val2+1;i<val1;i++){
            if(i%5 == 2 || i%5 == 3)
                cout<<i<<endl;
        }
    }

    return 0;
}