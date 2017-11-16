#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <numeric>

#define ALL(x) x.begin(), x.end()

using namespace std;

vector<long> numbers;
deque<long> polygon;
long N;

//El mod 1000000 me imagino que se uso para conservar los 5 digitos que importan
long myop (long a, long b){
    return (a+b)%100000;
}

int main(){
    /*Estas 2 lineas son para desactivar la lectura lenta por default de cin, ademas de poder imprimir 
    mas rapido*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*A partir del numero N, se leeran los datos en el vector numbers (debido a que no tiene datos aun,
    se debe usar una variable, en este caso a; para agregarlos al vector mediante el metodo push back*/
    cin >> N;
    for(long i = 0; i < N; ++i){
        long a; cin >> a; numbers.push_back(a);
    }
    //El arreglo numbers si usamos los datos de ejemplo quedara como 2-10-10-11-12-12-15
    sort(ALL(numbers));
    /*A partir de aqui la cosa se pone sabrosona, debido a que se busca la suma maxima, lo que se hace es
    un ordenar los numero de manera que puedan multiplicarse los mas altos entre ellos mismos, y los mas 
    bajos con ellos mismos. Al final de este while, el deque polygon quedara con los datos:
    11-10-12-2-15-10-12*/
    long i=0,j=N-1;
    while(polygon.size() < N){
        if(polygon.size() < N)
            polygon.push_front(numbers[i]);
        if(polygon.size() < N)
            polygon.push_back(numbers[j]);
        if(i > j){
            --i; ++j;
        }
        else{
            ++i;--j;
        }
        swap(i,j);
    }
    /*El metodo partial_sum, sirve para sumar o realizar otras operaciones que designe el programador de
    forma binaria entre los datos de un arreglo y designarle los resultados al otro arreglo. De manera que 
    usando los datos de polygon, el arreglo accumulate termina como 11-21-33-35-50-60-72*/
    long acumulate[N];
    partial_sum(ALL(polygon), acumulate, myop);
    /*Se suman las multiplicaciones*/
    long sum = polygon[0]*((acumulate[N-2]-acumulate[1])%100000);
    for(long i = 1; i < N-2; ++i){
        sum += polygon[i]*((acumulate[N-1]-acumulate[i+1])%100000);
        sum %= 100000;
    }
    /*Se imprime*/
    if (sum<10000){
        cout << "0";
        if (sum<1000){
            cout << "0";
            if (sum<100){
                cout << "0";
                if (sum<10){
                    cout << "0";
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}