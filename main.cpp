#include <iostream>
using namespace std;
#include "QuickSort.h"

int main() {

    //Start menu
    cout << "Hello and welcome to Smooth Skies, an interactive program that aims to inform "
            "users on the airports to avoid!" << endl;

    bool exitProgram = false;

    while(!exitProgram){
        int sortOption = 0;
        bool quickSort = false;
        bool mergeSort = false;
        cout << "Please Select an Option:\n"
                "1. Quick Sort\n"
                "2. Merge Sort\n"
                "3. Reverse Order\n" //probably remove reverse order
                "4. Exit" << endl;

        cin >> sortOption;
        switch (sortOption){
            case 1:
                quickSort = true;
                break;
            case 2:
                mergeSort = true;
                break;
            case 3:
                // Reverse order logic
                break;
            case 4:
                exitProgram = true;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

        if(quickSort){
            QuickSort quick;
            quick.readInData();
        }
        else if (mergeSort){

        }

        cout << "Which attributes do you want to sort?\n"
                "1. Number of Late Flights\n"
                "2. Number of Security Delays\n"
                "3. Number of Weather Delays\n"
                "4. Number of Flights Cancelled\n"
                "5. Number of Delayed Flights\n"
                "6. Number of Flights Totaled\n"
                "7. Number of Minutes Delayed\n";

    }
    return 0;
}
