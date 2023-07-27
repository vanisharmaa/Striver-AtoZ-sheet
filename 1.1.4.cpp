#include<bits/stdc++.h>
double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	// const double pi = 22.0/7.0; -> gives the value of pi upto 5 decimal places only.
	// cout << pi << endl;
	switch(ch){

		case 1 : return M_PI * a[0] * a[0]; //M_PI -> value of pi = 3.14159265358979323846
		break;

		case 2 : return a[0] * a[1];
		break;

		default : cout << "Wrong input" << endl;
			break;
	}
}
