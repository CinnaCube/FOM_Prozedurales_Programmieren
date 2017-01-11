#define _USE_MATH_DEFINES // for C
#include "math.h"

float umfang(int iRadius) {
	return M_PI * 2 * iRadius;
}
float flaeche(int iRadius) {
	return M_PI * pow(iRadius, 2);
}