#pragma once

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


typedef struct{
    int32_t size;
    int32_t residual;
    int32_t head;
    int32_t tail;
    uint8_t *buff;
} queue_struct;
typedef queue_struct* queue_t;

queue_t allocate_queue(int32_t size);
bool free_queue(queue_t q);
bool enqueue(queue_t q, uint8_t data);
bool dequeue(queue_t q, uint8_t *data);
bool is_empty(queue_t q);
bool is_full(queue_t q);
bool flush_queue(queue_t q);
