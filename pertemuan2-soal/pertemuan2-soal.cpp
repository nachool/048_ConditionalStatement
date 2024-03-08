#include <iostream>
using namespace std;

int main()
{
    int nMatematika, nBahasa, nFisika;
    string status; 
    float rerata;

    cout << "Nilai Matematika : " << endl;
    cin >> nMatematika;
    cout << "Nilai Bahasa : " << endl;
    cin >> nBahasa;
    cout << "Nilai Fisika : " << endl;
    cin >> nFisika;

    rerata = (nMatematika + nBahasa + nFisika) / 3;
    if (rerata > 60 || nMatematika > 70){
        status = "Lulus";
        if (nFisika >= 90) {
            status = "Lulusan terbaik";
        }
    }
    else {
        status = "Tidak lulus";
    }
    cout << "Nilai matematika: " << nMatematika;
    cout << " Nilai bahasa: " << nBahasa; 
    cout << " Nilai Fisika: " << nFisika;
    cout << " Status kelulusan" << status; 
}

