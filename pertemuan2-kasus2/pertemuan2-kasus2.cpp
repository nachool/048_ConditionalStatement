#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0));

    bilangan = rand() % 10;
    cout << "nilai awalnya: " << bilangan << endl;

    if (bilangan < 5) 
    {
        cout << "bilangan kurang dari 5";
        return 0;
    }
    bilangan = 2 * bilangan;

    cout << "nilai sekarang: " << bilangan;
} //diberikan bilangan random, jika bilangan lebih kecil daripada 5 maka muncul "bi. kurang dari lima, jika tidak maka bilangan dikali 2" 

