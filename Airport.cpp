//
// Created by Christopher Barroso on 12/2/23.
//

#include "Airport.h"

Airport::Airport() = default;

Airport::Airport(string airportCode, string airportName, string numLateFlights, string numSecurityDelays,
                 string numWeatherDelays, string numFlightsCancelled, string numDelayedFlights, string numFlightsTotaled,
                 string numMinutesDelayed){
    _airportCode = airportCode;
    _airportName = airportName;
    _numLateFlights = numLateFlights;
    _numSecurityDelays = numSecurityDelays;
    _numWeatherDelays = numWeatherDelays;
    _numFlightsCancelled = numFlightsCancelled;
    _numDelayedFlights = numDelayedFlights;
    _numFlightsTotaled = numFlightsTotaled;
    _numMinutesDelayed = numMinutesDelayed;
}




