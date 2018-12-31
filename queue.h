#pragma once

#include <stdint.h>

typedef struct{
    char *buff;
    uint16_t size;
    uint16_t head;
    uint16_t tail;
} queue_t;

void generate_queue();
void enqueue();
void dequeue();