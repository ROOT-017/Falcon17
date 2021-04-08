#include <stdio.h>

void sort(int *a)
{
	int j, temp, i, num;

	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{

			if (a[i] > a[j])
			{
				temp = a[j],
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	int ans, num, i;

	printf("Enter number of elements: ");
	scanf("%d", &num);

	int a[num];
	printf("Enter %d elements: ", num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a);

	for (i = 0; i < num; i++)
	{
		printf("\t%d", a[i]);
	}
	return 0;
}
