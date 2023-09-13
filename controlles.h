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

int verificartask_existente( char vnamefile_litstasks[], char nametaks[50]){
	char variavel;
	char value;
	char c;char e;
	char totalline[255];
	char stringline[255];
	char cchar[2];
	int cont;
	int cont_linha;

	printf("vericando se a task ja foi inserida\n");
	FILE *fp;
	fp = fopen(vnamefile_litstasks, "r");
	if (!fp){
		printf("Error na leitura de file tasks\n");
		return 0;
		};
	cont = 0;
	while((c = getc(fp)) != EOF){
		printf("%c",c);
		sprintf(cchar, "%c",c);
		// printf("%c",cchar);
		totalline[cont_linha] = c;
		if (cchar == "\n"){
			printf("final");
			cont_linha = 0;
		}
		// printf("%s",totalline);
		//if (c == "|"){}
		cont_linha ++;
		cont ++;
	};
	fclose(fp);
	printf("terminado verificação a verificação\n");
	return 1;
	};
int criarfiletask(char vnamefile_litstasks[]){
	FILE *fp;
	fp = fopen(vnamefile_litstasks, "w");
	fclose(fp);

}
int iniciartaks(){

	}
