#include "binary_trees.h"

/**
 * binary_tree_sibling - Entry point
 * @node: binary_tree parameter
 * Return: the sibling of the node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->left || !node->parent->right)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
