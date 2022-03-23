#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - binary tree using in-order traversal
 *
 * @tree: binary tree
 * @func: funtion print
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*Left sub-tree */
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	/*right sub-tree */
	binary_tree_inorder(tree->right, func);
}
