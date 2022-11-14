//Program Array input keyboard 1 Dimensi
//Mohd/ Rayhan Zhafran
//22343058
//Informatika (NK)
#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int nilai[10];
    cout << "Berapa jumlah elemen yang ingin diisi? ";
    cin >>j;

    for (i=0;i<j;i++){
        cout << "Masukkan nilai ke-"<<i+1<<" = ";
        cin >>nilai[i];
    }
    cout << "\nCetak Output" << endl;
    for (i=0;i<j;i++){
        cout << "Nilai ke-"<<i+1<<" = " <<nilai[i]<<endl;
    }
    return 0;
}
