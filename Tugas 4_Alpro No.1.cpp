#include <iostream>
using namespace std;

int main () {
    int bil;
    cout << "Masukan bilangan: ";
    cin >> bil;

    if (bil !=0) {
        if (bil > 0) {
            cout << "Bilangan positif";
        }else{
            cout << "Bilangan negatif";
        }
        }else{
            cout << "Bilangannya adalah 0 tidak positif atau tidak negatif";
        }
        return 0;
    }
