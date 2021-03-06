/*
Justin Canton, 1000017910
Samprit Raihan, 998138830
*/

#ifndef _CODEGEN_H
#define _CODEGEN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "common.h"
#include "ast.h"
#include "symbol.h"

extern FILE *filePointer;

extern int tempCount;
extern int param;
extern int argumentsCount;
extern int constructfunc;
extern int ifFlag;

int generateAssembly(node * ast);
#endif