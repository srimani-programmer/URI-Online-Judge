#include<iostream>

using namespace std;

int main(){
    int num;
    while(1){
        cin>>num;
        int sum = 0;
        if(num == 0)
            break;
        else{
            int count = 0;
            for(int i=num;;i++){
                if(i%2 == 0){
                    count++;
                    sum = sum + i;
                } 
                if(count == 5)
                    break;       
            }

            cout<<sum<<endl;
        }
    }

    return 0;
}