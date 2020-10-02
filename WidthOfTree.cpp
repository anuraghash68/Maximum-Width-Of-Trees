#include <bits/stdc++.h>
using namespace std;

int height(Node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lHeight = height(node->left);
        int rHeight = height(node->right);
        /* use the larger one */

        return (lHeight > rHeight)? (lHeight+1): (rHeight+1);
    }
}

/* Get width of a given level */
int getWidth(Node* root, int level)
{

    if(root == NULL)
        return 0;

    if(level == 1)
        return 1;

    else if (level > 1)
        return getWidth(root->left, level-1) +
               getWidth(root->right, level-1);
}


/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
    int maxWidth = 0;
    int width;
    int h = height(root);
    int i;

    /* Get width of each level and compare
       the width with maximum width so far */
    for(i=1; i<=h; i++)
    {
        width = getWidth(root, i);
        if(width > maxWidth)
            maxWidth = width;
    }

    return maxWidth;
}

int main() {
	
	
	
	return 0;
}