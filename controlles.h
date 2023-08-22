
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
		}
}
