//Primera sesión: 08/08/2025

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> s(4);
    cin >> s[0] >> s[1] >> s[2] >> s[3]; //Pedir variables en una sola linea

    int herradurasPorComprar = 0;

    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(s[i] == s[j]){ //Si son iguales aumenta el contador y corta el ciclo
                herradurasPorComprar++;
                break;
            }
        }
    }

    cout << herradurasPorComprar;

    return 0;
}
