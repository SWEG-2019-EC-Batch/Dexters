#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Variable declaration
    double distance, fuel_rate, price_per_liter;
    int hours, minutes;

    double total_time;
    double speed, fuel_used, fuel_cost;

    // Input
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time in hours: ";
    cin >> hours;

    cout << "Enter additional minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100 km): ";
    cin >> fuel_rate;

    cout << "Enter price per liter: ";
    cin >> price_per_liter;

    // Convert time and calculate total travel time
    total_time = hours + (static_cast<double>(minutes) / 60.0);

    // Calculate average speed
    speed = distance / total_time;

    // Calculate fuel used
    fuel_used = (distance * fuel_rate) / 100.0;

    // Calculate fuel cost
    fuel_cost = fuel_used * price_per_liter;

    // Output
    cout << fixed << setprecision(2);

    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuel_used << " liters" << endl;
    cout << "Fuel cost: " << fuel_cost << " birr" << endl;

    return 0;
}
