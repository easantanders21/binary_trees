#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least a child
 *
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		count++;
	if (tree->left != NULL && tree->right == NULL)
		count += 1;
	if (tree->left == NULL && tree->right != NULL)
		count += 1;
	count += (binary_tree_nodes(tree->left) +
			  binary_tree_nodes(tree->right));
	return (count);
}
