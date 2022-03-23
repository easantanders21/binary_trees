#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int sum1 = 0, sum2 = 0, total = 0;

	if (tree == NULL)
		return (0);
	/*Left sub-tree */
	sum1 = binary_tree_leaves(tree->left) + 1;
	/*right sub-tree */
	sum2 = binary_tree_leaves(tree->right) + 1;

	total = suma_int(sum1, sum2);
	return (total / 2);
}
/**
 * sum_int - sum two integers
 *
 * @x: sum 1
 * @y: sum 2
 * Return: sum value
 */
int suma_int(int x, int y)
{
	return (x + y);
}
