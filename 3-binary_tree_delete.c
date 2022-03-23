#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: all binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* Delete Left sub-tree */
	binary_tree_delete(tree->left);
	/* Delete right sub-tree */
	binary_tree_delete(tree->right);

	/* At last, delete root node */
	printf("Deleteing Node : %d\n", tree->n);
	free(tree);
}
