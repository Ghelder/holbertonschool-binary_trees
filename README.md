<h1 align="center">
  <p align="center"><img width=60% src="https://i.postimg.cc/k5QWpnMN/Binary-trees.png"></p>
  <br>
  <a><img src="https://images.fineartamerica.com/images/artworkimages/mediumlarge/3/neon-binary-tree-pcb-computer-coding-programmer-noirty-designs.jpg" alt="Binary-Trees" width="200"></a>  
</h1>

# :bookmark_tabs: Table of contents
- [Description](#description)
- [Development environment](#development-environment)
- [Usage](#usage)
- [Description files](#file_folder-description-files)
- [Helper File](#raised_hands-helper-file)
- [Header File](#file_folder-header-file)
- [Tasks](#tasks)
    - [0. New node](#🔹-0-new-node)
    - [1. Insert left](#🔹-1-insert-left)
    - [2. Insert right](#🔹-2-insert-right)
    - [3. Delete](#🔹-3-delete)
    - [4. Is leaf](#🔹-4-is-leaf)
    - [5. Is root](#🔹-5-is-root)
    - [6. Pre-order traversal](#🔹-6-pre-order-traversal)
    - [7. In-order traversal](#🔹-7-in-order-traversal)
    - [8. Post-order traversal](#🔹-8-post-order-traversal)
    - [9. Height](#🔹-9-height)
    - [10. Depth](#🔹-10-depth)
    - [11. Size](#🔹-11-size)
    - [12. Leaves](#🔹-12-leaves)
    - [13. Nodes](#🔹-13-nodes)
    - [14. Balance factor](#🔹-14-balance-factor)
    - [15. Is full](#🔹-15-is-full)
    - [16. Is perfect](#🔹-16-is-perfect)
    - [17. Sibling](#🔹-17-sibling)
    - [18. Uncle](#🔹-18-uncle)
    - [100. Lowest common ancestor](#🔹-100-lowest-common-ancestor)
- [Contributors](#contributors)

<hr></hr>

<div>
  <h1><strong>Description</strong></h1>
</div>

<!-- # Description -->
Binary Tree is a Tree data structure where every node has at most 2 children. There are several types of Binary tree and their names are so confusing to remember.

<hr></hr>

<div>
  <h1><strong>Development environment</strong></h1>
</div>
This project has been tested on Ubuntu 20.04 LTS

- Programming language C
- Style guidelines: [Betty Style](https://github.com/holbertonschool/Betty)

---

<!-- <div>
  <h1><strong>Usage</strong></h1>
</div> -->
# __Usage__
To use this function

- 📥 First clone the repository:

```bash
git clone https://github.com/Ghelder/holbertonschool-binary_trees.git
```

- Go into directory you've clone with `cd`:

```bash
cd ./holbertonschool-binary_trees
```

- Then compile the code with `gcc` and some flags:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

## :raised_hands: `Helper File`

- [binary_tree_print.c](https://github.com/holbertonschool/0x1C.c/blob/master/binary_tree_print.c): C function that prints binary
  trees in a pretty way.

## :file_folder: `Header File`

- [binary_trees.h](./binary_trees.h): Header file containing definitions and
  prototypes for all types and functions written for the project.

## :file_folder: `Description files`

| #   | File                                                   | Description                                      |
| --- | ------------------------------------------------------ | ------------------------------------------------ |
| 1   | [0. New node](./0-binary_tree_node.c)                  | Write a function that creates a binary tree node |
| 2   | [1. Insert left](./1-binary_tree_insert_left.c)        | Write a function that inserts a node as the left-child of another node |
| 3   | [2. Insert right](./2-binary_tree_insert_right.c)      | Write a function that inserts a node as the right-child of another node |
| 4   | [3. Delete](./3-binary_tree_delete.c)                  | Write a function that deletes an entire binary tree |
| 5   | [4. Is leaf](./4-binary_tree_is_leaf.c)                | Write a function that checks if a node is a leaf |
| 6   | [5. Is root](./5-binary_tree_is_root.c)                | Write a function that checks if a given node is a root |
| 7   | [6. Pre-order traversal](./6-binary_tree_preorder.c)   | Write a function that goes through a binary tree using pre-order traversal |
| 8   | [7. In-order traversal](./7-binary_tree_inorder.c)     | Write a function that goes through a binary tree using in-order traversal |
| 9   | [8. Post-order traversal](./8-binary_tree_postorder.c) | Write a function that goes through a binary tree using post-order traversal |
| 10  | [9. Height](./9-binary_tree_height.c)                  | Write a function that measures the height of a binary tree |
| 11  | [10. Depth](./10-binary_tree_depth.c)                  | Write a function that measures the depth of a node in a binary tree |
| 12  | [11. Size](./11-binary_tree_size.c)                    | Write a function that measures the size of a binary tree |
| 13  | [12. Leaves](./12-binary_tree_leaves.c)                | Write a function that counts the leaves in a binary tree |
| 14  | [13. Nodes](./13-binary_tree_nodes.c)                  | Write a function that counts the nodes with at least 1 child in a binary tree |
| 15  | [14. Balance factor](./14-binary_tree_balance.c)       | Write a function that measures the balance factor of a binary tree |
| 16  | [15. Is full](./15-binary_tree_is_full.c)              | Write a function that checks if a binary tree is full |
| 17  | [16. Is perfect](./16-binary_tree_is_perfect.c)        | Write a function that checks if a binary tree is perfect |
| 18  | [17. Sibling](./17-binary_tree_sibling.c)              | Write a function that finds the sibling of a node |
| 19  | [18. Uncle](./18-binary_tree_uncle.c)                  | Write a function that finds the uncle of a node |

<hr></hr>

## Tasks

### 🔹 0. New node
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node`
~~~bash
root@ubuntu:~/holbertonschool-binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
root@ubuntu:~/holbertonschool-binary_trees$
~~~

### 🔹 1. Insert left

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./1-left
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 2. Insert right

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./2-right
  .--(098)--.
(012)     (402)

  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 3. Delete

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./3-del
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 4. Is leaf

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./4-leaf
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a leaf: 0
Is 128 a leaf: 0
Is 402 a leaf: 1
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 5. Is root

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./5-root
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a root: 1
Is 128 a root: 0
Is 402 a root: 0
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 6. Pre-order traversal

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./6-pre
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
6
56
402
256
512
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 7. In-order traversal

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./7-in
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
12
56
98
256
402
512
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 8. Post-order traversal

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./8-post
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
56
12
256
512
402
98
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 9. Height

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./9-height
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Height from 98: 2
Height from 128: 1
Height from 54: 0
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 10. Depth

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ /10-depth
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Depth of 98: 0
Depth of 128: 1
Depth of 54: 2
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 11. Size

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./11-size
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Size of 98: 5
Size of 128: 2
Size of 54: 1
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 12. Leaves

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./12-leaves
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Leaves in 98: 2
Leaves in 128: 1
Leaves in 54: 1
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 13. Nodes

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./13-nodes
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Nodes in 98: 3
Nodes in 128: 1
Nodes in 54: 0
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 14. Balance factor

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./14-balance
                      .-------(098)--.
            .-------(045)--.       (128)--.
       .--(012)--.       (050)          (402)
  .--(010)     (054)
(008)
Balance of 98: +2
Balance of 128: -1
Balance of 54: +0
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 15. Is full

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ /15-full
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 full: 0
Is 12 full: 1
Is 128 full: 0
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 16. Is perfect

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ /16-perfect
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (010)     (402)
Perfect: 1

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)
                              (010)
Perfect: 0

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)--.
                              (010)     (010)
Perfect: 0
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 17. Sibling

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./17-sibling
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Sibling of 12: 128
Sibling of 110: 402
Sibling of 54: 10
Sibling of 98: (nil)
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 18. Uncle

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./18-uncle
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Uncle of 110: 12
Uncle of 54: 128
Uncle of 12: (nil)
root@ubuntu:~/holbertonschool-binary_trees$
```

### 🔹 100. Lowest common ancestor

Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor`

```bash
root@ubuntu:~/holbertonschool-binary_trees$ ./100-ancestor
.-------(098)-------.
.--(012)--.         .--(402)-------.
(010)     (054)     (045)       .--(128)--.
(092)     (065)
Ancestor of [12] & [402]: 98
Ancestor of [45] & [65]: 402
Ancestor of [128] & [65]: 128
root@ubuntu:~/holbertonschool-binary_trees$
```

## Contributors

- **Josue Cerrón** [@xiayudev](https://github.com/xiayudev)
* **Sharif Abuhadba** [@SharifAli645](https://github.com/SharifAli645)
- **Helder Guevara** [@Ghelder](https://github.com/Ghelder)
