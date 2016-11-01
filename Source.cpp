#include <iostream>
#include "VectorND.h"
#include "MatrixMxN.h"


int main()
{
	VectorND v0(4);

	for (int i = 0; i < 4; i++)
	{
		v0.v[i] = i + 1;
	}
	
	MatrixMxN m(5, 4);	
	for(int i = 0; i < 5; i++)
	{ 
		for (int j = 0; j < 4; j++)
		{
			m.vs[i]->v[j] = i + j;
		}
	}
	
	std::cout << *m.vs[0] << std::endl;
	std::cout << *m.vs[1] << std::endl;
	std::cout << *m.vs[2] << std::endl;
	std::cout << *m.vs[3] << std::endl;
	std::cout << *m.vs[4] << std::endl;
	std::cout << std::endl;
	std::cout << v0 << std::endl;
	
	VectorND y(5);
	y = m * v0;
	std::cout << std::endl;
	std::cout << y << std::endl;

	return 0;
}


//#include <iostream>
//#include "Vector3D.h"
//#include "Matrix3x3.h"
//
//
//int main()
//{
//
//	Vector3D v0 = Vector3D(1, 2, 3);
//
//	Matrix3x3 m(Vector3D(1,2,3), Vector3D(1, 2, 3), Vector3D(1, 2, 3));
//
//	Vector3D y = m * v0;
//
//	std::cout << y << std::endl;
//	return 0;
//}