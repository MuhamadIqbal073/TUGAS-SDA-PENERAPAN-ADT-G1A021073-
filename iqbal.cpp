#include <iostream>
using namespace std;

int main(){
    int p,l,t,volume;

    cout << "Masukam panjang balok : ";
    cin >>p;
    cout << "Masukan lebar balok : ";
    cin >>l;
    cout << "Masukan tinggi balok : ";
    cin >>t;
    volume=p*l*t;
    cout << "Volume balok adalah : "<<volume;
    return 0;
}
