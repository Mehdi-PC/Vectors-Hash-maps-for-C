#include<stdlib.h>
#pragma once

/* GNU C 23 
 * C LIB
 * TYPE DEFINES
 * VECTOR LIB 
 */

typedef struct{
	size_t itemc;
	size_t max;
	int* data;
} intv;

typedef struct{
	size_t itemc;
	size_t max;
	char* data;
} charv;

typedef struct{
	size_t itemc;
	size_t max;
	float* data;
} floatv;

typedef struct{
	size_t itemc;
	size_t max;
	double* data;
} doublev;

typedef struct{
	size_t itemc;
	size_t max;
	long* data;
} longv;

typedef struct{
	size_t itemc;
	size_t max;
	long long* data;
} llongv;

typedef struct{
	size_t itemc;
	size_t max;
	long double* data;
} ldoublev;

typedef struct{
	size_t itemc;
	size_t max;
	short* data;
} shortv;

int intv_add(intv* to, int this)
{
	if(to->itemc < to->max)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(int));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}

int longv_add(longv* to, int this)
{
	if(to->itemc < to->max)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(long));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}

int floatv_add(floatv* to, int this)
{
	if(to->itemc < to->max)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(float));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}

int shortv_add(shortv* to, int this)
{
	if(to->itemc < to->max)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(short));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}

int llongv_add(llongv* to, int this)
{
	if(to->itemc < to->max)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(long long));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}

int ldoublev_add(ldoublev* to, int this)
{
	if(to->itemc < to->max)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(long double));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}

int charv_add(charv* to, int this)
{
	if(to->itemc < to->max)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(char));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}

int intv_rm(intv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

int longv_rm(longv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

int llongv_rm(llongv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

int floatv_rm(floatv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

int doublev_rm(doublev* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

int ldoublev_rm(ldoublev* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

int shortv_rm(shortv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

int charv_rm(charv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}
