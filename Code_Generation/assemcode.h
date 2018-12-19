#ifndef _ASSEMCODE_H_
#define _ASSEMCODE_H_

#include <ctype.h>
#include "three.h"
//bool print_int_asm;

FILE * asm_File;

void iterate_inst(tnode *t,temp_stack *t_stack);
void tran_tree(tnode *t, temp_stack *t_stack);
void node_asm_code(instr *t_instr,tnode *t,temp_stack *t_stack);
int assign_temp_stack(char *name,temp_stack *t_stack);
int  check_int(char *c);
void print_instruction_to_file(instr *in);
void printBinary_opq(instr *t);

#endif