#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *
 * @tree: binary tree
 * @func: call funtion to print
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	/*Left sub-tree */
	binary_tree_preorder(tree->left, func);
	/*right sub-tree */
	binary_tree_preorder(tree->right, func);
	if (tree == NULL || func == NULL)
		return;
}
