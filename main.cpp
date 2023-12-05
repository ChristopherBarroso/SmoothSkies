#include <iostream>
using namespace std;
#include "QuickSort.h"
#include "MergeSort.h"

int main()
{

    // Start menu
    cout << "Hello and welcome to Smooth Skies, an interactive program that aims to inform "
            "users on the airports to avoid! This program will output the airports in order of least to greatest delays."
         << endl;

    // boolean for program exit
    bool exitProgram = false;

    while (!exitProgram)
    {

        // allows user to choose different sorting methods
        int sortOption = 0;
        bool quickSort = false;
        bool mergeSort = false;

        // menu
        cout << "Please Select an Option (Input Number):\n"
                "1. Quick Sort\n"
                "2. Merge Sort\n"
                "3. Exit"
             << endl;

        // Second Menu Depending on user's first choice
        cin >> sortOption;
        switch (sortOption)
        {
        case 1:
            quickSort = true;
            break;
        case 2:
            mergeSort = true;
            break;
        case 3:
            exitProgram = true;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }

        // reads in data for appropriate method
        QuickSort quick;
        MergeSort merge;
        if (quickSort)
        {
            quick.readInData();
        }
        else if (mergeSort)
        {
            merge.readInData();
        }
        else if (exitProgram)
        {
            cout << "Thank you for using Smooth Skies!" << endl;
            break;
        }

        int attributeOption = 0;
        bool numLateFlights = false;
        bool numSecDelays = false;
        bool numWeatherDelays = false;
        bool numFlightsCancelled = false;
        bool numDelayedFlights = false;
        bool numFlightsTotaled = false;
        bool numMinutesDelayed = false;
        // Allows user to sort airports depending on:
        cout << "Which attributes do you want to sort? (Input Number)\n"
                "1. Number of Late Flights\n"
                "2. Number of Security Delays\n"
                "3. Number of Weather Delays\n"
                "4. Number of Flights Cancelled\n"
                "5. Number of Delayed Flights\n"
                "6. Number of Flights Totaled\n"
                "7. Number of Minutes Delayed\n"
                "8. Exit"
             << endl;

        // Menu Depending on user's choice
        cin >> attributeOption;
        switch (attributeOption)
        {
        case 1:
            numLateFlights = true;
            break;
        case 2:
            numSecDelays = true;
            break;
        case 3:
            numWeatherDelays = true;
            break;
        case 4:
            numFlightsCancelled = true;
            break;
        case 5:
            numDelayedFlights = true;
            break;
        case 6:
            numFlightsTotaled = true;
            break;
        case 7:
            numMinutesDelayed = true;
            break;
        case 8:
            exitProgram = true;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }

        // calls quicksort method
        if (quickSort)
        {
            if (numLateFlights)
            {
                string late = "Late";
                quick.callQuickSort(late);
                quick.callPrint(late);
            }
            else if (numSecDelays)
            {
                string security = "Security";
                quick.callQuickSort(security);
                quick.callPrint(security);
            }
            else if (numWeatherDelays)
            {
                string weather = "Weather";
                quick.callQuickSort(weather);
                quick.callPrint(weather);
            }
            else if (numFlightsCancelled)
            {
                string cancelled = "Cancelled";
                quick.callQuickSort(cancelled);
                quick.callPrint(cancelled);
            }
            else if (numDelayedFlights)
            {
                string delayed = "Delayed";
                quick.callQuickSort(delayed);
                quick.callPrint(delayed);
            }
            else if (numFlightsTotaled)
            {
                string total = "Total";
                quick.callQuickSort(total);
                quick.callPrint(total);
            }
            else if (numMinutesDelayed)
            {
                string minutes = "Minutes";
                quick.callQuickSort(minutes);
                quick.callPrint(minutes);
            }
            else if (exitProgram)
            {
                cout << "Thank you for using Smooth Skies!" << endl;
                break;
            }
        }

        // calls mergesort method
        else if (mergeSort)
        {
            if (numLateFlights)
            {
                string late = "Late";
                merge.callMergeSort(late);
                merge.callPrint(late);
            }
            else if (numSecDelays)
            {
                string security = "Security";
                merge.callMergeSort(security);
                merge.callPrint(security);
            }
            else if (numWeatherDelays)
            {
                string weather = "Weather";
                merge.callMergeSort(weather);
                merge.callPrint(weather);
            }
            else if (numFlightsCancelled)
            {
                string cancelled = "Cancelled";
                merge.callMergeSort(cancelled);
                merge.callPrint(cancelled);
            }
            else if (numDelayedFlights)
            {
                string delayed = "Delayed";
                merge.callMergeSort(delayed);
                merge.callPrint(delayed);
            }
            else if (numFlightsTotaled)
            {
                string total = "Total";
                merge.callMergeSort(total);
                merge.callPrint(total);
            }
            else if (numMinutesDelayed)
            {
                string minutes = "Minutes";
                merge.callMergeSort(minutes);
                merge.callPrint(minutes);
            }
            else if (exitProgram)
            {
                cout << "Thank you for using Smooth Skies!" << endl;
                break;
            }
        }
    }
    return 0;
}
