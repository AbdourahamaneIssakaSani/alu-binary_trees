#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure
* Return: height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* if tree has no children, return 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* if tree has children, return 1 + height of tallest subtree */
	return (1 + max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)));
}