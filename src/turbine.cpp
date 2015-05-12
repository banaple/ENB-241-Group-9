/* turbine.cpp
 *
 * ENB241 Group 9 Project
 *
 */
 
#include "turbine.h"
#include <cmath>
#include <iostream>

using namespace std;



turbine::turbine(const double Area, const double Power, const double Price, const double Wind)
{
    _area = Area;
    _power = Power;
    _price = Price;
    _wind = Wind;
    // efficiency isn't an input variable it is local.  
    //_efficiency = Efficiency;
}



double turbine::getTurbineOutput() const
{
    // Windout = output at that wind speed
	double windout = allturbine[0][(round(_wind)+3)];
	
	// with inverter efficiency (19th element of array)
	double effpower = windout*allturbine[0][19]*365*24;
	
	
//	if(effpower >= Power)
//	{
              return effpower;
//    }
}

double turbine::getCost() const
{
// Have the cost of the turbines in one vector
	double Cost = _price;
	return Cost;
}

double turbine::getDimensions() const
{
	// will need to change equation. just setting up
	double Dimensions = _area;
	return Dimensions;
}


