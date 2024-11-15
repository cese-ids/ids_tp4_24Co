
#ifndef GPIO_H
#define GPIO_H

/** @file gpio.h
 ** @brief Definición de la función principal del programa
 **/

/* === Headers files inclusions ================================================================ */

#include <stdint.h>
#include <stdbool.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

typedef struct gpio_s * gpio_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

gpio_t gpioCreate(uint8_t port, uint8_t bit);

void gpioSetOutput(gpio_t gpio, bool output);

void gpioSetState(gpio_t gpio, bool state);

bool gpioGetState(gpio_t gpio);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H */
