//
// Created by Christopher Barroso on 12/2/23.
//

#include "Airport.h"

Airport::Airport() {
    _airportName = "default";
    _airportCode = "default";
    _totalMinDelayed = "default";
    _totalNumFlights = "default";
}

Airport::Airport(string airportName, string airportCode, string tototalMinDelayed, string totalNumFlights) {
    _airportName = airportName;
    _airportCode = airportCode;
    _totalMinDelayed = tototalMinDelayed;
    _totalNumFlights = totalNumFlights;
}

string Airport::printAirportInfo() {
    cout << "Airport Code: " << _airportCode << endl
         << "Airport Name: " << _airportName << endl
         << "Total Minutes Delayed: " << _totalMinDelayed << endl
         << "Total Number of Flights: " << _totalNumFlights << endl;
}



