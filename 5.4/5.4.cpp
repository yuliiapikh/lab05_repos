#include <iostream>
#include <cmath>

using namespace std;

double S1(const int N, const int i, double t) {
	t = t + ((cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i)));
	if (i <= N) {
		return t;
	}
	else {
		return S1(N, i - 1, t);
	}
}

double S2(const int N, const int i, double t) {
	t = t + ((cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i)));
	if (i >= 20) {
		return t;
	}
	else {
		return S2(N, i + 1, t);
	}
}

double S3(const int N, const int i) {
	if (i < N) {
		return 0;
	}
	else {
		return ((cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i))) + S3(N, i - 1);
	}
}

double S4(const int N, const int i) {
	if (i > 20) {
		return 0;
	}
	else {
		return ((cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i))) + S4(N, i + 1);
	}
}

double S5(const int N) {
	double S = 0;
	for (int i = N; i <= 20; i++)
		S += ((cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i)));
	return S;
}

int main()
{
	int N;
	cout << "N = "; cin >> N;

	cout << "(rec down --) S1 = " << S1(N, 20, 0) << endl;
	cout << "(rec down ++) S2 = " << S2(N, N, 0) << endl;
	cout << "(rec up --) S3 = " << S3(N, 20) << endl;
	cout << "(rec up ++) S4 = " << S4(N, N) << endl;
	cout << "(iter) S5 = " << S5(N) << endl;
	
	return 0;
}

