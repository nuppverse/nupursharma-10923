# Electricity Bill Calculator (C)

This project is an Electricity Bill Calculator written in C.
It was created as part of my academic coursework to understand how basic C programming concepts can be used to solve real-life problems.
The program calculates the electricity bill based on unit consumption using slab-wise billing and displays the final bill in a proper format.

## Aim of the Project

The project aims to:

- Take electricity units as input from the user.
- Calculate the bill using slab-wise rates.
- Add fixed and additional charges.
- Display the final electricity bill clearly.

## Slab Rates Used
| Units Consumed | Rate |
|---------------|------|
| 0 – 100       | ₹1.50 |
| 101 – 200     | ₹2.50 |
| 201 – 300     | ₹4.00 |
| Above 300     | ₹6.00 |

## Additional Charges:
- Fixed charge: ₹75
- Peak hour charge: 5% (if units > 250)
- Eco discount: ₹30 (if units ≤ 100)

## Project Files
```
nupursharma-10923/
├── electricity_bill.c
├── README.md
└── .gitattributes
```

## How to Run the Program
- Open the project folder
- Compile the program using:
```
gcc electricity_bill.c -o electricity_bill
```
- Run the program using:
```
./electricity_bill
```
  

## Sample Output
This is a sample output generated when the program is run with example inputs.
Actual output may vary based on user input.

```
Consumer Name     : Nupur Sharma
Billing Month     : October
Units Consumed    : 280
Energy Charge     : Rs. 720.00
Fixed Charge      : Rs. 75.00
Peak Hour Charge  : Rs. 36.00
Eco Discount      : Rs. 0.00
---------------------------------------
TOTAL BILL AMOUNT : Rs. 831.00
```

  
