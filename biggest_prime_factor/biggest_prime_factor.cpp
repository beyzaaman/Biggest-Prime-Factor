#include "pch.h"
#include <iostream>
#include "biggest_prime_factor.h"

biggest_prime_factor::biggest_prime_factor()
{
}

biggest_prime_factor::~biggest_prime_factor()
{
}

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
	find_prime_factors();
}

void biggest_prime_factor::find_prime_factors()
{
	if (!factors.empty())
	{
		for (unsigned int i = 0; i < factors.size(); i++)
		{
			int element = factors.front();
			factors.pop();

			for (int base = 2; base < element; base++)
			{
				if (element%base == 0)
				{
					find_prime_factors();
				}

			}

			std::cout << element << " ";
		}

		std::cout << "are the prime factors of " << user_number << ".\n";
	}
	
		return;
	
	
}
