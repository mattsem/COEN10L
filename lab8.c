#define SIZE 5
#define MAX_NAME 20
#define PHONE 11
#include <stdio.h>
#include <string.h>


int case1();
int case2();
int case3();
int case4();
int case5();


int counter = 0;
char sched[SIZE][MAX_NAME];
char name[MAX_NAME];
char letter;
char contacts[SIZE][PHONE];
char contNumber[PHONE];
int groupSize[SIZE];
int size;
int quit = 0;


int main(){
	int k = 0;
	int option;
		
	for(k= 0; k<SIZE; k++){
		sched[k][0] = '\0';
	} 
	
	while(quit != 1){
		printf("Menu \n");
		printf("1-Schedule Lesson \n");
		printf("2-Delete \n");
		printf("3-List \n");
		printf("4-Show Names starting with letter \n");
		printf("5-Show names for a group size \n");
		printf("9-Quit \n");	

		scanf("%d",&option);
		switch(option){
			case 1:

				case1();
		
				break;
			case 2:
				case2();
	
				break;
			case 3:
				case3();
				break;



			case 4:
				
				case4();
				
				break;
			case 5:
				case5();
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



int case1(){		
	int i = 0;
	int present = 0;


	if(counter == SIZE){
        	printf("No avaliable lesson times \n");
        }

        else{
        	printf("Enter Name \n");
                scanf("%s", name);

               	for(i = 0;i<counter; i++){
                	if(strcmp(name, sched[i]) == 0){
                        	present = 1;
                        }
                }
               	if(present == 0){
			printf("Enter Contact Number \n");
                        scanf("%s",contNumber);
                                         
                        printf("Enter group size \n");
                        scanf("%d",&size);
                          
                        if(size<5 && size>0){
                                strcpy(sched[counter],name);
				groupSize[counter] = size;
                                strcpy(contacts[counter],contNumber);
				counter++;
                        }
                        else{
                                printf("invalid size \n");
                
                        }

                }       
                else{
                	printf("Name already used \n");
                        
                }
                
		present = 0;

        }


return 1;
}

int case2(){
	int y =0;
	int delete = 0;
	int row;
	int z;
	int change;
		
	
	
	if(counter == 0)
		printf("no lessons to delete \n");
        else{
        	printf("Whose lesson? \n");
                scanf("%s", name);
               	//printf("hay");
                for(y=0;y<SIZE;y++){
                	if(strcmp(sched[y], name)==0){
                        	//printf("ffdfadf");
				contacts[y][0] = '\0';
				groupSize[y] = '\0';
                        	sched[y][0] = '\0';
                                delete = 1;

                             	for(row = y+1; row<counter ; row++){

                                	strcpy(sched[row-1], sched[row] );
					strcpy(contacts[row-1],contacts[row]);
					groupSize[row-1] = groupSize[row];
					
                              	}
                       		sched[counter-1][0] = '\0';
				contacts[counter-1][0] = '\0';
				groupSize[counter-1] = '\0';
	
				change = y;
				for(z=y; z<counter;z++){
					if(sched[z][0] == '\0')
						printf("%d: free \n", z+1);
					else{
						printf("%d: %s \n", z+1, sched[y]);
					}
				}


                        counter--;
                 	}

        	}
		for(z=y; z<counter;z++){
                       	if(sched[z][0] == '\0')
                        	printf("%d: free \n", z+1);
                        else{   
                        	printf("%d: %s \n", z+1, sched[y]);
                	}
               	}
		
        if(delete == 0){
        	printf("no lesson found \n");
        }
        delete = 0;


      	}

return 1;
}

int case3(){
	int j = 0;
	
	
	for(j =0; j<SIZE; j++){
        	if(sched[j][0] == '\0'){
                	printf("%d: free \n", j+1);
                	
		}
                else{
                	printf("%d: %s     %s    %d  \n", j+1, sched[j], contacts[j], groupSize[j]);
			
                }
        }
return 1;
}

int case4(){
	int l = 0;
	int flag = 0;
	int z = 0;	
	
	if(counter !=0){
		
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
                       			printf("%c \n",sched[l][z]);
                                	//printf("%d \n", z);

                                	z++;
                        	}
                	}

      		}

       		if(flag != 1)
       			printf("no names found \n");
	}

	else{
		printf("nothing to list \n");
	}
return 1;
}

int case5(){
	if(counter !=0){
		printf("enter a size   \n");
		scanf("%d", &size);
		if(size <5 && size>0){
			int i =0;
	
			for(i = 0; i<SIZE; i++){
				if(size == groupSize[i]){
					printf("%d: %s \n", i+1,sched[i]);
				} 
			}
		}
		else{
			printf("invalid input \n");
		}
	}
	
	else{
		printf("nothing to list \n");
	}
return 1;
}







