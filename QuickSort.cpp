#include "QuickSort.h"

QuickSort::QuickSort() = default;

void QuickSort::readInData() {

    string token;
    ifstream AirportFile("Proj3_Airlines.csv");
    if (AirportFile.is_open()) {
        //clear data's headers
        string currentLine;
        getline(AirportFile, currentLine);

        int index = 0;

        while (getline(AirportFile, currentLine)){
            Airport newAp;
            istringstream stream(currentLine);
            for (int i = 0; i < 9; i++) {
                getline(stream, token, ',');
                if (i == 0) { newAp.setCode(token); }
                else if (i == 1) { newAp.setName(token); }
                else if (i == 2) { newAp.setNumLate(token); }
                else if (i == 3) { newAp.setSecurityDelays(token); }
                else if (i == 4) { newAp.setNumWeatherDelays(token); }
                else if (i == 5) { newAp.setNumFlightsCancelled(token); }
                else if (i == 6) { newAp.setNumDelayedFlights(token); }
                else if (i == 7) { newAp.setNumFlightsTotaled(token); }
                else { newAp.setNumMinutesDelayed(token); }
            }
            airports[index] = newAp;
            index++;
        }
    }
    else{
        cout << "still does not load file" << endl;
    }
}
