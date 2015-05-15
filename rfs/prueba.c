//prueba

#include <stdio.h>
#include <commons/config.h>
#include <commons/string.h>
#include <cspecs/cspec.h>
#include <stdlib.h>
#include <string.h>

void mostrarMensaje(char*);

int main(){
	//char buffer[512];
	char* ip;

	t_config* config;
	config = config_create("/home/utnso/Escritorio/git/prueba/resourses/config.cfg");
	ip = config_get_string_value(config,"IP");
	mostrarMensaje("Ingrese el texto:\n");
	//scanf("%s", buffer);
	printf("El texto ingresado fue: '%s' \n",ip);


return 0;
}

void mostrarMensaje(char* mensaje){
	printf("%s", mensaje);
}
