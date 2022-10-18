#include "UI.h"
#include "Vectorfunctions.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//start();
	cout << "enter size" << endl;
	int n = 0;
	cin >> n;
	Nodev<int>* p,*q1,*q2;
	p = Headv<int>(n);
	q1 = p;
	q2 = p;
	printvlist(p);
	//insertionsortelvec<int>(&p);
	// cout << "sorted list" << endl;
	//printvlist(p);
	//mergesortelvec(&q1);
	//cout << "sorted list" << endl;
	//printvlist(q1);
	quicksortelvec(q2);
	cout << "sorted list" << endl;
	printvlist(q2);
	return 0;
}