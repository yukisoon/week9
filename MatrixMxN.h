#pragma once

#include "VectorND.h"

class MatrixMxN
{
public:
	VectorND *row;
	//VectorND row0, row1, row2;



	/*VectorND *rows_;
	std::vector<VectorND> rows_;
	std::vector<VectorND*> rows_;*/


	MatrixMxN(VectorND *_r)
		: row(_r)
	{

	}

	VectorND operator*(const VectorND& rhs)
	{
		VectorND ans;

		ans.x_ = row0 * rhs;
		ans.y_ = row1 * rhs;
		ans.z_ = row2 * rhs;

		return ans;
	}
};
