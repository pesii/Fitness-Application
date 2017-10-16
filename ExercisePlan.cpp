#include "ExercisePlan.h"

void ExercisePlan::set_goal(int goal) {
	goal_steps = goal;
}

void ExercisePlan::set_name(string name) {
	plan_name = name;
}

void ExercisePlan::edit_goal() {
	int user_input = 0;
	cout << "Enter a new steps goal: ";
	cin >> user_input;
	
	set_goal(user_input);

}
