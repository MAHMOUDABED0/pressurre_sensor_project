/*
 ============================================================================
 number      : pressure_senseor.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
#include "pressure_senseor.h"

int getPressureVal(){
	return (GPIOA_IDR & 0xFF);
}