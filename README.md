# Data Structures

****Data structures**** are the fundamental building blocks of computer programming. They define how data is organized, stored, and manipulated within a program.

## ****Classification of Data Structure:****

1.****Linear Data Structure****: Data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure.  
****Example:**** Array, Stack, Queue, Linked List, etc.

2.****Non-Linear Data Structure:**** Data structures where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can't traverse all the elements in a single run only.  
****Examples:**** Trees and Graphs.

## ****Most Popular Data Structures:****

1. [Array](#array)
2. [Linked List](#linked-list)

## Array

1.**Array**:An array is a collection of data items stored at contiguous memory locations. The idea is to store multiple items of the same type together.

## Complexity Analysis of Operations on Array

### Time Complexity

| Operation             | Worst Case |
| --------------------- | ---------- |
| ****Traversal****     | O(N)       |
| ****Append****        | O(1)       |
| ****Insert****        | O(N)       |
| ****Max****           | O(N)       |
| ****Min****           | O(N)       |
| ****Sum****           | O(N)       |
| ****Avg****           | O(N)       |
| ****Reverse****       | O(N)       |
| ****Expand****        | O(N)       |
| ****Deletion****      | O(N)       |
| ****Linear Search**** | O(N)       |
| ****Binary Search**** | O(log n)   |
| ****Sort****          | O($n^2$)   |
---

## Linked List

### What is a Linked List?

A ****linked list**** is a linear data structure that consists of a series of nodes connected by pointers. Each node contains ****data**** and a ****reference**** to the next node in the list.

### Linked List vs Array

| Array                               | Linked List                       |
| ----------------------------------- | --------------------------------- |
| Stored in contiguous location       | Not stored in contiguous location |
| Fixed size                          | Dynamic size                      |
| Memory is allocated at compile time | Memory is allocated at run time   |
| Use less memory                     | Use more memory                   |
| Insertion/Deletion: Inefficient     | Insertion/Deletion: Efficient     |
| Elements can be accessed easily     | Elements can be accessed slowly   |

### Types of Linked List

1. Singly Linked List
2. Doubly Linked List
3. Circular Linked List
4. Doubly Circular Linked List

## Complexity Analysis of Operations on Linked List

### Time Complexity

| Operation                | Worst Case |
| ------------------------ | ---------- |
| ****Traversal****        | O(N)       |
| ****Append****           | O(1)       |
| ****Insert Front****     | O(1)       |
| ****Insert****           | O(N)       |
| ****Reverse****          | O(N)       |
| ****Delete Beginning**** | O(1)       |
| ****Delete End****       | O(N)       |
| ****Deletion Middle****  | O(N)       |
| ****Linear Search****    | O(N)       |
