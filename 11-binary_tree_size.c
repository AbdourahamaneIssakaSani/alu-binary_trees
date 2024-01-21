#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure
* Return: size of the tree, or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* if tree has no children, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if tree has children */
    /* return 1 + size of left subtree + size of right subtree */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
