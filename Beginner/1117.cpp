#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float score;
    float sum = 0.0;
    int count =0;
    while(1){
        cin>>score;
        if(score >= 0.0 && score <= 10.0){
            sum = sum + score;
            count++;
        }else{
            cout<<"nota invalida"<<endl;
        }

        if(count == 2)
            break;
    }

    cout<<fixed<<setprecision(2)<<"media = "<<sum/count<<endl;

    return 0;
}