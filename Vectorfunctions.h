#ifndef INCLUDED_Vectorfunctions_H
#define INCLUDED_Vectorfunctions_H

#include "Functions.h"
#include "List.h"
#include "Mergesort.h"
#include "Quicksort.h"
#include "Insertionsort.h"
#include <string>
#include <vector>
template<typename T>
bool bigger(vector<T> A, vector<T> B)
{
	bool ans = false;
	if (A.size() > B.size())
	{
		ans = true;
		return ans;
	}
	else if (A.size() < B.size())
	{
		return ans;
	}
	else if (A.size() == B.size())
	{
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] > B[i])
			{
				ans = true;
				return ans;
			}
		}
		return ans;
	}
}
template<typename T>
bool smaller(vector<T> A, vector<T> B)
{
	bool ans = false;
	if (A.size() < B.size())
	{
		ans = true;
		return ans;
	}
	else if (A.size() > B.size())
	{
		return ans;
	}
	else if (A.size() == B.size())
	{
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] < B[i])
			{
				ans = true;
				return ans;
			}
		}
		return ans;
	}
}
template<typename T>
bool arequal(vector<T> A, vector<T> B)
{
	bool ans = true;
	if (A.size() > B.size())
	{
		ans = false;
		return ans;
	}
	if (A.size() < B.size())
	{
		ans = false;
		return ans;
	}
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] != B[i])
		{
			ans = false;
			return ans;
		}
	}
	return ans;
}


#endif