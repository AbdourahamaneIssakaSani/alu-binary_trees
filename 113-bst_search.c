#include "binary_trees.h"

/**
* bst_search - searches for a value in a Binary Search Tree
* @tree: pointer to the root node of the BST to search
* @value: value to search in the tree
* Return: pointer to the node containing a value equals to value
* If tree is NULL or if nothing is found, return NULL
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	/* if tree is NULL or if nothing is found, return NULL */
	if (tree == NULL)
		return (NULL);

	/* if value is less than current node, search left subtree */
	if (value < tree->n)
		return (bst_search(tree->left, value));

	/* if value is greater than current node, search right subtree */
	if (value > tree->n)
		return (bst_search(tree->right, value));

	/* if value is equal to current node, return current node */
	return ((bst_t *)tree);
}
