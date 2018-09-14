#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	
	system("color 03");
	char menu;
	char palabra [100];
	char almacenamiento_palabras[15][100],almacenamiento_codificadas[15][100],almacenamiento_codigos[15][100],almacenamiento_decodificadas[15][100];
	char abcdario[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'};
	int longitudC,longitudD, i, j,filas,columnas;
	int x = 0;
	int y = 0;
	for(i=0;i<100;i++){
		palabra[i]=0;
	}
	for(filas=0;filas<15;filas++){
				for(columnas=0;columnas<100;columnas++){
					almacenamiento_palabras[filas][columnas]=0;
				}
			}
	for(filas=0;filas<15;filas++){
				for(columnas=0;columnas<100;columnas++){
					almacenamiento_codificadas[filas][columnas]=0;
				}
			}
	for(filas=0;filas<15;filas++){
				for(columnas=0;columnas<100;columnas++){	
					almacenamiento_codigos[filas][columnas]=0;
				}
			}
	for(filas=0;filas<15;filas++){
				for(columnas=0;columnas<100;columnas++){	
					almacenamiento_decodificadas[filas][columnas]=0;
				}
			}
	do{
	    printf("CODIFICACION Y DECODIFICACION EN CIFRADO CESAR.\n");
	    printf("1: Codificar.\n");
	    printf("2: Decodificar.\n");
	    printf("3: Recuperar texto original.\n");
	    printf("0: Salir.\n");
	    scanf("%c",&menu);
	    fflush(stdin);
	    switch(menu){
	        case '1':{
				
	        	printf("Ingresa un palabra y la codificare: ");
	        	scanf("%s",&palabra);
	        	fflush(stdin);
	        	int clave_cod;
	        	printf("Ingresa la clave para codificar la palabra: ");
	        	scanf("%d",&clave_cod);
	        	if(clave_cod!=1||clave_cod!=2||clave_cod!=3||clave_cod!=4||clave_cod!=5||clave_cod!=6||clave_cod!=7||clave_cod!=8||clave_cod!=9||clave_cod!=10){
	        		printf("Upss...ese digito no funciona aqui, daremos por entendido que elegiste el numero 3.\n");
	        		clave_cod=3;
				}
	        	fflush(stdin);
				char cifrado[longitudC];
				printf("Palabra Inicial : %s\n",palabra);
				printf("Palabra Decodificada : ");
				for(i=0;i<100;i++){
				if(palabra[i]!='\0'){
					longitudC=palabra[i]+clave_cod;
					if(longitudC>122){
						longitudC=longitudC-26;
					}
				}else{
					longitudC=0;
				}
					printf("%c",longitudC);
					almacenamiento_palabras[x][i]=palabra[i];
					almacenamiento_codificadas[x][i]=longitudC;	
				}
				x++;
				printf("\n");
				system("pause");
				system("cls");
	        	break;
			}
	        case '2':{
		        int clave_dec;
		        printf("Ingresa la clave con la que fue codificada: ");
		        scanf("%d",&clave_dec);
		        if(clave_dec!=1||clave_dec!=2||clave_dec!=3||clave_dec!=4||clave_dec!=5||clave_dec!=6||clave_dec!=7||clave_dec!=8||clave_dec!=9||clave_dec!=10){
	        		printf("Upss...ese digito no funciona aqui, daremos por entendido que elegiste el numero 3.\n");
	        		clave_dec=3;
				}
		        fflush(stdin);
		        printf("Escribe la palabra codificada: ");
		        scanf("%s",&palabra);
		        fflush(stdin);
		        printf("Palabra cifrada : %s\n",palabra);
				printf("Palabra descifrada : ");
		        for(i=0;i<100;i++){
				if(palabra[i]!=0){
					longitudD=palabra[i]-clave_dec;
					if(longitudD<97){
						longitudD=longitudD+26;
					}
				}else{
					longitudD=0;	
				}
					printf("%c",longitudD);
					almacenamiento_codigos[y][i]=palabra[i];
					almacenamiento_decodificadas[y][i]=longitudD;
				}
				y++;
				system("pause");
				system("cls");
	        	break;
	    	}
	        case '3':{
	        	printf("A continuacion te daremos la palabra recuperada...\n");
	        	system("pause");
				system("cls");
				printf("\nLa palabra Recuperada es: %s\n",palabra);
				fflush(stdin);
	        	break;
			}
			case '0':{
				printf("Almacenamiento Codificacion.\n");
				printf("Palabras Ingresadas:\n");
				for(filas=0;filas<15;filas++){
					printf("+ %d ",filas+1);
					for(columnas=0;columnas<100;columnas++){
						printf("%c",almacenamiento_palabras[filas][columnas]);
					}
					printf("\n");
				}
				printf("Palabras Codificadas:\n");
				for(filas=0;filas<15;filas++){
					printf("+ %d ",filas+1);
					for(columnas=0;columnas<100;columnas++){
						printf("%c",almacenamiento_codificadas[filas][columnas]);
					}
				printf("\n");
				}
			printf("Almacenamiento Decodificacion.\n");
			printf("Palabras en Codigo:\n");
			for(filas=0;filas<15;filas++){
				printf("+ %d ",filas+1);
				for(columnas=0;columnas<100;columnas++){
					printf("%c",almacenamiento_codigos[filas][columnas]);
				}
				printf("\n");
			}
			printf("Palabras Decodificadas:\n");
			for(filas=0;filas<15;filas++){
				printf("+ %d ",filas+1);
				for(columnas=0;columnas<100;columnas++){
					printf("%c",almacenamiento_decodificadas[filas][columnas]);
				}
				printf("\n");
			}
				printf("\tGracias por utilizar SHIZAARATOR 3000+.\n");
				break;
			}
			default:{
				printf("Esta opcion no es viable. Intente de nuevo.\n");
				break;
			}
    	}
	}while(menu!='0');
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+\tMADE BY :\t\t\t\t+\n");
	printf("+\tAlvarez Garcia Elian Alexander.  \t+\n");
	printf("+\tCalderon Davila Juan Carlos.     \t+\n");
	printf("+\tCatarino Corralco Carlos Alberto.\t+\n");
	printf("+\tGamboa del Angel Alan Eduardo.   \t+\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
	system("pause");
    return 0;
}
