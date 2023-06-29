#ifndef TIMER_H
#define TIMER_H
#include <stdint.h>


/**
 * @brief Inicializa el Timer 4...
 */
void TIM4_init(void);

/**
 * @brief Captura el tiempo desde que hay un cambio y devuelve la distancia 
 * @param time
 */
uint32_t capture_time(void); 

uint32_t compare(uint32_t);

#endif