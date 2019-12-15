#include<stdio.h>

int res[3];
int nums[3] = {1, 2, 3};
int track[3] = {0,0,0};

void f() {
	for(int i = 0; i < 3; i++) {
		if(track[i] == 0) {
			track[i] = 1;
			printf("%d", nums[i]);
			f();
			track[i]=0;
		}
	}
}

int main() {
	f();
}
