#include<iostream>

using namespace std;

int main(){
    while(1){
        int x,y;
        cin>>x>>y;

        if(x == y)
            break;
        else if(x > y)
            cout<<"Decrescente"<<endl;
        else if(x<y)
            cout<<"Crescente"<<endl;
    }

    return 0;
}