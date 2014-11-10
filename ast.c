#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

#include "ast.h"
#include "common.h"
#include "parser.tab.h"

#define DEBUG_PRINT_TREE 0

node *ast = NULL;

node *ast_allocate(node_kind kind, ...) {
  va_list args;

  // make the node
  node *ast = (node *) malloc(sizeof(node));
  memset(ast, 0, sizeof *ast);
  ast->kind = kind;

  va_start(args, kind); 

  switch(kind) {
  
  case SCOPE_NODE:
    ast->scope_expr.left = va_arg(args, node *);
    ast->scope_expr.right = va_arg(args, node *);
    break;

  case BINARY_EXPRESSION_NODE:
    ast->binary_expr.op = va_arg(args, int);
    ast->binary_expr.left = va_arg(args, node *);
    ast->binary_expr.right = va_arg(args, node *);
    break;

  case UNARY_EXPRESSION_NODE:
    ast->unary_expr.op = va_arg(args, int);
    ast->unary_expr.right = va_arg(args, node *);
    break;

  case INT_NODE:
    ast->int_expr.val = va_arg(args, int);
    break;

  case FLOAT_NODE:
    ast->float_expr.val = va_arg(args, double);
    break;

  case IDENT_NODE:
    ast->id_expr.id = va_arg(args, char*);
    break;

  case VAR_NODE:
    ast->var_expr.id = va_arg(args, char*);
    ast->var_expr.array_pos = va_arg(args, int);
    break;

  case DECLARATION_NODE:
    ast->declaration_expr.type = va_arg(args, node *);
    ast->declaration_expr.id = va_arg(args, char*);
    ast->declaration_expr.right = va_arg(args, node *);
    ast->declaration_expr.constant = va_arg(args, int);
    break;
    

  default: break;
  }

  va_end(args);

  return ast;
}

void ast_free(node *ast) {

}

void ast_print(node * ast) {
  if(dumpAST){
    //print dat shet
  }
}
