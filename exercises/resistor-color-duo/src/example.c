#include "resistor_color_duo.h"

uint16_t colorCode(resistor_band_t colors[])
{
   return (uint16_t) (colors[0] * 10 + colors[1]);
}
