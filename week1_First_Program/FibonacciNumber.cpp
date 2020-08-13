#include<stdio.h>
int main()
{
	int n, t1, t2, t3 = 0, count = 0, keep = 0, i;
	t1 = 0;
	t2 = 1;
	printf("Program sum of all even term in fibonacci sequence");
	printf("\n\nEnter number of term : ");
	scanf_s("%d", &n);
	printf("0 ");
	while (t1 < n)
	{
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
		if (t1 % 2 == 0)
		{
			keep += t1;
			printf("+ %d ", t1);
		}
	}
	printf("= %d \n\nsum of all even term : %d", keep, keep);
	return 0;
}