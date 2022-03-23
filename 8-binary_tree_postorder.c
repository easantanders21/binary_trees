#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - binary tree using post-order traversal
 *
 * @tree: binary tree
 * @func: funtion print
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*Left sub-tree */
	binary_tree_postorder(tree->left, func);
	/*right sub-tree */
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
