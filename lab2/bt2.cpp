#include <iostream>
#include <fstream>
#include <cstdlib> // for exit() function

using namespace std;

// Function prototypes
double calculateCh(int days, double dailyRate, double medCharges, double servCharges);
double calculateCh(double medCharges, double servCharges);
int main()
{
    char patientType; // To store patient type
    int days; // To store number of days
    double rate, meds, services, totalCharges;

    // Open file for writing
    ofstream outFile("hospital_report.txt");

    // Check if file is successfully opened
    if (!outFile)
    {
        cout << "Error opening file. Program terminated.\n";
        exit(1);
    }

    // Ask user for patient type
    cout << "Was the patient admitted as an in-patient (I) or an out-patient (O)? ";
    cin >> patientType;

    // Input validation for patient type
    while (toupper(patientType) != 'I' && toupper(patientType) != 'O')
    {
        cout << "Invalid input. Please enter I for in-patient or O for out-patient: ";
        cin >> patientType;
    }

    // If patient is an in-patient
    if (toupper(patientType) == 'I')
    {
        // Get number of days spent in hospital
        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;

        // Input validation for number of days
        while (days < 0)
        {
            cout << "Invalid input. Please enter a positive number of days: ";
            cin >> days;
        }

        // Get daily rate
        cout << "Enter the daily rate: ";
        cin >> rate;

        // Input validation for daily rate
        while (rate < 0)
        {
            cout << "Invalid input. Please enter a positive daily rate: ";
            cin >> rate;
        }

        // Get hospital medication charges
        cout << "Enter the hospital medication charges: ";
        cin >> meds;

        // Input validation for medication charges
        while (meds < 0)
        {
            cout << "Invalid input. Please enter a positive amount for hospital medication charges: ";
            cin >> meds;
        }

        // Get hospital services charges
        cout << "Enter the hospital services charges: ";
        cin >> services;

        // Input validation for hospital services charges
        while (services < 0)
        {
            cout << "Invalid input. Please enter a positive amount for hospital services charges: ";
            cin >> services;
        }

        // Calculate total charges for in-patient
        totalCharges = calculateCharges(days, rate, meds, services);
    }
    // If patient is an out-patient
    else
    {
        // Get hospital medication charges
        cout << "Enter the hospital medication charges: ";
        cin >> meds;

        // Input validation for medication charges
        while (meds < 0)
        {
            cout << "Invalid input. Please enter a positive amount for hospital medication charges: ";
            cin >> meds;
        }

        // Get hospital services charges
        cout << "Enter the hospital services charges: ";
        cin >> services;

        // Input validation for hospital services charges
        while (services < 0)
        {
            cout << "Invalid input. Please enter a positive amount for hospital services charges: ";
            cin >> services;
        }

        // Calculate total charges for out-patient
        totalCharges = calculateCh
    }}