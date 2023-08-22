#include <stdio.h>
#include <time.h>
#include <json-c/json.h>
#include "default.h"
#include "controlles.h"
#include "getdatelocal.h"

//gcc -o main main.c -ljson-c


int main(){
	int opcaomenu0;
	char nametask[50];
	struct dateatul;
	struct Date date;
	struct json_object *json_obj = json_object_new_object();
	char date_str[11];
	// json_object_object_add(json_obj, "age", json_object_new_int(30));

	while (1){
		opcaomenu0 = menu0return();
		// printf("\n%d escolhido.\n",opcaomenu0);
		// ("teste");

		switch (opcaomenu0){
			case 1:
				printf("digite o nome da tarefa\n>> ");
				scanf("%s",&nametask);
				printf("criando tarefa %s\n",&nametask);
                date = getdatelocal();
                sprintf(date_str,"%d/%d/%d\n",date.day,date.month,date.year);

                json_object_object_add(json_obj, "nametask", json_object_new_string(nametask));
                json_object_object_add(json_obj,"dateinit",json_object_new_string(date_str));
                const char *json_str = json_object_to_json_string(json_obj);
				printf("JSON: %s\n", json_str);

                const char *strjson = json_object_get_string(json_obj);
               
                // sscanf("%d/%d/%d\n",date.day,date.month,date.year);
              
			case 2:
				continue;
			case 3:
				continue;
		}
	}
	return(0);
}
