/*
 *
 *	2019年12月 4日 星期三 17时49分50秒 CST
 *	AUTHER: Wenjin Wong
 *
 */

int fib(int n) { /* be utilized to calculate fib of n. */
	/* end of recursion */
	if(n == 1 || n == 0) return 1;
	return fib(n-1) + fib(n-2);
}

int main() {
	return (fib(5) == 8);
}
