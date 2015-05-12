/* turbine.h
 *
 * ENB241 Group 9 Project
 *
 */

 
#ifndef _TURBINE_H_
#define _TURBINE_H_
#include "inputs.h"
 
class turbine : public inputs
{
protected:
	double _area;
	double _power;
	double _price;
	double _wind;
	double _efficiency;
	
	//turbineX[] = {blade length, height, cost, windpower (3-18), efficiency (19)}
	//30kW                              (4,    5,    6,    7,    8,	    9,	   10,    11,    12,    13,    14,   15m/s,  interter efficiency (19)
	//double turbine1[20] = {5, 16, 19999, 0,0,0,0,2000, 2500, 4800, 7500, 10000, 14000, 19000, 24000, 30000, 33000, 30000, 30000, .5};
	//double turbine2[20] = {7, 20, 24999, 0,0,0,0,2500, 3000, 5300, 8000, 10500, 14500, 19500, 24500, 30500, 33500, 30500, 30500, .5};
    //double allturbine[] = {turbine1[20], turbine2[20]}
public:
	turbine(const double Area, const double Power, const double Price, const double Wind);
	double getTurbineOutput() const;	// which turbine is being used
	double getCost() const;				// cost of turbine
	double getDimensions() const;		// length/width of turbine
    
    
};

 
#endif
