#pragma once
#include <vector>
#include <stdio.h>

class VectorND //
{
public:

	int s;
	int *v;//dynamic arry with N components
	//std::vector<int> values_;


	VectorND()
		:s(0)//ÃÊ±âÈ­
	{}


	VectorND(const int& s_)
		:s(s_)
	{
		v = (int*)malloc(sizeof(int) * s);
	}


	VectorND operator+(const VectorND& input)
	{
		VectorND vec;
		/*vec.x_ = this->x_ + input.x_;
		vec.y_ = this->y_ + input.y_;
		vec.z_ = this->z_ + input.z_;*/

		return vec;
	}

	//Vector3D dot_product(const Vector3D)
	int operator*(const VectorND& input)
	{
		int ans;
		for (int i = 0; i < s; i++)
		{
			v[i] * 
		}
		/*ans = this->x_ * input.x_;
		ans += this->y_ * input.y_;
		ans += this->z_ * input.z_;*/

		return ans;
	}

};


#include <iostream>
std::ostream& operator<<(std::ostream& os, const VectorND& vec)
{
	return os << vec.x_ << " " << vec.y_ << " " << vec.z_;
}
