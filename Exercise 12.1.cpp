#include<stdio.h>

double dnang(double m, double v) {
	double c;
	c = (m*v*v)/2;
	return c;
}

int main () {
	double m, v;
	scanf("%lf%lf", &m, &v);
	printf("%4.f", dnang(m, v));
	return 0;
}

