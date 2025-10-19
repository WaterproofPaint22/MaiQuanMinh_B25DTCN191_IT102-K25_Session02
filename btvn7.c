#include <stdio.h>

int main(){
	int number = 12345, Sum = 0 ;
	while (number > 0) {
	Sum += number % 10;
	number = number / 10;
	}
	printf ("Tong cua hai so la: %d", Sum);
	return 0;
	 
	
}

