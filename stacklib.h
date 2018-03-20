#include <stdio.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <unistd.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <sys/sem.h>

#ifndef _MYLIB_H_
#define _MYLIB_H_

struct stack_desc{
  key_t stkey;
  int data_size;
  int stack_size;
  int top;
  int ele_no;
  bool free;
};
typedef struct stack_desc stack_desc;

extern void shstackget(key_t mykey,int data_size,int stack_size);
extern void shstackpush(key_t key,int ele);
extern void shstackpop(key_t key);
extern void shstackrm(key_t key);

#endif
