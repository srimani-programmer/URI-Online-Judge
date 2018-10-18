#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int val1,val2;
        cin>>val1>>val2;
            int sum = 0;
        if(val1 < val2){
            for(int i=val1+1;i<val2;i++){
                if(i%2 != 0)
                    sum = sum + i;
            }
        }else{
            for(int i=val2+1;i<val1;i++){
                if(i%2 != 0)
                    sum = sum + i;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}