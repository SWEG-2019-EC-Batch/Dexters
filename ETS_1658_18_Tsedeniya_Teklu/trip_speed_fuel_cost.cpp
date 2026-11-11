
#include <iostream>
#include <iomanip>
using namespace std;

/*
================================================
TASK 3: TRIP SPEED AND FUEL COST
================================================

INPUT:
- Trip distance in kilometers.
- Travel time in hours.
- Travel time in minutes.
- Fuel consumption in liters per 100 km.
- Fuel price per liter.

PROCESS:
1. Read all input values.
2. Convert minutes into hours.
3. Calculate total travel time.
4. Calculate average speed:
   Average speed = Distance / Total time.
5. Calculate fuel used:
   Fuel used = Distance * Fuel consumption / 100.
6. Calculate fuel cost:
   Fuel cost = Fuel used * Fuel price.

OUTPUT:
- Average speed in km/h.
- Fuel used in liters.
- Total fuel cost in birr.

FLOWCHART:

       +-----------+
       |   START   |
       +-----------+
             |
             v
   +---------------------+
   | Enter trip details  |
   +---------------------+
             |
             v
   +---------------------+
   | Convert minutes     |
   | into hours          |
   +---------------------+
             |
             v
   +---------------------+
   | Calculate total     |
   | travel time         |
   +---------------------+
             |
             v
   +---------------------+
   | Calculate average   |
   | speed               |
   +---------------------+
             |
             v
   +---------------------+
   | Calculate fuel used |
   +---------------------+
             |
             v
   +---------------------+
   | Calculate fuel cost |
   +---------------------+
             |
             v
   +---------------------+
   | Display results     |
   +---------------------+
             |
             v
       +-----------+
       |    END    |
       +-----------+
================================================
*/

int main() {
    double distance, hours, minutes;
    double fuelConsumption, fuelPrice;
    double totalTime, averageSpeed;
    double fuelUsed, fuelCost;

    // INPUT
    cout << "Enter trip distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (birr): ";
    cin >> fuelPrice;

    // PROCESS
    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * fuelPrice;

    // OUTPUT
    cout << fixed << setprecision(2);

    cout << "\nAverage Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Total Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}

