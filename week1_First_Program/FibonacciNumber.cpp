#include<stdio.h>
int main()
{
	int n,t1,t2,t3=0,count=0,keep=0,i ;
	t1 = 0;
	t2 = 1;
	scanf_s("%d",&n);
	//printf("%d, %d ", t1, t2);
	//for(i=0;i<n;i++)
	while(t1<n)
	{
		//printf("\nt[%d] : %d ", i, t1);
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
		//i++;
		if (t1 % 2 == 0)
		{
			printf("\nkeep = keep + t1");
			printf("\n%d = %d + %d", keep + t1, keep, t1);
			keep += t1;

		}
	}
	
	printf("\nsum of all even term : %d", keep);

	return 0;
}