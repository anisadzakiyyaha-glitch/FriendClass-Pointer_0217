#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang {
private:
    double d1, d2, sisi1, sisi2;

public:
    void inputData() {
        cout << "Diagonal 1 : "; cin >> d1;
        cout << "Diagonal 2 : "; cin >> d2;
        cout << "Sisi 1     : "; cin >> sisi1;
        cout << "Sisi 2     : "; cin >> sisi2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (sisi1 + sisi2);
    }

    void outputData() {
        cout << "Luas Layang-Layang     : " << hitungLuas() << endl;
        cout << "Keliling Layang-Layang : " << hitungKeliling() << endl;
    }

    friend double kelilingLayang(LayangLayang &l, BelahKetupat &b);
};

class BelahKetupat {
private:
    double sisi, d1, d2;

public:
    void inputData() {
        cout << "Sisi       : "; cin >> sisi;
        cout << "Diagonal 1 : "; cin >> d1;
        cout << "Diagonal 2 : "; cin >> d2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }

    void outputData() {
        cout << "Luas Belah Ketupat     : " << hitungLuas() << endl;
        cout << "Keliling Belah Ketupat : " << hitungKeliling() << endl;
    }

    friend double kelilingLayang(LayangLayang &l, BelahKetupat &b);
};

double kelilingLayang(LayangLayang &l, BelahKetupat &b) {
    return 2 * (l.sisi1 + l.sisi2);
}