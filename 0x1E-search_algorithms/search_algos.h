#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


/**
 * struct listint_s - singly linked list
 * @n: value
 * @index: the index of node
 * @next: the next node
*/
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


/**
 * struct skiplist_s - singly linked list with an express lane
 * @n: value
 * @index: the index of node
 * @next: the next node
 * @express: the express lane
*/
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
