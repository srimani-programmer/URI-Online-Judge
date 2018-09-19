#include<iostream>

using namespace std;

int main(){
    while(1){
        int num;
        cin>>num;

        if(num == 0)
            break;
        else
            for(int i=1;i<=num;i++){
                if(i<num)
                    cout<<i<<" ";
                else
                    cout<<i;
            }
                
            
        cout<<endl;
    }

    return 0;
}