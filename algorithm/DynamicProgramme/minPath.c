/*
 *
 * 2019年12月 4日 星期三 19时22分07秒 CST
 *
 */
#include<stdio.h>
int uniquePaths(int arr[3][3], int m, int n) {
	if(m <= 0 || n <= 0) return 0;

	int dp[m][n];
	dp[0][0] = arr[0][0];
	for(int i = 1; i < m; i++) {
		dp[i][0] = dp[i-1][0] + arr[i][0];
	}
	for(int i = 1; i < n; i++) {
		dp[0][i] = dp[0][i-1] + arr[0][i];
	}
	for(int i = 1; i < m; i++) {
		for(int j = 1; j < n; j++) {
			dp[i][j] = dp[i-1][j]<dp[i][j-1]?dp[i-1][j]+arr[i][j]:dp[i][j-1]+arr[i][j];
		}
	}
	return dp[m-1][n-1];
}	

int main() {
	int arr[3][3] = {{1,3,1},{1,5,1},{4,2,1}};
	printf("%d", uniquePaths(arr, 3, 3));
}
