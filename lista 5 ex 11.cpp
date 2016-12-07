#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    float resFlut = 3.5;
    int resInt = 3;
    clock_t inicio, fin;

    inicio = clock();
    for(int i =0; i<100000000; i++){
        if(i%2 == 0){
            resFlut*=3.5;
        }else{
            resFlut*=7.5;
        }
    }
    fin = clock()-inicio;
    cout<<"O tempo para efetuar mil calculos de ponto flutuante e: "<<(double(fin)/CLOCKS_PER_SEC)<<"\n";

    inicio = clock();
    for(int i =0; i<100000000; i++){
        if(i%2 == 0){
            resInt*=3;
        }else{
            resInt*=7;
        }
    }
    fin = clock()-inicio;
    cout<<"O tempo para efetuar mil calculos inteiros e: "<<(double(fin)/CLOCKS_PER_SEC)<<"\n";
    return 0;
}