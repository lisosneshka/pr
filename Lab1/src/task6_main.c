#include <stdio.h>
#include <math.h>

extern double x, y; //��������������� ���������� 
int main()
{
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
