#define SIZE 5
#define MAX_NAME 20
#include <stdio.h>
#include <string.h>

int main(){
	char sched[SIZE][MAX_NAME];	
	char name[MAX_NAME];
	int quit = 0, counter = 0; 
	int row, i , j, k, l, z, y;
	int option,flag, delete = 0;
	char letter,findletter;
	for(k= 0; k<SIZE; k++){
		sched[k][0] = '\0';
	} 
	
	while(quit != 1){
		printf("Menu \n");
		printf("1-Schedule Lesson \n");
		printf("2-Delete \n");
		printf("3-List \n");
		printf("4-Show Names starting with letter \n");
		printf("9-Quit \n");	

		scanf("%d",&option);
		switch(option){
			case 1:
				if(counter == SIZE){
					printf("No avaliable lesson times \n");
				}
				
				else{
					printf("Enter Name \n");
					scanf("%s", name);
					strcpy(sched[counter],name);
					counter++;
				}	
				break;
			case 2:
				if(counter == 0)
					printf("no lessons to delete \n");
				else{
					printf("Whose lesson? \n");
					scanf("%s", name);
					//printf("hay");	
					for(y=0;y<SIZE;y++){
						if(strcmp(sched[y], name)==0){
							//printf("ffdfadf");
							
							sched[y][0] = '\0';
							delete = 1;
							
							for(row = y+1; row<counter ; row++){
							
									strcpy(sched[row-1], sched[row] );
								
									
							
							}
							sched[counter-1][0] = '\0'; 
							counter--;
						}
						
					}
					if(delete == 0){
						printf("no lesson found");
					}
					delete = 0;
					
					
				}
				break;
			case 3:
				for(j =0; j<SIZE; j++){
					if(sched[j][0] == '\0'){
						printf("%d: free \n", j+1);
					}
					else{
						printf("%d: %s  \n", j+1, sched[j]);
					}
				} 
				break;



			case 4:
				
				printf("Enter letter \n");
				scanf(" %c", &letter);
				//printf("%c", letter);
				flag = 0;
				for(l=0;l<SIZE;l++){
				
					if(sched[l][0] == letter){
						//printf("ksfj");
						flag =1;
						z=0;
						while(sched[l][z] != '\0'){
							printf("%c",sched[l][z]); 
							//printf("%d \n", z);
							
							z++;
						}
					}
							
				}				
					
				if(flag != 1)
					printf("no names found");
				
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
