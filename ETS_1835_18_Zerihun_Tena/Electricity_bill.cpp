#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Variable declaration
    int units;
    double energy_charge;
    const double service_charge = 10.0;
    double total_bill;

    // Input
    cout << "Enter electricity units: ";
    cin >> units;

    // Energy charge calculation using conditional operator
    energy_charge = (units <= 50)
        ? units * 1.50
        : (50 * 1.50) + ((units - 50) * 2.00);

    // Total bill calculation
    total_bill = energy_charge + service_charge;

    // Output
    cout << fixed << setprecision(2);

    cout << "Energy charge: " << energy_charge << " birr" << endl;
    cout << "Service charge: " << service_charge << " birr" << endl;
    cout << "Total bill: " << total_bill << " birr" << endl;

    return 0;
}
