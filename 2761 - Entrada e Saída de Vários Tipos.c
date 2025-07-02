#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int N;
    float M;
    char T;
    string F;

    cin >> N >> M >> T;
    cin.ignore(); 
    getline(cin, F); 


    cout << N << fixed << setprecision(6) << M << T << F << endl;


    cout << N << "\t" << fixed << setprecision(6) << M << "\t" << T << "\t" << F << endl;


    cout << right << setw(10) << N
         << setw(10) << fixed << setprecision(6) << M
         << setw(10) << T
         << setw(10) << F << endl;

    return 0;
}