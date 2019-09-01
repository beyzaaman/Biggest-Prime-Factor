#include "pch.h"
#include <iostream>
#include "biggest_prime_factor.h"

void biggest_prime_factor::get_number()
{
	std::cout << "Welcome, please enter integer number to find it's biggest prime factor:\n";
	std::cin >> user_number;
	find_factors();
}

void biggest_prime_factor::find_factors()
{
	for (int i = 1; i <= user_number; i++)
	{
		if (user_number%i == 0)
		{
			factors.push(i);
		}
	}
}

