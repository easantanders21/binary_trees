#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: parent or root
 * Return: integer if is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
