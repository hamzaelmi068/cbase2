#ifndef BASE_TO_BASE_H
#define BASE_TO_BASE_H

#include "types/string.h"

/**
 * Converts a number from one base to another
 * @param h The hex to convert
 * @param b1 The base to convert from
 * @param b2 The base to convert to
 * @return The converted string
 */
string base_to_base(string h, int b1, int b2);

#endif