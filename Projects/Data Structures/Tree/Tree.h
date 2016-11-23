#include<string>
template <class ItemType>
struct TreeNode;

template <class ItemType>
class Tree
{
public:
  Tree();
  void PutItem(ItemType item);
  void Print() const;
private:
  TreeNode<ItemType>* root;
};

template <class ItemType>
struct TreeNode
{
  ItemType info;
  TreeNode* left;
  TreeNode* right;
};
template <class ItemType>
Tree<ItemType>::Tree()
{
  root = NULL;
}
template <class ItemType>
void Insert(TreeNode<ItemType>*& tree, ItemType item)
{
  if (tree == NULL)
  {
    tree = new TreeNode<ItemType>;
    tree->right = NULL;
    tree->left = NULL;
    tree->info = item;
  }
  else if (item < tree->info)
    Insert(tree->left, item);
  else
    Insert(tree->right, item);
}
template <class ItemType>
void Tree<ItemType>::PutItem(ItemType item)
{
  Insert(root, item);
}
template <class ItemType>
void PrintTree(TreeNode<ItemType>*tree)
{
   if (tree != NULL)
  {
    PrintTree(tree->left);
    std::cout<<tree->info<<'\n';
    PrintTree(tree->right);
  }
}
template <class ItemType>
void Tree<ItemType>::Print() const
{
  PrintTree(root);
}
