#ifndef GERBV_DBG
#define GERBV_DBG


#include <stdio.h>


#define DBG									\
	{	fprintf(stderr, "%s:%d %s\n", __FILE__, __LINE__, __func__);	\
		fflush(stderr);							\
	}


#endif

