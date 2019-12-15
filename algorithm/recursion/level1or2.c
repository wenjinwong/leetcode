/*
 * 
 *2019年12月 4日 星期三 17时55分24秒 CST
 *
 */

int f(int n) { /* Utilized to calculate the num of methods to climib the ladder, when the charactor can jump one or two steps once. */
	/* end of recursion */
	if(n == 1) return 1;
	if(n == 2) return 2;
	return f(n-1) + f(n-2);
}

int main() {
	return f(5) ==8 ;
}
