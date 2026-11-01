I.
include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    double r = 2.0; 
    double val = x * x + y * y;
    double r2 = r * r;

    const double eps = 1e-9;

    if (abs(val - r2) < eps) {
        cout << "На границе" << endl;
    } else if (val < r2) {
        cout << "Да" << endl; 
    } else {
        cout << "Нет" << endl;
    }

    return 0;
}

II.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    double r = 2.0; 
    double val = x * x + y * y;
    double r2 = r * r;

    const double eps = 1e-9;

    if (abs(val - r2) < eps) {
        cout << "На границе" << endl;
    } else if (val < r2) {
        cout << "Да" << endl; 
    } else {
        cout << "Нет" << endl; 
    }

    return 0;
}

III.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    double r = 2.0; 
    double val = x * x + y * y;
    double r2 = r * r;

    const double eps = 1e-9;

    if (abs(val - r2) < eps) {
        cout << "На границе" << endl;
    } else if (val < r2) {
        cout << "Да" << endl; 
    } else {
        cout << "Нет" << endl; 
    }

    return 0;
}
