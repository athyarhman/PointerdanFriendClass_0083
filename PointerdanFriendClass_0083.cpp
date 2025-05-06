#include <iostream>
using namespace std;

class PersegiPanjang
{
    public:
        int panjang, lebar;

    public:
        void input()
        {
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukan Lebar : ";
            cin >> lebar;
        }

        int luasPp(int a, int b)
        {
            return a * b;
        }
        
};

class Lingkaran
{
    public:
        int jarijari;

        void input()
        {
            cout<<"Masukan Jari-Jari : ";
            cin >> jarijari;
        }

        int luasLingkaran (int r)
        {
            return 3.14 * r * r;
        }
};


