//Challenge: Esclavo
#include <bits/stdc++.h>
using namespace std;

int main(){
    int mangos;
    int monedas;

    cout << "Ingresa la cantidad de mangos que ha recogido el esclavo: " << endl;
    cin >> mangos;

    monedas = (mangos / 3) * 5;
    cout << monedas << " monedas";

    return 0;
}
