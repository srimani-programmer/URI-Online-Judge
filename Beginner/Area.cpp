#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    const double PI = 3.14159;
    double triangle,trapezoid,circular,rectangle,quadrilateral;
    triangle = 0.5 * a * c;
    circular = PI * c * c;
    rectangle = a * b;
    trapezoid = ((a+b)/2)*c;
    quadrilateral = b * b;

    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<triangle<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<circular<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trapezoid<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<quadrilateral<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<rectangle<<endl;

    return 0;

}