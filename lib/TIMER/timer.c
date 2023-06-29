#include "timer.h"
#include <stdint.h>
#include <stm32f1xx.h>


void TIM4_init(void){ //Habilitar Timer TIM 4

    RCC->APB1ENR |= RCC_APB1ENR_TIM4EN;
    
}
uint32_t capture_time(void){};
    //cuenta el tiempo entre flanco ascendente y ultimo descendente. 
    //si el pulso es de 36ms es poorque no detecto objeto. Lo normal es de 100us a 18ms
    //Distancia minima 2cm y maxima 4mts


uint32_t compare(uint32_t delta_tiempo){
    uint32_t distancia;             //comparo lo medido en capture_time y lo comparo contra los ciclos de 10 us

    distancia= delta_tiempo/58;
    
    return distancia;       //distancia en centimetros
};
