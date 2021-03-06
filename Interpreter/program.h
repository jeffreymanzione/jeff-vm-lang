/*
 * program.h
 *
 *  Created on: Dec 21, 2015
 *      Author: Jeff
 */

#include <stdio.h>

#include "instruction.h"

#define INS_DELIM     " \t\n"
#define COMMENT_CH    ';'

#define ADVANCE(pch)    pch = strtok(NULL, INS_DELIM)

typedef struct _Word {
  char word[MAX_LINE_LEN];
  int word_len;
  int new_index;
} Word;

int load_instructions(FILE *in, InstructionMemory *ins_mem);
int load_bytecode(FILE *in, InstructionMemory *ins_mem);
