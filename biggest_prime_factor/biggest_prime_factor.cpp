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
	while (!factors.empty())
	{
		int factor = factors.front();
		int base = 2;

		while (base <= factor)
		{
			if (factor%base != 0)
			{
				++base;
				//devam et.
			}

			else // base%factor==0
			{
				if (base != factor)
				{
					base = factor + 1;
					factors.pop();
	
				}

				else //base=factor
				{
					std::cout << factor << " ";
					factors.pop();
					
					find_prime_factors();
				}

				
			}
		}

		if (factors.size() != 0)
		{
			factors.pop();
		}

		else
		{
			find_prime_factors();
		}
		
	}
	
}

