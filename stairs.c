/* the program to count the number of ways to reach the top of stairs for rabbit with n max that he can jump*/

#include <stdio.h>

// how many ways we have
int countWays(int n, int m)
{
	int res[n];
	res[0] = 1;
	res[1] = 1;
	for (int i = 2; i < n; i++) {
		res[i]=0;
		for (int j = 1; j <= m && j <= i; j++)
			res[i]  +=res[i - j];
	}
}

//ways with by the jump
int countW(int j, int m)
{
	return countWays(j + 1, m);
}

int main()
{
	int j, m;
	printf("Please, enter a number of stairs: ");
	scanf("%d", &m);
	printf(" How far can rabbit jump?");
	scanf("%d", &j);
	printf("Number of ways = %d", countWays(m,j));
	return 0;
}
