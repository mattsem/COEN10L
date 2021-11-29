#include <stdio.h>
#include <string.h>
#include <ctype.h>

char words[10][20];	
int counter=0;
int length[10];
	


int main(void);
void input(void);
void reverse(void);
void convert(void);
void info(void);
void print(void);


int main(void){
	input();
	reverse();
	convert();
	info();	



return 1;
}


void input(void){
	int i,j,k;
	char word[20];
	
	

	for(i=0;i<10;i++){
		if(scanf("%s",word)<1)
			break;

		else{
			
				for(j=0;j<counter;j++){
					if(strcmp(word,words[j])<0)
						break;							

				}
			
				for(k=counter-1;k>=j;k--){
					strcpy(words[k+1],words[k]);
					
				}
				strcpy(words[j],word);
				counter++;
				
		}
		
	}
	
	printf("\n\n");
	print();


}


void  reverse(void){
	int i;
	char temp[20];
	for(i=0;i<counter/2;i++){
		strcpy(temp,words[i]);
		strcpy(words[i],words[counter-1-i]);
		strcpy(words[counter-1-i],temp);
		 
		
	}	
	printf("reverse:\n");
	print();
}

void convert(void){
	int i;
	char *p;
	
	printf("Uppercase:\n");
	for(i=0;i<counter;i++){
		p = words[i];
		length[i]=0;
		while(*p != '\0'){
			
			if(islower(*p)!=0)
				*p = toupper(*p);
			p++;
			length[i]++;
		}			
		
	}
	
	print();

}

void info(void){
	int minPos;
	int min=length[0];
	int maxPos;
	int max= length[0];
	int sum = 0;
	int i;
	for(i=0;i<counter;i++){
		sum += length[i];	
		if(length[i]<min){
			min = length[i];
			minPos = i;
		}
		if(length[i]>max){
			max = length[i];
			maxPos = i;
		}	
	}
		
	printf("Avg:%d  \n",sum/counter);
	printf("Shortest: %s \n", words[minPos]);
	printf("Longest: %s \n", words[maxPos]);
	for(i = 0;i<counter; i++){
		if(isalpha(words[i][0]) == 0)
			printf("%s \n",words[i]); 

	}

	
}

void print(void){
	int i;
	for(i = 0; i<counter;i++){
		printf("%s \n", words[i]);


	}

	printf("\n\n\n");


}





