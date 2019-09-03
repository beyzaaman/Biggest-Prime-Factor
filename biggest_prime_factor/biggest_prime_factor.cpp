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
		int factor = factors.front();

		for (int base = 1; base <= factor; base++)
		{
			if (factor%base == 0)
			{
				if (factor == base && (factor != 1 || base == 1))
				{
					std::cout << factor << " ";

					prime_factors.push(factor);
					factors.pop();

					find_prime_factors();

				}

				else
				{
					if (base != 1)
					{
						if (factors.size()!=1)
						{
							factors.pop();
							find_prime_factors();
						}
						else
						{
							base = 1;
							return;
						}

					}

				}
			}
		}
	}
}

