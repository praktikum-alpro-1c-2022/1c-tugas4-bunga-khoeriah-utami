#include <iostream>
using namespace std;

int main () {
    string username, password;

    cout << "Masukan Username : ";
    cin >> username;

    cout << "Masukan Password : ";
    cin >> password;

if (username == "bungakhrh" && password == "flwrhere14") {
    cout << "Username dan Password sesuai, Login berhasil" << endl;

}else if (username == "bungakhrh" && password != "flwrhere14") {
    cout << "Username sesuai, password tidak sesuai" << endl;

}else if (username != "bungakhrh" && password == "flwrhere14") {
    cout << "Username tidak sesuai, password tidak sesuai" << endl;

}else if (username != "bungakhrh" && password != "flwrhere14") {
    cout << "Username dan password tidak sesuai";

}
    return 0;

}
