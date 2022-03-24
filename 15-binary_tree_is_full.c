#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: binary tree
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree->left == NULL || tree->right == NULL || tree->parent == NULL)
		return (0);
	else
		return (1);
}
