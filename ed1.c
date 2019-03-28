#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TEXT 100

int main(){
	char texto[TEXT], palavra[30];
	char *ptr;
	int i, j, num, inicio=0;
	ptr=texto;
	gets(texto);
	for(i=0;i<=TEXT;i++){
		if(isspace(*(ptr+i))){
			strncpy(palavra, *(ptr+inicio) , 10);
			puts(palavra);
			/*for(j=inicio;j<=i;j++){
				palavra[num]=texto[j];
				num++;
				if(isspace(palavra[num]))
					break;
			}
			printf("%d", num);
			puts(palavra);
		}*/
		}
		else{
			continue;
		}
	}

}

/*char texto[TEXT]; 
	int i;
	gets(texto);
	for(i=0;i<=TEXT;i++){
		if(isspace(texto[i])){
			printf("\n");
		}
		else if (texto[i]=='\0')
			break;
		else{
			printf("%c", texto[i]);
		}
	}*/
