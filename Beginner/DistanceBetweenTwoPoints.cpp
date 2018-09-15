#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
    float x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    float X_coor,Y_coor;
    X_coor = pow((x2 - x1),2);
    Y_coor = pow((y2 - y1),2);
    double distance = sqrt(X_coor + Y_coor);
    cout<<fixed<<setprecision(4)<<distance<<endl;

    return 0;
}