#include <stdio.h>
#include "f_func.c"
#include "g_func.c"


int main(){
	double x;
	scanf("%lf", &x);
	printf("f(x) = %lf\tg(x) = %lf\t", f(x), g(x));
}

