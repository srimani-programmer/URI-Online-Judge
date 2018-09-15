#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;

    while(testcases--){
        int num;
        cin>>num;

        if(num == 0)
            cout<<"NULL"<<endl;
        else{
            if(num > 0)
            {
                if(num%2 == 0)
                    cout<<"EVEN POSITIVE"<<endl;
                else
                    cout<<"ODD POSITIVE"<<endl;
            }else{
                if(abs(num)%2 == 0)
                    cout<<"EVEN NEGATIVE"<<endl;
                else
                    cout<<"ODD NEGATIVE"<<endl;
            }
        }
    }

    return 0;
}