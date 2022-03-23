#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	int sum1 = 0, sum2 = 0, total = 0;
	if (tree == NULL)
		return (0);
	/*Left sub-tree */
	sum1 = binary_tree_height(tree->left) + 1;
	/*right sub-tree */
	sum1 = binary_tree_height(tree->right) + 1;
	total = max(sum1, sum2);
	if (tree->left == NULL && tree->right == NULL)
		total = 0;
	return (total);
}
/**
 * Find maximum between two numbers.
 */
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}