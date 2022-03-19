#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    double lado, radio, pi=3.14159265358979;
    int cantidades;
    cin >> cantidades;
    double total[cantidades];
    for(int i=0; i < cantidades;i++)
    {
        cin >> lado;
        cin >> radio;
        if((sqrt(2)/2)*lado > radio && lado/2 < radio)
        {
            double angulo = acos((lado/2)/radio);


            total[i] = (pi*pow(radio, 2))-8* ( ((angulo*pow(radio,2))/2) - (((lado*radio)*sin(angulo))/4));
        }
        else if((sqrt(2)/2)*lado > radio && lado/2 >= radio)
        {
            total[i] = pi*(pow(radio, 2));
        }
        else if((sqrt(2)/2)*lado < radio && lado/2 < radio)
        {
            total[i] = (pow(lado, 2));
        }
    }
    for (int i = 0; i < cantidades; ++i) printf("%.2f\n", total[i]);
}