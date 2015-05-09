//prueba

#include <stdio.h>

void mostrarMensaje(char*);

int main(){
	char buffer[512];

	mostrarMensaje("Ingrese el texto:\n");
	scanf("%s", buffer);
	printf("El texto ingresado fue: '%s' \n",buffer);




return 0;
}

void mostrarMensaje(char* mensaje){
	printf("%s", mensaje);
}
