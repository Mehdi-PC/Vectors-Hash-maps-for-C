#include<stdlib.h>
#pragma once

/* GNU C 23 
 * C LIB
 * TYPE DEFINES & FUNCTIONS
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

int intv_add(intv* to, int this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(int));
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
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

int longv_add(longv* to, long this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}	
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc-1; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(long));
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
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

int floatv_add(floatv* to, float this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(float));
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
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

int shortv_add(shortv* to, short this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(short));
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
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

int llongv_add(llongv* to, long long this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(long long));
		for(int i = to->itemc-1; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
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

int ldoublev_add(ldoublev* to, long double this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(long double));
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
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

int charv_add(charv* to, char this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(char));
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
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

int doublev_add(doublev* to, double this, int count)
{
	if(to->itemc < to->max && count == to->itemc)
	{
		to->data[to->itemc] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc < to->max && count != to->itemc)
	{
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		return 0;
	}
	else if(to->itemc == to->max && count != to->itemc)
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(double));
		for(int i = to->itemc; i > count; i--)
		{
			to->data[i] = to->data[i-1];
		}
		to->data[count] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
	else
	{
		to->data = realloc(to->data, to->max * 2 * sizeof(double));
		to->data[to->itemc] = this;
		to->itemc += 1;
		to->max *= 2;
		return to->max * 2;
	}
}


void intv_rm(intv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

void longv_rm(longv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

void llongv_rm(llongv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

void floatv_rm(floatv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

void doublev_rm(doublev* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

void ldoublev_rm(ldoublev* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

void shortv_rm(shortv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}

void charv_rm(charv* from, int this)
{
  from->data[this] = 0;
  from->itemc -= 1;
}
