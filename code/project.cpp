#include "tempTrender.h"
#include <string>

void project() {
	string pathToFile = "../datasets/";
    tempTrender t(pathToFile); //Instantiate your analysis object
    
    //t.startDaySeasons();
	t.tempEx();	
	//t.tempOnDay(8, 23); //Call some functions that you've implemented
	//t.tempOnDayNumber(306);
	//t.tempPerDay();
	//t.hotCold();
	//t.tempPerYear(2050);
}
