#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure
* Return: balance factor of the tree, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	/* if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* if tree has no children, return 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* if tree has children */
	/* return height of left subtree - height of right subtree */
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

