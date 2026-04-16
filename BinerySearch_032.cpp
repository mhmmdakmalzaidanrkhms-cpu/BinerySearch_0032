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

void bubblesortArray()
{
    int pass = 1;
    do 
    {
        for (int j = 0; j < nPanjang - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    }while (pass < nPanjang - 1);
}

