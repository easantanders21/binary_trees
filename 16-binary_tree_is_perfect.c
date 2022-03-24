#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: binary tree
 * Return: 1 if the tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	else
		return (0);
}
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*Left sub-tree */
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
