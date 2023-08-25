#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para exit()
#include "default.h"
#include "controlles.h"
#include "getdatelocal.h"


//gcc -o main main.c -ljson-c

int main(){
	int opcaomenu0;
	struct dateatul;
	struct Date date;
	char date_str[11];
	char nametask[50];
	char namefile_litstasks[] = "tasks";
	char stringdata_task[255];
	int i;
	while (1){
		opcaomenu0 = menu0return();
		// printf("\n%d escolhido.\n",opcaomenu0);
		switch (opcaomenu0){
			case 1:
				printf("digite o nome da tarefa\n>> ");
				scanf("%s",&nametask);
				printf("criando tarefa %s\n",&nametask);
                date = getdatelocal();
                sprintf(date_str,"%d/%d/%d\n",date.day,date.month,date.year);
                // printf("%s",date_str);
               	sprintf(stringdata_task,"|nametask %s |datenewtask %s",&nametask, &date_str);
 
                FILE *fp;
                fp = fopen(namefile_litstasks, "a+");
                if (!fp){
                	printf("Error na leitura de file tasks");
                	// continue;
                	exit(1);
                	}
                	else{
                		for(i=0;stringdata_task[i];i++) putc(stringdata_task[i],fp);
                	}
                fclose(fp);
                // sscanf("%d/%d/%d\n",date.day,date.month,date.year);
              
			case 2:
				continue;
			case 3:
				continue;
		};
	};
	return(0);
};