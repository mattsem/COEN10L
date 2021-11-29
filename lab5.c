#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define ROUNDS 10.0

int main(){
	int i = 0,rand1,rand2,guess,count = 0;
	srand((int) time(NULL));
	
	while(i <ROUNDS){	
		rand1 = rand() % 13;
		rand2 = rand() % 13;
		printf("%d",rand1);
		printf("X");
		printf("%d \n",rand2);
		printf("What's the answer? \n");
		scanf("%d",&guess);
		
		if(guess == rand1 * rand2){
			count++;
			printf("nice job! \n");
		}
		else{
			printf("sorry \n");
		}
		printf("\n");
		i++;
	}
	printf("\n\n\n\n\n");
	 
	
	
	printf("You got %d%% \n\n",count*10);		
return 0;
}
