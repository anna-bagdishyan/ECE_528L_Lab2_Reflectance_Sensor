/**
 * @file Print_Binary.c
 * @brief Source code for Print_Binary function implementation.
 *
 * This file contains the function implementation for the Print_Binary function,
 * which takes in a uint8_t value and prints the value in binary format.
 * It relies on the EUSCI_A0_UART driver.
 *
 * @author Anna Bagdishyan
 *
 */

#include "../inc/Print_Binary.h"

void Print_Binary(uint8_t value_to_convert)
{
    printf("\nBinary: ");
        for (int i = 7; i >= 0; i--)
        {
        int binary = (value_to_convert >> i) & 1;
            printf("%d", binary);
        }
}
