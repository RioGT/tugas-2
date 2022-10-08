#include <iostream>
using namespace std;

int main(){
    

    int a,b,c = 0, d = 0;

    cout << "Masukan nilai A:";
    cin>>a;
    cout << "Masukan nilai B :";
    cin >> b;

    c = a / b;
    d = a * b;

    cout << "Hasil dari C = a/b =" << c << endl;
    cout << "Hasil dari B = a*b =" << d << endl;
    getchar();
}