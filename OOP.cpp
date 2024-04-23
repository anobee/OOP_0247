#include <iostream>
using namespace std;

class BangunDatar{
    private :
     float panjang, lebar;
     public :
     float luas;

     void input () {//metode input persegi panjang

     cout << "masukan panjang = ";
     cin >> panjang;
     cout << "masukan lebar = ";
     cin >> lebar;
     }

     float hitungLuas ()
     {
        return panjang * lebar;
     }

     void display() {
        cout << "panjangannya =" << panjang << endl;
        cout << "lebarnya = " << lebar << endl;
        cout << "luasnya = " << hitungLuas();
     }


};

int main () {
    BangunDatar pp; 
    pp.input();
    pp.display (); 

    return 0;
}