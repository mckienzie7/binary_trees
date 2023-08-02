#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		int ldepth = binary_tree_height(tree->left);
		int rdepth = binary_tree_height(tree->right);



		if (ldepth > rdepth)
		{
			return (ldepth + 1);
		}
		else
			return (rdepth + 1);
	}
}
