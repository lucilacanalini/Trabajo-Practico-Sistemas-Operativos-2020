/*
 * configGameBoy.c
 *
 *  Created on: 15 may. 2020
 *      Author: utnso
 */

#include "configGameCard.h"

#include <commons/string.h>

void leer_config(void)
{
	configGameCard = config_create("/home/utnso/Documentos/Delibird/GameCard/tp-2020-1c-wRAPPERS/GameCard/GameCard.config");

	if(configGameCard == NULL){
		printf("No se pudo leer el archivo de configuración de la GameCard.");
		exit(2);
	}
}

/*
char* obtener_puerto_broker(void){
	int puerto_b;
	puerto_b = config_get_int_value(configGameBoy, "PUERTO_BROKER");
	char* puerto_en_string = string_itoa(puerto_b);
	return puerto_en_string;
}

char* obtener_ip_broker(void){
	char* ip_b;
	ip_b = config_get_string_value(configGameBoy, "IP_BROKER");
	return ip_b;
}

char* obtener_puerto_team(void){
	int puerto_t;
	puerto_t = config_get_int_value(configGameBoy, "PUERTO_TEAM");
	char* puerto_en_string = string_itoa(puerto_t);
	return puerto_en_string;
}

char* obtener_ip_team(void){
	char* ip_t;
	ip_t = config_get_string_value(configGameBoy, "IP_TEAM");
	return ip_t;
}

char* obtener_puerto_gamecard(void){
	int puerto_g;
	puerto_g = config_get_int_value(configGameBoy, "PUERTO_GAMECARD");
	char* puerto_en_string = string_itoa(puerto_g);
	return puerto_en_string;
}

char* obtener_ip_gamecard(void){
	char* ip_g;
	ip_g = config_get_string_value(configGameBoy, "IP_GAMECARD");
	return ip_g;
}

char* obtener_log_file(void){
	char* ruta_log;
	ruta_log = config_get_string_value(configGameBoy, "LOG_FILE");
	return ruta_log;

*/

char* obtener_punto_montaje(){

	char* punto_montaje;
	punto_montaje = config_get_string_value(configGameCard, "PUNTO_MONTAJE");
	return punto_montaje;

}

char* block_size(){

	char* block_size;
	block_size = config_get_string_value(configGameCard, "BLOCK_SIZE");
	return block_size;

}