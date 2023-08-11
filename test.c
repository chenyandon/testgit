#include <stdio.h>
#include "add.h"
#include "sub.h"
int main(){
	printf("a+b=%d\n", add(5, 7));
	
	printf("a-b=%d\n", sub(5, 7));
	return 0;
}
