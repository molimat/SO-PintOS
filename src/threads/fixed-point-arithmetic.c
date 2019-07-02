#include "threads/fixed-point-arithmetic.h"

fpa_t int_to_fixed(int n)
{
    return (fpa_t)(n * (1 << FPA_BIT_SHIFT));
}

int fixed_to_int(fpa_t x)
{
    return ((int)x / (int)(1 << FPA_BIT_SHIFT));
}

// Division by 2 is the same than right shift 1 bit
int fpa_round(fpa_t x)
{
    return x >= 0 ? ((x + (1 << (FPA_BIT_SHIFT - 1))) >> FPA_BIT_SHIFT) : ((x - (1 << (FPA_BIT_SHIFT - 1))) >> FPA_BIT_SHIFT);
}

fpa_t fpa_add(fpa_t a, fpa_t b)
{
    return a + b;
}

fpa_t fpa_sub(fpa_t a, fpa_t b)
{
    return a - b;
}

fpa_t fpa_int_add(fpa_t a, int b)
{
    return a + (fpa_t)(b * (1 << FPA_BIT_SHIFT));
}

fpa_t fpa_int_sub(fpa_t a, int b)
{
    return a - (fpa_t)(b * (1 << FPA_BIT_SHIFT));
}

fpa_t fpa_mult(fpa_t a, fpa_t b)
{
    return a * b;
}

fpa_t fpa_int_mult(fpa_t a, int b)
{
    return a * (fpa_t)(b * (1 << FPA_BIT_SHIFT));
}

fpa_t fpa_div(fpa_t a, fpa_t b)
{
    return a / b;
}

fpa_t fpa_int_div(fpa_t a, int b)
{
    return a / (fpa_t)(b * (1 << FPA_BIT_SHIFT));
}
