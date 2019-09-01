#pragma once
#include "pch.h"
#include <iostream>
#include <stack>

class biggest_prime_factor
{
public:
	int user_number;
	std::stack <int> factors;
	
	void get_number();
	void find_factors();
};
