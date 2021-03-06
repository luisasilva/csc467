/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FLOAT_T = 258,
     INT_T = 259,
     BOOL_T = 260,
     CONST = 261,
     FALSE_C = 262,
     TRUE_C = 263,
     FUNC1 = 264,
     FUNC2 = 265,
     FUNC3 = 266,
     IF = 267,
     ELSE = 268,
     AND = 269,
     OR = 270,
     NEQ = 271,
     EQ = 272,
     LEQ = 273,
     GEQ = 274,
     VEC_T = 275,
     BVEC_T = 276,
     IVEC_T = 277,
     FLOAT_C = 278,
     INT_C = 279,
     ID = 280,
     UMINUS = 281,
     WITHOUT_ELSE = 282,
     WITH_ELSE = 283
   };
#endif
/* Tokens.  */
#define FLOAT_T 258
#define INT_T 259
#define BOOL_T 260
#define CONST 261
#define FALSE_C 262
#define TRUE_C 263
#define FUNC1 264
#define FUNC2 265
#define FUNC3 266
#define IF 267
#define ELSE 268
#define AND 269
#define OR 270
#define NEQ 271
#define EQ 272
#define LEQ 273
#define GEQ 274
#define VEC_T 275
#define BVEC_T 276
#define IVEC_T 277
#define FLOAT_C 278
#define INT_C 279
#define ID 280
#define UMINUS 281
#define WITHOUT_ELSE 282
#define WITH_ELSE 283




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 63 "parser.y"

  int as_int;
  int as_vec;
  float as_float;
  char *as_str;
  int as_func;
  node *as_ast;



/* Line 2068 of yacc.c  */
#line 117 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


