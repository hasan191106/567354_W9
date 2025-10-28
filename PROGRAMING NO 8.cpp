#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1416;

// Menghitung jarak antara dua titik (x1,y1) dan (x2,y2)
double distance(double x1, double y1, double x2, double y2);
// Mengambil radius lingkaran = jarak antara pusat dan titik pada lingkaran
double radius(double x1, double y1, double x2, double y2);
// Menghitung keliling lingkaran: 2πr
double circumference(double r);
// Menghitung luas lingkaran: πr^2
double area(double r);

int main() {
    double x1, y1, x2, y2; // Variabel untuk koordinat pusat dan titik pada lingkaran

    cout << "Enter the coordinates of the center: ";
    cin >> x1 >> y1; // Input pusat (x1, y1)

    cout << "Enter the coordinates of a point on the circle: ";
    cin >> x2 >> y2; // Input titik pada keliling (x2, y2)

    // Radius dihitung dari jarak pusat ke titik pada lingkaran
    double r = radius(x1, y1, x2, y2);

    // Tampilkan hasil perhitungan
    cout << "\n=== Circle Properties ===\n";
    cout << "distance       : " << r << endl;           // Jarak = radius
    cout << "Radius         : " << r << endl;           // Radius
    cout << "Circumference  : " << circumference(r) << endl; // Keliling
    cout << "Area           : " << area(r) << endl;     // Luas

    return 0;
}

// Implementasi fungsi-fungsi

double distance(double x1, double y1, double x2, double y2) {
    // Rumus jarak Euclidean: √((x2-x1)^2 + (y2-y1)^2)
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double radius(double x1, double y1, double x2, double y2) {
    // Radius sama dengan distance dari pusat ke titik pada lingkaran
    return distance(x1, y1, x2, y2);
}

double circumference(double r) {
    // Keliling: 2 * π * r
    return 2 * PI * r;
}

double area(double r) {
    // Luas: π * r^2
    return PI * pow(r, 2);
}
