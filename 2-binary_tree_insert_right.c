#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child
 *
 * @parent: parent
 * @value: data
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;
	binary_tree_t *parent_n = parent;
	binary_tree_t *tempChild = NULL;

	tempNode = malloc(sizeof(binary_tree_t));
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	if (parent_n->right == NULL)
	{
		parent_n->right = tempNode;
		tempNode->parent = parent_n;
		return (parent_n);
	}
	else
	{
		tempChild = parent_n->right;
		parent_n->right = tempNode;
		tempNode->parent = parent_n;
		tempNode->right = tempChild;
		tempChild->parent = tempNode;
		return (parent_n);
	}
}
