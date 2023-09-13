#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para exit()
#include "default.h"
#include "controlles.h"
#include "getdatelocal.h"

// #ifndef
// 	#define struct Date {int day; int month; int year;};

// #endif
//gcc -o main main.c -ljson-c

int main(){
	int opcaomenu0;
	struct dateatul;
	struct Date date;
	char date_str[11];
	char nametask[50];
	char namefile_litstasks[] = "tasks.log";
	char stringdata_task[255];
	int i;
	while (1){
		opcaomenu0 = menu0return();
		// printf("\n%d escolhido.\n",opcaomenu0);
		switch (opcaomenu0){
			case 1:
				printf("digite o nome da tarefa\n>> ");
				fflush(stdin);
				// scanf("%s",nametask);
				gets(nametask);
				//verificar se existe a tarefa
				printf("criando tarefa %s\n",&nametask);
                date = getdatelocal();
                sprintf(date_str,"%d/%d/%d",date.day,date.month,date.year);
                // printf("%s",date_str);
               	if (!verificartask_existente(namefile_litstasks, nametask )) printf("criando arquivo %s",namefile_litstasks);criarfiletask(namefile_litstasks);
               	sprintf(stringdata_task,"|nametask %s |datenewtask %s |timeseg 0\n",nametask, date_str);
 				adicionar_task(stringdata_task, date_str, namefile_litstasks);
 				break;
			case 2:
				break;
			case 3:
				break;
		continue;
		};
	
	};
return(0);
};