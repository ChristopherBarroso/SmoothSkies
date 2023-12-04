#include <iostream>
using namespace std;
#include "QuickSort.h"

int main()
{

    // Start menu
    cout << "Hello and welcome to Smooth Skies, an interactive program that aims to inform "
            "users on the airports to avoid!"
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
        if (quickSort)
        {
            QuickSort quick;
            quick.readInData();
        }
        else if (mergeSort)
        {
            // MergeSort merge;
            // merge.readInData();
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
        //add output/cout
        if (quickSort)
        {
            if (numLateFlights)
            {
                QuickSort quick;
                string late = "Late";
                quick.callQuickSort(late);
                // cout << quick.callPrint(late) << endl;
            }
            else if (numSecDelays)
            {
                QuickSort quick;
                string security = "Security";
                quick.callQuickSort(security);
                // cout << list of airports sorted by security delays
            }
            else if (numWeatherDelays)
            {
                QuickSort quick;
                string weather = "Weather";
                quick.callQuickSort(weather);
                // cout << list of airports sorted by weather delays
            }
            else if (numFlightsCancelled)
            {
                QuickSort quick;
                string cancelled = "Cancelled";
                quick.callQuickSort(cancelled);
                // cout << list of airports sorted by cancelled flights
            }
            else if (numDelayedFlights)
            {
                QuickSort quick;
                string delayed = "Delayed";
                quick.callQuickSort(delayed);
                // cout << list of airports sorted by delayed flights
            }
            else if (numFlightsTotaled)
            {
                QuickSort quick;
                string total = "Total";
                quick.callQuickSort(total);
                // cout << list of airports sorted by total flights
            }
            else if (numMinutesDelayed)
            {
                QuickSort quick;
                string minutes = "Minutes";
                quick.callQuickSort(minutes);
                // cout << list of airports sorted by minutes delayed
            }
            else if (exitProgram)
            {
                cout << "Thank you for using Smooth Skies!" << endl;
                break;
            }
        }

        // calls mergesort method
        //add output/cout
        else if (mergeSort)
        {
            // if (numLateFlights)
            // {
            //     MergeSort merge;
            //     string late = "Late";
            //     merge.callMergeSort(late);
            // }
            // else if (numSecDelays)
            // {
            //     MergeSort merge;
            //     string security = "Security";
            //     merge.callMergeSort(security);
            // }
            // else if (numWeatherDelays)
            // {
            //     MergeSort merge;
            //     string weather = "Weather";
            //     merge.callMergeSort(weather);
            // }
            // else if (numFlightsCancelled)
            // {
            //     MergeSort merge;
            //     string cancelled = "Cancelled";
            //     merge.callMergeSort(cancelled);
            // }
            // else if (numDelayedFlights)
            // {
            //     MergeSort merge;
            //     string delayed = "Delayed";
            //     merge.callMergeSort(delayed);
            // }
            // else if (numFlightsTotaled)
            // {
            //     MergeSort merge;
            //     string total = "Total";
            //     merge.callMergeSort(total);
            // }
            // else if (numMinutesDelayed)
            // {
            //     MergeSort merge;
            //     string minutes = "Minutes";
            //     merge.callMergeSort(minutes);
            // }
            // else if (exitProgram)
            // {
            //     cout << "Thank you for using Smooth Skies!" << endl;
            //     break;
            // }
        }
    }
    return 0;
}
