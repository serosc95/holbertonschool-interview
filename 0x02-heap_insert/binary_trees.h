#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;
typedef struct binary_tree_s heap_t;

/**
 * struct empty_space_s - Struct to find the empty space
 *
 * @deep: Deep of the node
 * @node: Node to find place
 */
typedef struct empty_space_s
{
	int deep;
	heap_t *node;
} empty_space_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
heap_t *heap_insert(heap_t **root, int value);

heap_t *free_space(heap_t *parent);
heap_t *swap_nodes(heap_t *node);
empty_space_t find_space(heap_t *node);

#endif /* _BINARY_TREES_H_ */
