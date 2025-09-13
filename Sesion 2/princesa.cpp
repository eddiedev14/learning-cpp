//Ejercicio princesa: 15/08/2025

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    int l;
    int m;
    int n;
    int d; // Datos

    //Get the user input
    cout << "Ejercicio: Princesa " << endl;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cout << "Ingresa el numero de dragones: ";
    cin >> d;

    int dragonesGolpeados = 0;

    for(int i = 1; i <= d; i++){
        //Si i es divisible por k, l, m y n al mismo tiempo, es un dragón golpeado
        if((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0)) {
            dragonesGolpeados++;
        }
    }

    cout << dragonesGolpeados;

    return 0;
}
