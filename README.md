# C - Binary Trees

## Description

This project is part of the Holberton School curriculum.

The goal is to learn how to manipulate **binary trees** in C by implementing a collection of functions that create, traverse, analyze, and manage different types of binary trees.

Throughout the project, the following concepts are explored:

* Binary Trees
* Binary Search Trees (BST)
* AVL Trees
* Max Binary Heaps
* Tree Traversal
* Tree Height, Depth and Size
* Tree Properties (Complete, Full, Perfect, Balanced)

---

## Learning Objectives

After completing this project, we should be able to:

* Understand how binary trees work.
* Differentiate a Binary Tree from a Binary Search Tree.
* Traverse a tree using different algorithms.
* Calculate tree properties such as height, depth and size.
* Manipulate different tree-based data structures.

---

## Project Structure

```text
.
├── README.md
├── binary_trees.h
└── *.c
```

---

## Data Structure

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_tree
```

---

## Requirements

* Ubuntu 20.04 LTS
* Betty coding style
* No global variables
* Maximum of 5 functions per file
* Header file: `binary_trees.h`

---

## Authors

* Thomas
