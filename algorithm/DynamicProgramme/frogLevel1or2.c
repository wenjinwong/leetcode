/*
 *
 * 2019年12月 4日 星期三 18时49分05秒 CST
 *
 */
#include<assert.h>
#include<stdio.h>
int f(int n) {
	/* Utilized to calculating the num of frog... */
	if(n <= 2) 
		return n;

	/* Create an array to store historical data. */
	int dp[n+1];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	/* according to relationship to calculating dp[n] */
	for(int i = 3; i <= n; ++i) {
		dp[i] = dp[i-1] + dp[i-2];
		printf("i: %d  %d\n ",i, dp[i]);
	}
	return dp[n];
}

int main() {
	assert(f(5) == 8);
	return 0;
}
