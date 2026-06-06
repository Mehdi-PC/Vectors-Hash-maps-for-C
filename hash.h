#pragma once

/* GNU C 23
 * C LIB
 * TYPE DEFINES
 * KEY VALUE PAIRS LIB
 */

typedef struct{
	char* key;
	int val;
} inth;

typedef struct{
	char* key;
	char val;
} charh;

typedef struct{
	char* key;
	char* val;
} strh;

typedef struct{
	char* key;
	long val;
} longh;

typedef struct{
	char* key;
	float val;
} floath;

typedef struct{
	char* key;
	double val;
} doubleh;

typedef struct{
	char* key;
	long long val;
} llongh;

typedef struct{
	char* key;
	short val;
} shorth;

typedef struct{
	char* key;
	long double val;
} ldoubleh;
