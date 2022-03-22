#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Function include a new node
 * @parent: new node's parent
 * @value: new node's value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_n = parent;
	binary_tree_t *child = NULL;

	if (parent == NULL)
	{
		parent_n = malloc(sizeof(binary_tree_t));
		if (parent_n == NULL)
			return (NULL);
		parent_n->parent = NULL;
		parent_n->n = value;
		parent_n->left = NULL;
		parent_n->right = NULL;
		return (parent_n);
	}
	else
	{
		child = malloc(sizeof(binary_tree_t));
		if (child == NULL)
			return (NULL);
		child->parent = parent_n;
		child->n = value;
		child->left = NULL;
		child->right = NULL;
		return (child);
	}
}
