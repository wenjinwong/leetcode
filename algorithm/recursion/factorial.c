/* 
 *  DATE: 2019年12月 4日 星期三 17时44分50秒 CST
 *  AUTHER: Wenjin Wong
 */

int factorial(int n) /* Be used to calculate the factorial of n */
{
	/* end of recurison */
	if(n <= 2) return n;
	/* reduce the argments, and find a equation */
	return n * factorial(n - 1);
}

int main() {
	return (factorial(5) == 120);
}
