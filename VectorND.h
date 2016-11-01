#pragma once
#include <vector>
#include <stdio.h>

class VectorND
{
public:

	int s;
	int *v;

	VectorND()
		:s(0)//√ ±‚»≠
	{}


	VectorND(const int& s_)
		:s(s_)
	{
		v = new int[s_];
	}

	~VectorND()
	{
		//delete[] v;
		//std::cout << v << std::endl;
	}
	
	int operator*(const VectorND& input)
	{
		int ans = 0;
		
		for (int i = 0; i < s; i++)
		{
			ans += this->v[i] * input.v[i];
		}
		return ans;
	}


};


#include <iostream>
std::ostream& operator<<(std::ostream& os, const VectorND& vec)
{
	for (int i = 0; i < vec.s; i++)
	{
		os << vec.v[i] << " ";
	}

	return os;
}
