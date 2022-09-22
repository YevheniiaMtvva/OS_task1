#include <stdio.h>
#include <math.h>

double f(double x){
	return exp(-fabs(x)) * sin(x);
	}

double g(double x){
	return exp(-fabs(x)) * cos(x);
	}

int main(){
	double x;
	scanf("%lf", &x);
	printf("f(x) = %lf\tg(x) = %lf\t", f(x), g(x));
}

