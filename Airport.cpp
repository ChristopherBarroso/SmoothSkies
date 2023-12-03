//
// Created by Christopher Barroso on 12/2/23.
//

#include "Airport.h"

Airport::Airport(){
    _airportCode = "default";
    _airportName = "default";
    _numLateFlights = "default";
    _numSecurityDelays = "default";
    _numWeatherDelays = "default";
    _numFlightsCancelled = "default";
    _numDelayedFlights = "default";
    _numFlightsTotaled = "default";
    _numMinutesDelayed = "default";
}
/*
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
 */

void Airport::setCode(string& code) {
    _airportCode = code;
}

void Airport::setName(string& name) {
    _airportName = name;
}

void Airport::setNumLate(string& num) {
    _numLateFlights = num;
}

void Airport::setSecurityDelays(string& num) {
    _numSecurityDelays = num;
}

void Airport::setNumWeatherDelays(string& num) {
    _numWeatherDelays = num;
}

void Airport::setNumFlightsCancelled(string& num) {
    _numFlightsCancelled = num;
}

void Airport::setNumDelayedFlights(string& num) {
    _numDelayedFlights = num;
}

void Airport::setNumFlightsTotaled(string& num) {
    _numFlightsTotaled = num;
}

void Airport::setNumMinutesDelayed(string& num) {
    _numMinutesDelayed = num;
}




