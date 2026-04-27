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
};

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (sisi1 + sisi2);
    }