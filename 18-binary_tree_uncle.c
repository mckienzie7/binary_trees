#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the sibling of a
 *                       node in a binary tree.
 * @node: A pointer to the node to find the Uncle of.
 *
 * Return: If node is NULL or there is no Uncle - NULL.
 *         Otherwise - a pointer to the uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
