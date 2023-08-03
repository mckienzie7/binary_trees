#include "binary_trees.h"

/**
 * binary_tree_sibling.c - Function that posses given node and return sibling.
 * @node: Pointer Node which we want to find sibling for.
 *
 * Return: The sibling node
 *              otherwise, 0.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	btsp prnt = node->parent;

	if (prnt == NULL || node == NULL)
	{
		return (NULL);
	}
	else
	{
		if (prnt->left == node)
		{
			return (prnt->right);
		}
		return (prnt->left);
	}
}
