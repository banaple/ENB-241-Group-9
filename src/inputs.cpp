/* inputs.cpp
 * 
 * ENB 241 Group 9 Group project
 *
 * inputs class header
 *
 */
 
 
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include "inputs.h"
#include "turbine.h"
#include "savings.h"
#include "location.h"

using namespace std;
 
 int main()
{
	//City
string City;
cout << "Enter your City : " << endl;
getline (cin, City);
//cout << City << endl;

//Windspeed = location.brisbane
 
	// Area
int Area;
cout << "Enter the space you have for turbines (m^2) : " << endl;
cin >> Area;
//cout << Area << endl;
 
	// Price
int Price;
cout << "Enter your maximum price : " << endl;
cin >> Price;
//cout << Price << endl;

	// Current Energy
int CE;
cout << "Enter your current quarterly energy consumption : " << endl;
cin >> CE;
//cout << CE << endl;
	
	// Power Output
int Power;
cout << "Enter your desired power output : " << endl;
cin >> Power;
//cout << Power << endl;


cout << getTurbineOutput() << endl;
 return 0;
 
}
