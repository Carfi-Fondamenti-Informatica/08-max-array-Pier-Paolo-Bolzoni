#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int dim;
    cin >> dim ;
    double lista[dim];

    for(int i=0;i<dim;i++){
        cin >> lista[i];
    }
    cout << valoremax(lista, dim) << endl;
    return 0;
}
