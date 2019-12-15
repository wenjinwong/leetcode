public static int uniquePaths(int m, int n) {
	if(m <= 0 || n <= 0)
		return 0;

	int []dp = new int[n];
	// initializer
    for(int i = 0; i < n; ++i) {
		dp[i] = 1;
	}

	dp[i] = dp[i-1] + dp[i];
	for(int i = 1; i < m; i++) {
		dp[0] = 1;
		for(int j = 1; j < n; j++) {
			dp[j] = dp[j-1] + dp[j];
		}
	}
	return dp[n-1];
}

