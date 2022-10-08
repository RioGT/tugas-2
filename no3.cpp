// program menghitung harga total

#include <iostream>

#include <conio.h>

#define harga 4500.02

int main(){

    float jumlah,total;
    std:: cout << "masukan jumlah barang =";
    std::cin >> jumlah; total=harga*jumlah;
    std::cout << "\nYang harus dibayar =" << total;
    getch();
}