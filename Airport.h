#ifndef SMOOTHSKIES_AIRPORT_H
#define SMOOTHSKIES_AIRPORT_H
#include <iostream>
using namespace std;

class Airport {

    string _airportCode, _airportName, _numLateFlights, _numSecurityDelays, _numWeatherDelays, _numFlightsCancelled;
    string _numDelayedFlights, _numFlightsTotaled, _numMinutesDelayed;

public:
    Airport();
    Airport(string airportCode, string airportName, string numLateFlights, string numSecurityDelays,
            string numWeatherDelays, string numFlightsCancelled, string numDelayedFlights, string numFlightsTotaled,
            string numMinutesDelayed);
};


#endif //SMOOTHSKIES_AIRPORT_H
