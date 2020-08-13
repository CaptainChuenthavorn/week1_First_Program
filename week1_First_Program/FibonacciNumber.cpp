#include<stdio.h>
int main()
{
	int n,t1,t2,t3,count=0 ;
	t1 = 0;
	t2 = 1;
	scanf_s("%d",&n);
	while (count < n)
	{
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
		count++;
	};
	printf("%d", t3);
	return 0;
}