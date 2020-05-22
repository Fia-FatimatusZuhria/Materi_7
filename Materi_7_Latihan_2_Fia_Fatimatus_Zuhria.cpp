#include <iostream>
using namespace std;
struct menu {
    string nama;
    float harga;
    int banyak_level;
    string topping[3];
    };
int main()
{
    menu mn[2];

    mn[0].nama  ="Level Noodles";
    mn[0].harga = 10.000;
    mn[0].banyak_level = 8;
    mn[0].topping[0] = "Mini Hot Dog";
    mn[0].topping[1] = "Chicken Teriyaki";
    mn[0].topping[2] = "Chicken Katsu";

    mn[1].nama  ="Fried Chicken";
    mn[1].harga = 15.000;
    mn[1].banyak_level = 8;
    mn[1].topping[0] = "Sunny Side Up";
    mn[1].topping[1] = "Chicken Meat";
    mn[1].topping[2] = "Minced Beef";

    cout<<"Daftar Menu Makanan di Faza Restaurant"<<endl;
    cout<<"---------------------------------------------------------------------------------"<<endl;
    cout<<"Nama Menu :"<<mn[0].nama<<endl;
    cout<<"Harga :"<<mn[0].harga<<endl;
    cout<<"Banyak Level :"<<mn[0].banyak_level<<endl;
    cout<<"Varian Topping :"<<endl;
    cout<<"- "<<mn[0].topping[0]<<endl;
    cout<<"- "<<mn[0].topping[1]<<endl;
    cout<<"- "<<mn[0].topping[2]<<endl;

    cout<<"---------------------------------------------------------------------------------"<<endl;

    cout<<"Nama Menu :"<<mn[1].nama<<endl;
    cout<<"Harga :"<<mn[1].harga<<endl;
    cout<<"Banyak Level :"<<mn[1].banyak_level<<endl;
    cout<<"Varian Topping :"<<endl;
    cout<<"- "<<mn[1].topping[0]<<endl;
    cout<<"- "<<mn[1].topping[1]<<endl;
    cout<<"- "<<mn[1].topping[2]<<endl;

    return 0;
}
