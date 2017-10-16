#pragma once

#include "pa5.h"
#include "DietPlans.h"
#include "ExercisePlan.h"

class FitnessAppWrapper {
	private:

	public:
		void runApp(void);
		void loadDailyPlan(fstream &fileStream, DietPlan &plan);
		void loadWeeklyPlan(fstream &fileStream, DietPlan weeklyPlan[]);

		void displayDailyPlan();
		void displayWeeklyPlan();
		
		void storeDailyPlan();
		void storeWeeklyPlan();
};
