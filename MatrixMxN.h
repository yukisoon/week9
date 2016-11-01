#pragma once

#include "VectorND.h"

class MatrixMxN
{
public:
	VectorND **vs;
	int row;
	int col;

	MatrixMxN()
	{}

	MatrixMxN(const int& row_, const int& col_)
		:row(row_), col(col_)
	{
		vs = new VectorND*[row_];

		for (int i = 0; i < row; i++)
		{
			vs[i] = new VectorND(col);
		}		
	}
	
	~MatrixMxN()
	{
		delete[] vs;
	}


	VectorND operator*(const VectorND& rhs)
	{
		VectorND ans(row);
		
		for (int i = 0; i < row; i++)
		{
			ans.v[i] = *this->vs[i] * rhs;
		}

		return ans;
	}
};
