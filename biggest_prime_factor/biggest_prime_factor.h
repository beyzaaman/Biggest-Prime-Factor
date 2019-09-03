#pragma once
#include "pch.h"
#include <iostream>
#include <queue>

class biggest_prime_factor
{
public:
	int user_number;
	std::queue <int> factors;
	std::queue <int> prime_factors;
	
	biggest_prime_factor();
	~biggest_prime_factor();
	void get_number();
	void find_factors();
	void find_prime_factors();
};
