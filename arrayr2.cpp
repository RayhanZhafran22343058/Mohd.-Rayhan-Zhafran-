//Program  Array Matrisk 2 Dimensi
//Mohd/ Rayhan Zhafran
//22343058
//Informatika (NK)
#include <iostream>
using namespace std;
int main()
{
    int bil[2][3];

    for (int a=0;a<2;a++){
        for (int b=0;b<3;b++){
            cout << "Matriks " <<a<<","<<b<< " = ";
            cin >> bil[a][b];
        }
    }
    cout << "Hasil yang anda masukan, Tampilannya Adalah " << endl;
    for (int a=0;a<2;a++){
        for(int b=0;b<3;b++){
            cout << bil[a][b]<< " ";
        }cout << endl;
    }
}
