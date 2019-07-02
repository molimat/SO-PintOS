#ifndef FIXED_POINT_ARITHMETIC_H
#define FIXED_POINT_ARITHMETIC_H
/* Fixed Point Arithmetic identifier type.
   You can redefine this to whatever type you like. */
typedef int fpa_t;

#define FPA_BIT_SHIFT 14

fpa_t int_to_fixed(int n);

int fixed_to_int(fpa_t x);

int fpa_round(fpa_t x);

fpa_t fpa_add(fpa_t a, fpa_t b);

fpa_t fpa_sub(fpa_t a, fpa_t b);

fpa_t fpa_int_add(fpa_t a, int b);

fpa_t fpa_int_sub(fpa_t a, int b);

fpa_t fpa_mult(fpa_t a, fpa_t b);

fpa_t fpa_int_mult(fpa_t a, int b);

fpa_t fpa_div(fpa_t a, fpa_t b);

fpa_t fpa_int_div(fpa_t a, int b);

#endif /*FIXED_POINT_ARITHMETIC_H*/
