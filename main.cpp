#include "pa5.h"
#include "DietPlans.h"
#include "ExercisePlan.h"

// extraction, 
int main(void)
{
	ofstream myfile;
	myfile.open("dietPlans.txt");

	DietPlan a;	
	
	a.set_date("01/12/1998");
	a.set_name("Pesi");
	a.set_goal(657);
	//cout << a;

	myfile << a;

	myfile.close();

	ifstream readfile;
	readfile.open("dietPlans.txt", ifstream::in);
	
	DietPlan b;
	
	readfile >> b;
	cout << b;

	return 0;
}
