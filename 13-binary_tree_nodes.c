#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the node with at least one child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the node's with one children.
 *
 * Return: The number of node with at least one children.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		if (tree->left || tree->right )
		{
			node++;
		}
		else
		{
			node += binary_tree_nodes(tree->left);
			node += binary_tree_nodes(tree->right);
		}
	}
	return (node);
}
