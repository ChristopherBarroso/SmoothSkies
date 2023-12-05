#include "QuickSort.h"

//Citation: Modified version of quickSort algorithm written by: Amanpreet Kapoor

QuickSort::QuickSort() = default;

//Read in Data from csv
void QuickSort::readInData() {

    string token;
    ifstream AirportFile("Proj3_Airlines.csv");
    if (AirportFile.is_open()) {
        //clear data's headers
        string currentLine;
        getline(AirportFile, currentLine);

        int index = 0;

        //store necessary data only while reading over other values
        while (getline(AirportFile, currentLine)){
            Airport newAp;
            istringstream stream(currentLine);
            for (int i = 0; i < 9; i++) {
                getline(stream, token, ',');
                if (i == 0) { newAp.setCode(token); }
                else if (i == 1) {newAp.setName(token);}
                else if (i == 2) {newAp.setNumLate(stoi(token)); }
                else if (i == 3) {newAp.setSecurityDelays(stoi(token));}
                else if (i == 4) {newAp.setNumWeatherDelays(stoi(token));}
                else if (i == 5) {newAp.setNumFlightsCancelled(stoi(token));}
                else if (i == 6) {newAp.setNumDelayedFlights(stoi(token));}
                else if (i == 7) {newAp.setNumFlightsTotaled(stoi(token));}
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

//quick sort values depending on subject
void QuickSort::quickSort(int low, int high, string& dataType) {
    int pivot;
    if (low < high){

        //checks for subject and calls appropriate partition call
        if(dataType == "Late"){pivot = partitionLateFlights(low, high);}
        else if(dataType == "Security"){pivot = partitionSecurityDelays(low, high);}
        else if(dataType == "Weather"){pivot = partitionWeatherDelays(low,high);}
        else if(dataType == "Cancelled"){pivot = partitionFlightsCancelled(low,high);}
        else if(dataType == "Delayed"){pivot = partitionDelayedFlights(low,high);}
        else if(dataType == "Total"){pivot = partitionFlightsTotal(low,high);}
        else{pivot = partitionMinutesDelayed(low,high);}

        quickSort(low, pivot - 1, dataType);
        quickSort(pivot + 1, high, dataType);
    }
}

//partitions based on # of late flights in each airport object
int QuickSort::partitionLateFlights(int low, int high) {
    int pivot = airports[low].getNumLate();
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumLate() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumLate() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);

    }
    std::swap(airports[low], airports[high]);
    return down;
}

//partitions based on # of security delays in airport object
int QuickSort::partitionSecurityDelays(int low, int high) {
    int pivot = airports[low].getSecurityDelays();
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getSecurityDelays() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getSecurityDelays() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

//partitions based on # of weather delays in each airport object
int QuickSort::partitionWeatherDelays(int low, int high) {
    int pivot = airports[low].getNumWeatherDelays();
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumWeatherDelays() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumWeatherDelays() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

//partition based on number of flights cancelled in each airport object
int QuickSort::partitionFlightsCancelled(int low, int high) {
    int pivot = airports[low].getNumFlightsCancelled();
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumFlightsCancelled() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumFlightsCancelled() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

//partitions based on number of delayed flights in each airport object
int QuickSort::partitionDelayedFlights(int low, int high) {
    int pivot = airports[low].getNumDelayedFlights();
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumDelayedFlights() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumDelayedFlights() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

//partitions based on number of flights total in each airport object
int QuickSort::partitionFlightsTotal(int low, int high) {
    int pivot = airports[low].getNumFlightsTotaled();
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumFlightsTotaled() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumFlightsTotaled() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

//partitions based on number of total minutes delayed for each airport object
int QuickSort::partitionMinutesDelayed(int low, int high) {
    int pivot = airports[low].getNumMinutesDelayed();
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumMinutesDelayed() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumMinutesDelayed() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

//helper function for calling quicksort
void QuickSort::callQuickSort(string& desiredValue) {
    int n = sizeof(airports) / sizeof(airports[0]);
    quickSort(0, n-1, desiredValue);
}

//classifies desired value and prints appropriately
void QuickSort::callPrint(string &dataType) {
    if(dataType == "Late"){
        printLate();
    }
    else if(dataType == "Security"){
        printSecurity();
    }
    else if(dataType == "Weather"){
        printWeatherDelay();
    }
    else if(dataType == "Cancelled"){
        printFlightsCancelled();
    }
    else if(dataType == "Delayed"){
        printDelayedFlights();
    }
    else if(dataType == "Total"){
        printFlightsTotal();
    }
    else{
        printMinutesDelayed();
    }
}

void QuickSort::printLate() {
    for(int i = 0; i < (sizeof(airports) / sizeof(airports[0])); i++){
        cout << (i+1) << " Airport Code and Name: " << airports[i].getAirportCode() + " " << airports[i].getAirportName() <<endl;
        cout << "Number of Late Flights: " << airports[i].getNumLate() << endl;
    }
}

void QuickSort::printSecurity() {
    for(int i = 0; i < (sizeof(airports) / sizeof(airports[0])); i++){
        cout << (i+1) << " Airport Code and Name: " << airports[i].getAirportCode() + " " << airports[i].getAirportName() <<endl;
        cout << "Number of Security Delays: " << airports[i].getSecurityDelays() << endl;
    }
}

void QuickSort::printWeatherDelay() {
    for(int i = 0; i < (sizeof(airports) / sizeof(airports[0])); i++){
        cout << (i+1) << " Airport Code and Name: " << airports[i].getAirportCode() + " " << airports[i].getAirportName() <<endl;
        cout << "Number of Weather Delays: " << airports[i].getNumWeatherDelays() << endl;
    }
}

void QuickSort::printFlightsCancelled() {
    for(int i = 0; i < (sizeof(airports) / sizeof(airports[0])); i++){
        cout << (i+1) << " Airport Code and Name: " << airports[i].getAirportCode() + " " << airports[i].getAirportName() <<endl;
        cout << "Number of Flights Cancelled: " << airports[i].getNumFlightsCancelled() << endl;
    }
}

void QuickSort::printDelayedFlights() {
    for(int i = 0; i < (sizeof(airports) / sizeof(airports[0])); i++){
        cout << (i+1) << " Airport Code and Name: " << airports[i].getAirportCode() + " " << airports[i].getAirportName() <<endl;
        cout << "Number of Flights Delayed: " << airports[i].getNumDelayedFlights() << endl;
    }
}

void QuickSort::printFlightsTotal() {
    for(int i = 0; i < (sizeof(airports) / sizeof(airports[0])); i++){
        cout << (i+1) << " Airport Code and Name: " << airports[i].getAirportCode() + " " << airports[i].getAirportName() <<endl;
        cout << "Number of Flights Total: " << airports[i].getNumFlightsTotaled() << endl;
    }
}

void QuickSort::printMinutesDelayed() {
    for(int i = 0; i < (sizeof(airports) / sizeof(airports[0])); i++){
        cout << (i+1) << " Airport Code and Name: " << airports[i].getAirportCode() + " " << airports[i].getAirportName() <<endl;
        cout << "The Total Minutes Delayed: : " << airports[i].getNumMinutesDelayed()<< endl;
    }
}



