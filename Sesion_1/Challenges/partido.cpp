//Challenge: Partido
#include <bits/stdc++.h>
using namespace std;

int main(){
    int golesCali;
    int golesAmerica;

    cout << "Ingresa la cantidad de goles que ha hecho el Cali: " << endl;
    cin >> golesCali;

    golesAmerica = golesCali * 2;
    cout << "America " << golesAmerica << ":  " << golesCali << " Cali";

    return 0;
}
