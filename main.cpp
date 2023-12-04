#include <iostream>
using namespace std;
#include "QuickSort.h"

int main() {

    //Start menu
    cout << "Hello and welcome to Smooth Skies, an interactive program that aims to inform "
            "users on the airports to avoid!" << endl;

    //boolean for program exit
    bool exitProgram = false;


    while(!exitProgram){

        //allows user to choose different sorting methods
        int sortOption = 0;
        bool quickSort = false;
        bool mergeSort = false;

        //menu
        cout << "Please Select an Option:\n"
                "1. Quick Sort\n"
                "2. Merge Sort\n"
                "3. Exit" << endl;

        //Second Menu Depending on user's first choice
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

        //reads in data for appropriate method
        if(quickSort){
            QuickSort quick;
            quick.readInData();
        }
        else if (mergeSort){

        }

        //Allows user to sort airports depending on:
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
