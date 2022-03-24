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
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}
