#include "Date.h"
#include<iostream>

Date::Date(int d, int m, int y){
	dd = (0 < d && d <=  maxDays()) ? d : 0;
	mm = (0 < m && m <= 31  ) ? m : 0;
	yyyy =  (1900 < y && y <= 2500) ? d : 0;
}
void Date::Affiche() const
{
	if (dd < 10) { std::cout << "0"; }
	std::cout << dd << "/";
	if (mm < 10) { std::cout << "0"; }
	std::cout << mm << "/";
	std::cout << yyyy << std::endl;
}

bool Date::isbis() const
{
	return (yyyy % 4 == 0);
}
int Date::maxDays() const
{
	int maxjour = 31;
	if (mm == 2) {
			maxjour = isbis() ? 29:28;
	}
	else if ((mm > 7 && mm % 2 == 1)|| (mm < 7 && mm % 2 == 0)) {
		maxjour = 30;
	}	
	return maxjour;
}
