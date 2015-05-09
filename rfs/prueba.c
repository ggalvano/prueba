//prueba

#include <stdio.h>

void mostrarMensaje(char*);

int main(){
	char buffer[80];

	mostrarMensaje("ingrese su texto:\n");
	scanf("%s", buffer);
	printf("El texto ingresado:",buffer);




return 0;
}

void mostrarMensaje(char* mensaje){
	printf("%s", mensaje);
}
