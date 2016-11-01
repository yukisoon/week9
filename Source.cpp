#include <iostream>
#include "VectorND.h"
#include "MatrixMxN.h"


int main()
{
	int col = 5;
	VectorND v0(col);

	for (int i = 0; i < col; i++)
	{
		v0.v[i] = i+1;
	}

	//VectorND v1 = VectorND(4, 5, 6);
	//VectorND v2;
	//v2 = v0 + v1;

	/*std::cout << v2.x_ << " " << v2.y_ << " " << v2.z_ << std::endl;

	std::cout << v0 << std::endl;
	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	std::cout << v0 * v1 << std::endl;*/

	MatrixMxN m(VectorND(col));

	VectorND y = m * v0;

	std::cout << y << std::endl;



	/*Matrix3x3 m(5, 4);
	VectorND v(5);

	vectorND y = m*v;*/




	return 0;
}