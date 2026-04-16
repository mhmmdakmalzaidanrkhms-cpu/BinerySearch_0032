#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya element pada array (maksimal): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah element tidak boleh lebih dari 10, silahkan coba lagi.\n";
        }
    }
    
    cout << "\n================================\n";
    cout << "    Masukan Element Array        \n";
    cout << "=================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> element[i];
    }
}

