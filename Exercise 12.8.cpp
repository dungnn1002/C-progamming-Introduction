#include <stdio.h>
#include<math.h>

int MAX(int a, int b) {
	if (a > b) return a;
	return b;
}
int MIN(int a, int b) {
	if (a < b) return a;
	return b;
}

void getJudgeData (int &a) {
	printf("Diem %d\n", a);
}

void calcScore (int a, int b, int c, int d, int e) {
	int sum = a+b+c+d+e;
	int max =0;
	int min =a;
	double tbinh;
	max = MAX(a,b); max = MAX(max,c); max = MAX(max,d); max = MAX(max,e); 
	min = MIN(min,b); min = MIN(min,c); min = MIN(min,d); min = MIN(min,e); 
	sum = sum - max -min;
	tbinh = sum /3;
	printf("\n%lf", tbinh);
}

int main () {
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	getJudgeData(a);
	getJudgeData(b);
	getJudgeData(c);
	getJudgeData(d);
	getJudgeData(e);
	calcScore(a,b,c,d,e);
}
