#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - find depth by node
 *
 * @tree: binary tree
 * Return: depth node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int suma = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	suma = binary_tree_depth(tree->parent) + 1;

	return (suma);
}
