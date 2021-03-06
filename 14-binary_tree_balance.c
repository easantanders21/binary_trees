#include <stdlib.h>
#include "binary_trees.h"
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - binary tree using post-order traversal
 *
 * @tree: binary tree
 * Return: That measures the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int sum1 = 0, sum2 = 0, total = 0;

	if (tree == NULL)
		return (0);
	/*Left sub-tree */
	sum1 = binary_tree_height(tree->left) + 1;
	/*right sub-tree */
	sum2 = binary_tree_height(tree->right) + 1;
	total = max(sum1, sum2);
	return (total);
}
/**
 * max - binary tree using post-order traversal
 *
 * @num1: binary tree
 * @num2: binary tree
 * Return: max between num1 and num2
 */
int max(int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2);
}
/**
 * binary_tree_balance - counts balance of a tree
 *
 * @tree: binary tree
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int sum1 = 0, sum2 = 0, total = 0;

	if (tree == NULL)
		return (0);
	sum1 = binary_tree_height(tree->left);
	sum2 = binary_tree_height(tree->right);
	total = sum1 - sum2;
	return (total);
}
