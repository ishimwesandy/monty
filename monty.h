#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct backbones - variables -args, file, line content
 * @arg: value
 * @file: pointers to monty files
 * @content:  content
 * @line_fi: flag change stack <-> queue
 * Description: carry value through  application
 */
typedef struct backbones
{
    char *arg;
    FILE *file;
    char *content;
    int line_fi;
}  backbones_t;
extern backbones_t bus;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_num);
} instruction_t;



char *_realloc(char *ptr, unsigned int old_s, unsigned int new_s);
ssize_t getstdin(char **lptr, int file);
char  *clean_line(char *content);
void m_push(stack_t **head, unsigned int num);
void m_pall(stack_t **head, unsigned int num);
void m_pint(stack_t **head, unsigned int num);
int execute(char *content, stack_t **head, unsigned int count, FILE *file);
void free_stack(stack_t *head);
void m_pop(stack_t **head, unsigned  int count);
void m_swap(stack_t **head, unsigned int count);
void m_add(stack_t **head, unsigned int count);
void m_nop(stack_t **head, unsigned int count);
void m_sub(stack_t **head, unsigned int count);
void m_div(stack_t **head, unsigned int count);
void m_mul(stack_t **head, unsigned int count);
void m_mod(stack_t **head, unsigned int count);
void m_pchar(stack_t **head, unsigned int count);
void m_pstr(stack_t **head, unsigned int count);
void m_rotl(stack_t **head, unsigned int count);
void m_rotr(stack_t **head, __attribute__((unused)) unsigned int count);
void addnodes(stack_t **head, int n);
void addqueues(stack_t **head, int n);
void m_queue(stack_t **head, unsigned int count);
void m_stack(stack_t **head, unsigned int count);
#endif
