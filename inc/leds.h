/************************************************************************************************
Copyright (c) 2025, Esteban Volentini <evolentini@herrera.unt.edu.ar>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef LEDS_H
#define LEDS_H

/** @file leds.h
 ** @brief Declaraciones de la biblioteca para el control de LEDs
 **/

/* === Headers files inclusions ================================================================ */

#include <stdint.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Función para inicializar la biblioteca de leds
 *
 * @note Esta funcion debe ser llamada antes de utilizar cualquier otra función de la biblioteca
 *
 * @param direccion Puntero al puerto GPIO que controla los leds
 */
void LedsInit(uint16_t * direccion);

/**
 * @brief Funcion para prender un led individual
 *
 * @param led Numero de led que se desea prender (1 a 16)
 */
void LedsTurnOnSingle(uint8_t led);

/**
 * @brief Funcion para apagar un led individual
 *
 * @param led Numero de led que se desea apagar (1 a 16)
 */
void LedsTurnOffSingle(uint8_t led);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* LEDS_H */
