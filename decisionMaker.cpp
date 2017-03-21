#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
	int key_value;
	node *North;
	node *South;
	node *West;
	node *East;
};
class pathTree
{
    public:
        pathTree();
	{
		root = NULL;
	}
        ~pathTree();
	{
		destroy_tree();
	}

        void insert(int key);
	{
		if( key < leaf->key_value )
		{
			
		}
	}
        node *search(int key);
        void destroy_tree();

    private:
        void destroy_tree(node *leaf);
	{
		if( leaf != NULL )
		{
			destroy_tree(leaf->North);
			destroy_tree(leaf->South);
			destroy_tree(leaf->West);
			destroy_tree(leaf->East);
			delete leaf;
		}
	}
        void insert(int key, node *leaf);
	{
	}
        node *search(int key, node *leaf);
        
        node *root;
};
void decisionMaker()
{
	
}
