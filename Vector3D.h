#pragma once
#include <vector>
class Vector3D //VectorND
{
public:
	int x_, y_, z_;

	//int *v_;//dynamic arry with N components
	//std::vector<int> values_;


	Vector3D()
		:x_(0), y_(0), z_(0) //ÃÊ±âÈ­
	{}


	Vector3D(const int& x_input, const int& y_input, const int& z_input)
		:x_(x_input), y_(y_input), z_(z_input)
	{
		/*x_ = x_input;
		y_ = y_input;
		z_ = z_input;*/
	}


	Vector3D operator+(const Vector3D& input)
	{
		Vector3D vec;
		vec.x_ = this->x_ + input.x_;
		vec.y_ = this->y_ + input.y_;
		vec.z_ = this->z_ + input.z_;

		return vec;
	}

	//Vector3D dot_product(const Vector3D)
	int operator*(const Vector3D& input)
	{
		int ans;

		ans = this->x_ * input.x_;
		ans += this->y_ * input.y_;
		ans += this->z_ * input.z_;

		return ans;
	}
	
};


#include <iostream>
std::ostream& operator<<(std::ostream& os, const Vector3D& vec)
{
	return os << vec.x_ << " " << vec.y_ << " " << vec.z_;
}
