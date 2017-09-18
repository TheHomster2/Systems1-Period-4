#include <stdio.h>
#include <stdlib.h>

//var for problem 1
int mult3 = 0;
int mult5 = 0;
int check15 = 0;
int i;
//var for problem 6
int sum1 = 0;
int sum2 = 0;
int j;

int main(){
		for (i = 0; i < 1000; i++){
		if (i % 3 == 0){
			mult3 += i;
		}
		if (i % 5 == 0){
			mult5 += i;
		}
		if (i % 15 == 0){
			check15 += 0;
		}
	}

	printf("The sum is %d\n", mult3 + mult5 - check15);

	////////////////////////

	for (j = 0; j <= 100; j++){
		sum1 += j * j;
		sum2 += j;
	}

	printf("The difference is %d\n", sum2 * sum2 - sum1);
	return 0;

}