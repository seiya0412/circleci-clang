#pragma once

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

bool allocate_queue(queue_t q, uint16_t size);
void enqueue();
void dequeue();