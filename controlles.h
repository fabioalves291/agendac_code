#include <time.h>

int menu0return(){
	int resmenu;
	while (1){
			menu();
			printf("\n>> ");
			fflush(stdin);
			scanf("%d", &resmenu);
//			printf("%c %d",resmenu);
//			printf("\n%d > 2 = %d",resmenu,resmenu> 2);
//			system("cls");
			if (resmenu> 0 && resmenu < 4){
				return(resmenu);		
				}else{
					printf("\nopcao invalida\n\b");	
					continue;
					};
//		while (getchar() != '\n'); //solução do chatgpt, preferi usar o fflush devido fflush ser para saida e pode ocasionar erros em sistemas diferentes		
	};
};
// !!! o cliente vai resolver a diferença de json , para estrutura padrao. solicita o json ou cria o json e envia para a web.

// struct Date {int day; int month; int year;};


int adicionar_task(char stringdata_task[], char date_str[70], char namefile_litstasks[50]){
	int i;
	FILE *fp;
	fp = fopen(namefile_litstasks, "a+");
	if (!fp){
		printf("Error na leitura de file tasks");
		// continue;
		exit(1);
		}
		else{
			for(i=0;stringdata_task[i];i++) putc(stringdata_task[i],fp);
		};
	fclose(fp);
	// sscanf("%d/%d/%d\n",date.day,date.month,date.year);
	return 0;
	};
int verificartaskexistente(){

	} 

int iniciartaks(){

	}
