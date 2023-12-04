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
                if (i == 0) { newAp.setCode(stoi(token)); }
                else if (i == 1) { newAp.setName(token);}
                else if (i == 2) { newAp.setNumLate(stoi(token)); }
                else if (i == 3) { newAp.setSecurityDelays(stoi(token));}
                else if (i == 4) { newAp.setNumWeatherDelays(stoi(token));}
                else if (i == 5) { newAp.setNumFlightsCancelled(stoi(token));}
                else if (i == 6) { newAp.setNumDelayedFlights(stoi(token));}
                else if (i == 7) { newAp.setNumFlightsTotaled(stoi(token));}
                else { newAp.setNumMinutesDelayed(stoi(token));}
            }
            airports[index] = newAp;
            index++;
        }
    }
    else{
        cout << "still does not load file" << endl;
    }
}

//Should work regardless of what type of data we are using from airport object
//Citation:
void QuickSort::quickSort(int low, int high) {
    if (low < high){
        int pivot = partition(low, high);
        quickSort(low, pivot - 1);
        quickSort(pivot + 1, high);
    }
}

int QuickSort::partition(int low, int high) {
    int pivot = airports[low]; // change to access different variables
    int up = low, down = high;

    while (up < down){
        for(int j = up; j < high; j++){
            if(airports[up] > pivot) //change this too
                break;
            up++;
        }
        for(int j = high; j > low; j--){
            if(airports[down] < pivot)
                break;
            down--;
        }
        if(up < down){
            std::swap(airports[low], airports[down]);
        }
        std::swap(airports[low], airports[high]);
    }
}
