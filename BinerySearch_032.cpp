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

void display()
{
    cout << "\n=====================================\n";
    cout << "  Element Array Setelah Diurutkan(Asc)\n";
    cout << "=====================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << element[i];
        if (i < nPanjang - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}


void BinarySeach()
{
    char ulang;
    do 
     {
        cout << "\n===============================\n";
        cout << "     Pencarian Binary Search    \n";
        cout << "===============================\n";
     
        cout << "Masukkan Element yang Ingin Dicari: ";
        cin >> x; 

        int low = 0;
        int high = nPanjang - 1;

        do 
        { 
            int mid = (low + high) / 2;   

            if (element[mid] == x)
            {
                cout << "\n[P] Element " << x << " ditemukan pada index ke-" << mid << ".\n";
                return;
            }

            if (element[mid] < x)
            {
                high = mid - 1;

            }

            if (x < element[mid])
            {
                low = mid + 1;
            }
        
        } while (low <= high);

        if (low > high)
        {
            cout << "\n[x] Elemen " << x << " tidak ditemukan dalam array.\n";
        }

        cout << "\nIngin mencari elemen lain? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');       
}

int main()
{
    input();
    bubblesortArray();
    display();
    BinarySeach();


