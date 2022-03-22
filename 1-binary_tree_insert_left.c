#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Function include a new node at left of parent
 * @parent: new node's parent
 * @value: new node's value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *tempNode;
    binary_tree_t *parent_n = parent;
    binary_tree_t *tempChild = NULL;
    
    tempNode = malloc(sizeof(binary_tree_t));
    tempNode->n = value;
    tempNode->left = NULL;
    tempNode->right = NULL;
    
    if (parent_n->left == NULL)
    {
      parent_n->left = tempNode;
      tempNode->parent = parent_n;
      return parent_n;
    } else
    {
      tempChild = parent_n->left;
      parent_n->left = tempNode;
      tempNode->parent = parent_n;
      tempNode->left = tempChild;
      tempChild->parent = tempNode;
      return parent_n;
    }
}