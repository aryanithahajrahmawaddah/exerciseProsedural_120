#include <iostream>
using namespace  std;

int arr[20]
int main();

double rerata(double a, double b) {
    return (a + b) / 2;

}

double nama;

string status(double c) {
    if (c >= 80)
        return "Diterima";
    else
        return "Tolak";
}

int main()
{
    double nilM, nilB;
    cout << "Masukan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukan nilai Bahasa Inggris = ";
    cin >> nilB;
    cout << "Status Kelulusan = " << status(rerata(nilM, nilB));

    cout << "Nama Pendaftar = ";
    cin >> nama;
    cout << "Status = ";
    cin >> status;

}