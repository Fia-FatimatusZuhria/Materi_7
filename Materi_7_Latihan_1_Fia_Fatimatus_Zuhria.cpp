#include <iostream>
using namespace std;
struct mahasiswa{
    string nama;
    int usia;
    float ipk;
    string hobi[2];
    };
int main()
{
    mahasiswa mhs[2];

    mhs[0].nama ="Andi";
    mhs[0].usia = 21;
    mhs[0].ipk  = 3.5;
    mhs[0].hobi[0]= "Renang";
    mhs[0].hobi[1]= "Futsal";

    mhs[1].nama ="Ericko";
    mhs[1].usia = 22;
    mhs[1].ipk  = 4.0;
    mhs[1].hobi[0]= "Gaming";
    mhs[1].hobi[1]= "Basket";

    cout<<mhs[0].nama<<endl;
    cout<<mhs[0].usia<<endl;
    cout<<mhs[0].ipk<<endl;
    cout<<mhs[0].hobi[0]<<endl;
    cout<<mhs[0].hobi[1]<<endl;

    cout<<endl;

    cout<<mhs[1].nama<<endl;
    cout<<mhs[1].usia<<endl;
    cout<<mhs[1].ipk<<endl;
    cout<<mhs[1].hobi[0]<<endl;
    cout<<mhs[1].hobi[1]<<endl;

    return 0;
}
