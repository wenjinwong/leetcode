/*
 *
 * 2019年12月 4日 星期三 19时44分50秒 CST
 *
 */

int lcs(char s1[], char s2[], int m, int n) {
	if(s1[m] == 0 || s2[n] == 0)
		return 0;
	if(s1[m] == s2[n]) return max(lcs(s1, s2, m-1, n), lcs(s1, s2, m, n-1)) + 1;
}


