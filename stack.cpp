//
// Created by kopyt on 09.06.2024.
//

#include "stack.h"
#define STACK_SIZE 5
int stack_table[STACK_SIZE] = { 0 };
int stack_index = 0;

int isStackEmpty(void)
{
    return (stack_index == 0) ? 1 : 0;
}

int isStackFull(void)
{
    return (stack_index == (STACK_SIZE)) ? 1 : 0;
}

int Pop(void)
{
    if (!isStackEmpty())
    {
        stack_index--;
        return stack_table[stack_index];
    }

    return stack_table[0];
}

int Top(void)
{
    if (!isStackEmpty())
    {
        return stack_table[stack_index - 1];
    }

    return stack_table[0];
}

void Push(int val)
{
    if (!isStackFull())
    {
        stack_table[stack_index] = val;
        stack_index++;
    }
}