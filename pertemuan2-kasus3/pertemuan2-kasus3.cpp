#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0));

    bilangan = rand() % 10;
    cout << "Nilai awalnya : " << bilangan << endl;

    if (bilangan >= 5) {
        bilangan = 2 * bilangan;
    }
    else {
        bilangan = 4 * bilangan;
    }
    cout << "Nilai sekarang ; " << bilangan;
}// diberikan suatu bilangan random, jika bilangan lebih besar atau sama dengan 5 maka kali 2, jika tidak maka kali 4
