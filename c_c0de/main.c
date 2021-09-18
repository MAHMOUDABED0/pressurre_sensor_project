/*
 ============================================================================
 number      : main.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
#include "driver.h"
#include "pressure_senseor.h"
#include "alarm.h"
#include "algorithm.h"


int main (){
	
	int p_value ; 
	extern int pressure_threshold ; 

	GPIO_INITIALIZATION();
	while (1)
	{
		p_value = getPressureVal() ; 
		if (p_value > pressure_threshold) {
			Alarm_ON () ; 
		}
		else if (p_value <= pressure_threshold) {
			Alarm_OFF () ; 
		}	
	}
}