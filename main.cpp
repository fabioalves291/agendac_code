#include <stdio.h>
#include <json/value.h>
#include "default.h"
#include "controlles.h"

int main(){
	int opcaomenu0;
	while (1){
		opcaomenu0 = menu0return();
		printf("\n%d escolhido.\n",opcaomenu0);
		switch (opcaomenu0){
			case 1:
				printf("\nopcao 1\n");
			case 2:
				continue;
			case 3:
				continue;
		}
	}
	return(0);
}
