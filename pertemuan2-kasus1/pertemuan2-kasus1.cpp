#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0)); //untuk set nomer random

    bilangan = rand() % 10;
    cout << "Nilai awalnya: " << bilangan << endl;

    if (bilangan >= 5)
    {
        bilangan = 2 * bilangan;
    }
    cout << "Nilai sekarang: " << bilangan; 
} 
//diberikan satu bilangan bulat positif sembarang, jika bilangan lebih besar daripada atau sama dengan 5, kali dua bilangan tersebut.

