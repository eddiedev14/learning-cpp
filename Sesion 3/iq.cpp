#include <bits/stdc++.h>
using namespace std;

int main(){
    int length;
    cin >> length;

    vector<int> numbers(length);
    for(int i = 0; i < length; i++){
        cin >> numbers[i];
    }

    //Se deben verificar unicamente 3 numeros para saber si la mayoria de numeros es par o impar
    int contadorPares = 0;
    int contadorImpares = 0;

    for(int i = 0; i < 3; i++){
        if(numbers[i] % 2 == 0){
            contadorPares++;
        }else{
            contadorImpares++;
        }
    }

    //Comparación y búsqueda de index
    int indice;
    bool numerosPares = contadorPares > contadorImpares;

    for(int i = 0; i < length; i++){
        if((numerosPares && numbers[i] % 2 != 0) || (!numerosPares && numbers[i] % 2 == 0)){
            indice = i + 1;
            break;
        }
    }

    cout << indice;
    return 0;
}
