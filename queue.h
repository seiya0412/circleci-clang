#pragma once

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


typedef struct{
    uint16_t size;
    uint16_t residual;
    uint16_t head;
    uint16_t tail;
    uint8_t *buff;
} queue_struct;
typedef queue_struct* queue_t;

queue_t allocate_queue(int32_t size);
bool free_queue(queue_t q);
void enqueue();
void dequeue();
bool is_empty();
