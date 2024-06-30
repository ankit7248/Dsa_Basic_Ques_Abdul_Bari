// #include <bits/stdc++.h>
// using namespace std;
// #include<queue>

// class Node
// {
// public:
//   int data;
//   Node *left;
//   Node *right;

//   Node(int d)
//   {
//     this->data = d;
//     this->left = NULL;
//     this->right = NULL;
//   }
// };

// Node *buildtree(Node *root)
// {
//   cout << "enter data";
//   int data;
//   cin >> data;
//   root = new Node(data);

//   if (data == -1)
//   {
//     return NULL;
//   }

//   cout << "enter data for inserting in left of " << data << endl;
//   root->left = buildtree(root->left);
//   cout << "enter data for inserting in right of " << data << endl;
//   root->right = buildtree(root->right);
//   return root;

//   void levelOrderTraversalNode(Node * root)
//   {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty)
//     {
//       Node *temp = q.front();
//       cout << temp->data << " ";
//       q.pop();

//       if (temp == NULL)
//       {
//         cout << endl;
//       }
//       if (!q.empty())
//       {
//         q.push(NULL);
//       }
//     }
//     if (temp->left)
//     {
//       q.push(temp->left);
//     }
//     else
//     {
//       q.push(temp->right);
//     }
//   }
// }

// int main()
// {
//   Node *root = NULL;

//   // creating a tree
//   root = buildtree(root);

//   // levelOrder
//   cout << "Printing the level order traversal output" << endl;
//   levelOrderTraversal(root);

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#include <queue>

class Node
{

public:
  int data;
  Node *left;
  Node *right;
};
class queue
{

public:
  int front;
  int rear;
  int size;
  Node **q;

  queue()
  {
    front = -1;
    rear = -1;
    size = 10;
    q = new Node [size];
  }
  queue(int size)
  {
    front = rear = -1;
    this->size = size;
    q = new Node [this->size];
  }

  void enqueue(Node *x)
  {
    if ((rear + 1) % size == front)
    {
      cout << "full";
    }

    rear = (rear + 1) % size;
    q[rear] = x;
  }
  Node* dequeue()
  {
    Node* val = NULL;
    if (front == rear)
    {
      cout << "empty";
    }
    front = (front + 1) % size;
    val->data = front;

    return val;
  }
  int empty()
  {
    return front == rear;
  }
  void display()
  {
    for (int i = front+1; i < rear; i++)
    {
      cout<< q[i] <<endl;
    }
    
  }
};

class tree
{
  public:
  Node* root;
  tree(){root = NULL};
  void Createtree();
  void preorder(Node *p);
  void postorder(Node *p);
  void Inorder(Node *p);
  void Levelorder(Node *p);
  void height(Node *root);

};

void tree ::  Createtree()
  {
    Node *p,*t;
    int y;
    queue q(100);
    cout<<"enter root value";
    cin>>y;
    root = new Node;
    root->data = y;
    root->left=root->right = NULL;
    q.enqueue(root);

     while (q.empty!=0)
     {
        p = q.dequeue();
        cout<<"enter left child"<<p->data;
        cin >> y;
        if(y!=-1)
        {
          t = new Node;
          t->data = y;
          t->left=t->right = NULL;
          p->left = t;
          q.enqueue(t);
        }
         cout<<"enter right child of"<<p->data;
         cin>>y;
        if(y!=-1)
        {
          t = new Node;
          t->data = y;
          t->left=t->right = NULL;
          p->right = t;
          q.enqueue(t);
        }
     }
  }

int main()
{};
