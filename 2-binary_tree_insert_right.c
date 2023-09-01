#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: A pointer to the node to insert the right-child in
* @value: The value to store in the new node
* Return: A pointer to the created node
*	or NULL on failure or if parent is NULL
* Description: If parent already has a right-child,
*		the new node must take its place,
*		and the old right-child must be set as the right-child of the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
