#pragma once

#include "pa5.h"
#include "DietPlans.h"

class ListNode
{
	DietPlan data;
	ListNode *next;
};

class List
{
	private:
		ListNode *head, *tail;
	public:
		// constructor-slash-instantiator
		List() { head=NULL; tail=NULL; }
};
