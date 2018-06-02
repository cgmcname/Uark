/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cgmcname
 *
 * Created on April 15, 2016, 1:57 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

struct Node {
int data;
Node * leftchild;
Node * rightchild;

};

Node* search(Node* t, int key, Node * & parent)
{
    if ( t != NULL)
    {
        if(key==t->data)
        return t;
        
        if(key<t->data)
        {
            parent = t;
            return search(t->leftchild, key, parent);
        }
      
        else
        {
            parent = t;
            return search(t->rightchild, key, parent);
        }
      
    }
        
        
    else return NULL;
}


Node * insert(Node* t, int key)
{
  
  if(t == NULL)
  {
    Node * NN = new Node;
    t = NN;
    t->data = key;
    t->leftchild = t ->rightchild = NULL;

  }
  else
  {
    if(key < t->data)
    { 
      t->leftchild = insert(t->leftchild, key);
    }
    else
    {
      t->rightchild = insert(t->rightchild, key);
    }
  }
  return t;
}

void inorder (Node * t)
{
    if(t != NULL)
    {
        inorder(t->leftchild);
        cout << t->data << endl;
        inorder(t->rightchild);

    }
}

/*
 * 
 */
int main(int argc, char** argv) 
{
    Node * point = NULL;
    Node * parent;
    
    point = insert(point, 20);
    parent = point;
    insert(point, 30);
    insert(point, 10);
    insert(point, 40);
    
    inorder(point);
    
   point = search(point, 10 , parent);
   
   
   cout << point << endl;
    
    return 0;
}

