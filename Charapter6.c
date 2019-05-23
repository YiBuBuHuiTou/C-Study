#include <stdio.h>
int main(void) {
	/*
	int status = 0;
	while (++status < 10) {
		// expect value is  1 2 3 4 5 6 7 8 9
		printf("status is %d \n",status);
	}
	int name = 0;
	printf("name == %d", name);
	_Bool flag = scanf("%d",&name);
	printf("name == %d", name);
	if(flag) {
		printf("Õæ");
	}
	else {
		printf("¼Ù");
	}
	*/

	/*
	for (int i = 0;i <= 10;i++) {
		printf("num is %d \n", i);
	}
	*/
	char ch;
	while (ch = getchar() != '#') {
		putchar(ch);
	}
}