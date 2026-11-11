Task 3: Trip Speed and Fuel Cost

1. Understanding the Question

The program should read information about a car trip and calculate the average speed, fuel used, and fuel cost.

The required information includes:

- Distance traveled in kilometers.
- Travel time in hours and minutes.
- Fuel consumption in liters per 100 kilometers.
- Price per liter of fuel in birr.

The program must calculate the average speed of the car, the amount of fuel consumed, and the total cost of the fuel.

All outputs must be displayed using two decimal places.

2. Inputs

The program receives five inputs from the user:

1. Distance traveled in kilometers.
2. Travel time in hours.
3. Additional travel time in minutes.
4. Fuel consumption rate in liters per 100 km.
5. Price per liter of fuel in birr.

3. Outputs

The program displays:

1. Average speed in kilometers per hour (km/h).
2. Fuel used in liters.
3. Fuel cost in birr.

All outputs must have two decimal places.

4. Mathematical Formulas

Step 1: Convert minutes into hours.

Since one hour contains 60 minutes, we divide the minutes by 60.

Converted Minutes = Minutes / 60

Step 2: Calculate total travel time.

Total Time = Hours + Converted Minutes

Combining the formulas:

Total Time = Hours + (Minutes / 60)

Step 3: Calculate average speed.

Average Speed = Distance / Total Time

Step 4: Calculate the amount of fuel used.

Since the fuel consumption rate is given in liters per 100 kilometers, we multiply the distance by the fuel consumption rate and divide by 100.

Fuel Used = (Distance × Fuel Consumption Rate) / 100

Step 5: Calculate fuel cost.

Fuel Cost = Fuel Used × Price Per Liter

Where:

- Distance = Total distance traveled in kilometers.
- Hours = Travel time in hours.
- Minutes = Additional travel time in minutes.
- Total Time = Total travel time in hours.
- Average Speed = Distance traveled per hour.
- Fuel Consumption Rate = Liters consumed per 100 km.
- Fuel Used = Total fuel consumed in liters.
- Price Per Liter = Cost of one liter of fuel.
- Fuel Cost = Total cost of the fuel consumed.

5. Process (Numbered Steps)

1. Start the program.
2. Declare variables for distance, hours, minutes, fuel consumption rate, and price per liter.
3. Declare variables for total time, average speed, fuel used, and fuel cost.
4. Ask the user to enter the distance traveled in kilometers.
5. Read the distance.
6. Ask the user to enter the travel time in hours.
7. Read the hours.
8. Ask the user to enter the additional travel time in minutes.
9. Read the minutes.
10. Ask the user to enter the fuel consumption rate in liters per 100 km.
11. Read the fuel consumption rate.
12. Ask the user to enter the price per liter of fuel.
13. Read the price per liter.
14. Convert the minutes into hours by dividing the minutes by 60.0.
15. Calculate the total travel time by adding the hours and converted minutes.
16. Calculate the average speed by dividing the distance by the total travel time.
17. Calculate the fuel used by multiplying the distance by the fuel consumption rate and dividing by 100.0.
18. Calculate the fuel cost by multiplying the fuel used by the price per liter.
19. Display the average speed using two decimal places.
20. Display the fuel used using two decimal places.
21. Display the fuel cost using two decimal places.
22. End the program.

6. Example Execution

Example 1: Calculating trip speed and fuel cost.

Inputs:

- Distance = 150 km
- Hours = 2
- Minutes = 30
- Fuel consumption rate = 8 liters per 100 km
- Price per liter = 60 birr

Calculations:

Step 1: Convert minutes into hours.

Converted Minutes = 30 / 60

Converted Minutes = 0.5 hours

Step 2: Calculate total travel time.

Total Time = 2 + 0.5

Total Time = 2.5 hours

Step 3: Calculate average speed.

Average Speed = Distance / Total Time

Average Speed = 150 / 2.5

Average Speed = 60 km/h

Step 4: Calculate fuel used.

Fuel Used = (Distance × Fuel Consumption Rate) / 100

Fuel Used = (150 × 8) / 100

Fuel Used = 1200 / 100

Fuel Used = 12 liters

Step 5: Calculate fuel cost.

Fuel Cost = Fuel Used × Price Per Liter

Fuel Cost = 12 × 60

Fuel Cost = 720 birr


Expected output:

Enter distance in km: 150
Enter travel time in hours: 2
Enter additional minutes: 30
Enter fuel consumption (L/100 km): 8
Enter price per liter: 60

Average speed: 60.00 km/h
Fuel used: 12.00 liters
Fuel cost: 720.00 birr
