#define SIZE 5
#include <stdio.h>

int main(){
	int sched[SIZE] = {0,0,0,0,0};	
	int quit = 0;
	int option;
	int counter = 0;
	int delete;
	while(quit != 1){
		printf("Menu \n");
		printf("1-Schedule Lesson \n");
		printf("2-Delete \n");
		printf("3-List \n");
		printf("9-Quit \n");	

		scanf("%d",&option);
		switch(option){
			case 1:
				if(counter != 5){
					for(int i=0;i<SIZE;i++){
						if(sched[i] == 0){
							sched[i] = i+1;
							printf("Your lesson is at %d \n", i+1);
							counter++;
							break;
						}
						
					}
				}
				else{
					printf("No available lesson times \n");
				}	
				break;
			case 2:
				if(counter == 0)
					printf("no lessons to delete \n");
				else{
					printf("At what time? \n");
					scanf("%d", &delete);
					
					if(sched[delete -1] == 0)
						printf("no lessons at this time \n");
					else{
						sched[delete -1] = 0;
						printf("Cancelled \n");
						counter--;
					}	
				}
				break;
			case 3:
				for(int j =0; j<SIZE; j++){
					if(sched[j] == 0){
						printf("%d: free \n", j+1);
					}
					else{
						printf("%d:lesson \n", j+1);
					}
				} 
				break;
			case 9:
				quit = 1;
				break;
			default:
				printf("invalid input \n");

		}

	printf("\n\n\n");
	}	



return 1;
}
