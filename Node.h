#pragma once

#include "pa5.h"
#include "DietPlans.h"

class ListNode
{
	//private:
	public:
		DietPlan data;
		ListNode *next;
	//public:
		ListNode(); // constructor
};

class List
{
	private:
		ListNode *head, *tail;
	public:
		// constructor-slash-instantiator
		List() { head=NULL; tail=NULL; }

		void createNode(DietPlan input_data);
		void display();
};
