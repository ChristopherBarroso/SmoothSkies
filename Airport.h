#ifndef SMOOTHSKIES_AIRPORT_H
#define SMOOTHSKIES_AIRPORT_H




//fix later
#include <iostream>
using namespace std;

class Airport {

    string _airportName, _airportCode, _totalMinDelayed, _totalNumFlights;

public:
    Airport();
    Airport(string airportName, string airportCode, string tototalMinDelayed, string totalNumFlights);
    string printAirportInfo();
};


#endif //SMOOTHSKIES_AIRPORT_H
