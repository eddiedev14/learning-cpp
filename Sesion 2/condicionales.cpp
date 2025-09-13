//Condicionales: 15/08/2025

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;

    //Get the user input
    cout << "¿Cual es el valor del numero 1? " << endl;
    cin >> a;

    cout << "¿Cual es el valor del numero 2? " << endl;
    cin >> b;

    if(a > b){
        cout << a << " es mayor que " << b;
    }else if(a < b){
        cout << a << " es menor que " << b;
    }else{
        cout << a << " es igual que " << b;
    }

    return 0;
}
