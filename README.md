<div align="center">
  <h1>🚀 Master Data Structures & Algorithms for FAANG</h1>
  <p><em>The Ultimate Pattern-Based Guide to Cracking Coding Interviews</em></p>
  <img src="https://img.shields.io/badge/FAANG-Ready-brightgreen.svg" alt="FAANG Ready">
  <img src="https://img.shields.io/badge/LeetCode-Curated-orange.svg" alt="LeetCode">
</div>

<hr>

Welcome to the ultimate repository for mastering **Data Structures and Algorithms (DSA)** for FAANG and top-tier tech company interviews. Memorizing solutions is a recipe for failure. The most effective way to ace coding interviews is by **mastering the underlying patterns**. Once you recognize the pattern, writing the algorithm becomes second nature.

This guide details the **Top 21 Must-Know DSA Patterns** required for FAANG, how to identify them, and a meticulously curated list of standard LeetCode problems to practice.

---

## 📑 The FAANG 21 Pattern Checklist

1. [Sliding Window](#1-sliding-window-)
2. [Two Pointers](#2-two-pointers-️)
3. [Fast & Slow Pointers](#3-fast--slow-pointers-)
4. [Merge Intervals](#4-merge-intervals-️)
5. [Cyclic Sort](#5-cyclic-sort-)
6. [In-place Reversal of a Linked List](#6-in-place-reversal-of-a-linked-list-)
7. [Tree Breadth First Search (BFS)](#7-tree-breadth-first-search-bfs-️)
8. [Tree Depth First Search (DFS)](#8-tree-depth-first-search-dfs-️)
9. [Two Heaps](#9-two-heaps-️)
10. [Subsets / Backtracking](#10-subsets--backtracking-)
11. [Modified Binary Search](#11-modified-binary-search-)
12. [Top 'K' Elements](#12-top-k-elements-)
13. [K-way Merge](#13-k-way-merge-️)
14. [Topological Sort (Graph)](#14-topological-sort-graph-️)
15. [Graph Traversal (BFS / DFS)](#15-graph-traversal-bfs--dfs-)
16. [Union Find (Disjoint Set)](#16-union-find-disjoint-set-)
17. [Trie (Prefix Tree)](#17-trie-prefix-tree-)
18. [Monotonic Stack🔑](#18-monotonic-stack-)
19. [Dynamic Programming (1D & 2D)](#19-dynamic-programming-1d--2d-)
20. [Bit Manipulation](#20-bit-manipulation-️)
21. [Greedy Algorithms](#21-greedy-algorithms-)

---

### 1. Sliding Window 🪟
**Concept:** Maintain a continuous window (subset) of data over an array/string to perform optimal calculations instead of computing overlapping segments repeatedly.
**Identification:** "Longest/shortest substring", "subarray sum", "max/min window".

- 🟢 [Maximum Average Subarray I (Easy)](https://leetcode.com/problems/maximum-average-subarray-i/)
- 🟡 [Longest Substring Without Repeating Characters (Medium)](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
- 🟡 [Longest Repeating Character Replacement (Medium)](https://leetcode.com/problems/longest-repeating-character-replacement/)
- 🔴 [Minimum Window Substring (Hard)](https://leetcode.com/problems/minimum-window-substring/)
- 🔴 [Sliding Window Maximum (Hard)](https://leetcode.com/problems/sliding-window-maximum/)

### 2. Two Pointers ✌️
**Concept:** Use two pointers to iterate over a data structure, usually from opposite ends or at different speeds, to meet specific conditions.
**Identification:** "Sorted array", "pairs sum", "palindrome", "removing duplicates".

- 🟢 [Valid Palindrome (Easy)](https://leetcode.com/problems/valid-palindrome/)
- 🟡 [Two Sum II - Input Array Is Sorted (Medium)](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- 🟡 [3Sum (Medium)](https://leetcode.com/problems/3sum/)
- 🟡 [Container With Most Water (Medium)](https://leetcode.com/problems/container-with-most-water/)
- 🔴 [Trapping Rain Water (Hard)](https://leetcode.com/problems/trapping-rain-water/)

### 3. Fast & Slow Pointers 🐇🐢
**Concept:** Use two pointers moving at different speeds (usually 1x and 2x) to find cycles or midpoints.
**Identification:** "Linked List cycle", "middle node", "find duplicate without extra space".

- 🟢 [Linked List Cycle (Easy)](https://leetcode.com/problems/linked-list-cycle/)
- 🟢 [Middle of the Linked List (Easy)](https://leetcode.com/problems/middle-of-the-linked-list/)
- 🟡 [Find the Duplicate Number (Medium)](https://leetcode.com/problems/find-the-duplicate-number/)
- 🟡 [Linked List Cycle II (Medium)](https://leetcode.com/problems/linked-list-cycle-ii/)

### 4. Merge Intervals 🕰️
**Concept:** Deal with continuous timelines or numeric ranges. Sort by start times, then compare overlaps.
**Identification:** "Overlapping intervals", "meeting rooms", "scheduling".

- 🟡 [Merge Intervals (Medium)](https://leetcode.com/problems/merge-intervals/)
- 🟡 [Insert Interval (Medium)](https://leetcode.com/problems/insert-interval/)
- 🟡 [Non-overlapping Intervals (Medium)](https://leetcode.com/problems/non-overlapping-intervals/)
- 🟡 [Meeting Rooms II (Medium) 🔒](https://leetcode.com/problems/meeting-rooms-ii/)

### 5. Cyclic Sort 🔄
**Concept:** Whenever numbers in an array are in the range `1` to `N`, sort them on $O(N)$ by swapping each number with its correct index (`index = num - 1`).
**Identification:** Finding missing, duplicate, or smallest positive numbers in `[1, N]`.

- 🟢 [Missing Number (Easy)](https://leetcode.com/problems/missing-number/)
- 🟢 [Find All Numbers Disappeared in an Array (Easy)](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)
- 🟡 [Find All Duplicates in an Array (Medium)](https://leetcode.com/problems/find-all-duplicates-in-an-array/)
- 🔴 [First Missing Positive (Hard)](https://leetcode.com/problems/first-missing-positive/)

### 6. In-place Reversal of a Linked List 🔗
**Concept:** Reverse nodes in a linked list using constant internal node manipulation.
**Identification:** Reversing entirely, reversing specific sub-lists, reversing in groups.

- 🟢 [Reverse Linked List (Easy)](https://leetcode.com/problems/reverse-linked-list/)
- 🟡 [Reverse Linked List II (Medium)](https://leetcode.com/problems/reverse-linked-list-ii/)
- 🟡 [Reorder List (Medium)](https://leetcode.com/problems/reorder-list/)
- 🔴 [Reverse Nodes in k-Group (Hard)](https://leetcode.com/problems/reverse-nodes-in-k-group/)

### 7. Tree Breadth First Search (BFS) 🌳➡️
**Concept:** Traverse a tree level by level using a Queue.
**Identification:** "Level order", "shortest path to leaf", "right side view".

- 🟢 [Maximum Depth of Binary Tree (Easy)](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- 🟡 [Binary Tree Level Order Traversal (Medium)](https://leetcode.com/problems/binary-tree-level-order-traversal/)
- 🟡 [Binary Tree Right Side View (Medium)](https://leetcode.com/problems/binary-tree-right-side-view/)
- 🔴 [Word Ladder (Hard)](https://leetcode.com/problems/word-ladder/) *(Graph BFS but same concept)*

### 8. Tree Depth First Search (DFS) 🌲⬇️
**Concept:** Traverse deep down a tree using recursion or stack before visiting siblings.
**Identification:** "Path sum", "lowest common ancestor", "validating BST".

- 🟢 [Invert Binary Tree (Easy)](https://leetcode.com/problems/invert-binary-tree/)
- 🟡 [Lowest Common Ancestor of a Binary Tree (Medium)](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)
- 🟡 [Validate Binary Search Tree (Medium)](https://leetcode.com/problems/validate-binary-search-tree/)
- 🔴 [Binary Tree Maximum Path Sum (Hard)](https://leetcode.com/problems/binary-tree-maximum-path-sum/)

### 9. Two Heaps ⚖️
**Concept:** Maintain a Min-Heap and Max-Heap simultaneously to instantly access the median or categorize elements into two halves dynamically.
**Identification:** "Dynamic median", "data stream parsing".

- 🟡 [Find K Pairs with Smallest Sums (Medium)](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/)
- 🔴 [Find Median from Data Stream (Hard)](https://leetcode.com/problems/find-median-from-data-stream/)
- 🔴 [Sliding Window Median (Hard)](https://leetcode.com/problems/sliding-window-median/)
- 🔴 [IPO (Hard)](https://leetcode.com/problems/ipo/)

### 10. Subsets / Backtracking 🧊
**Concept:** Explore all possibilities (permutations/combinations) to build solutions incrementally and backtrack when constraints fail.
**Identification:** "All combinations", "permutations", "generate subsets", "Sudoku solver".

- 🟡 [Subsets (Medium)](https://leetcode.com/problems/subsets/)
- 🟡 [Permutations (Medium)](https://leetcode.com/problems/permutations/)
- 🟡 [Combination Sum (Medium)](https://leetcode.com/problems/combination-sum/)
- 🟡 [Word Search (Medium)](https://leetcode.com/problems/word-search/)
- 🔴 [N-Queens (Hard)](https://leetcode.com/problems/n-queens/)

### 11. Modified Binary Search 🔍
**Concept:** Adapt standard binary search for rotated arrays, matrices, or condition-based boundary finding.
**Identification:** $O(\log N)$ time complexity requirement on sorted lists/matrices.

- 🟢 [Binary Search (Easy)](https://leetcode.com/problems/binary-search/)
- 🟡 [Search a 2D Matrix (Medium)](https://leetcode.com/problems/search-a-2d-matrix/)
- 🟡 [Search in Rotated Sorted Array (Medium)](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- 🟡 [Koko Eating Bananas (Medium)](https://leetcode.com/problems/koko-eating-bananas/)
- 🔴 [Median of Two Sorted Arrays (Hard)](https://leetcode.com/problems/median-of-two-sorted-arrays/)

### 12. Top 'K' Elements 🏆
**Concept:** Use a Priority Queue (Heap) to find top, smallest, or most frequent $K$ elements in $O(N \log K)$ time.
**Identification:** "Top K", "Kth largest", "most frequent".

- 🟡 [Kth Largest Element in an Array (Medium)](https://leetcode.com/problems/kth-largest-element-in-an-array/)
- 🟡 [Top K Frequent Elements (Medium)](https://leetcode.com/problems/top-k-frequent-elements/)
- 🟡 [K Closest Points to Origin (Medium)](https://leetcode.com/problems/k-closest-points-to-origin/)

### 13. K-way Merge 🛤️
**Concept:** Merging $K$ sorted arrays/lists optimally using a Min-Heap framework.
**Identification:** "Merge K sorted lists", "find element in multiple sorted arrays".

- 🟡 [Kth Smallest Element in a Sorted Matrix (Medium)](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/)
- 🔴 [Merge k Sorted Lists (Hard)](https://leetcode.com/problems/merge-k-sorted-lists/)
- 🔴 [Smallest Range Covering Elements from K Lists (Hard)](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/)

### 14. Topological Sort (Graph) 🕸️
**Concept:** Linearly order vertices of a Directed Acyclic Graph (DAG) such that for every directed edge $U \to V$, vertex $U$ comes before $V$. 
**Identification:** "Dependency resolving", "prerequisites", "scheduling tasks with order".

- 🟡 [Course Schedule (Medium)](https://leetcode.com/problems/course-schedule/)
- 🟡 [Course Schedule II (Medium)](https://leetcode.com/problems/course-schedule-ii/)
- 🔴 [Alien Dictionary (Hard) 🔒](https://leetcode.com/problems/alien-dictionary/)

### 15. Graph Traversal (BFS / DFS) 🗺️
**Concept:** Traversing a network of nodes. Matrix grid graphs are extremely common in FAANG.
**Identification:** "Islands", "mazes", "count components", "shortest path in 2D array".

- 🟡 [Number of Islands (Medium)](https://leetcode.com/problems/number-of-islands/)
- 🟡 [Clone Graph (Medium)](https://leetcode.com/problems/clone-graph/)
- 🟡 [Rotting Oranges (Medium)](https://leetcode.com/problems/rotting-oranges/)
- 🟡 [Pacific Atlantic Water Flow (Medium)](https://leetcode.com/problems/pacific-atlantic-water-flow/)

### 16. Union Find (Disjoint Set) 🔗
**Concept:** A data structure that tracks a set of elements partitioned into disjoint subsets. Highly efficient for finding connected components.
**Identification:** "Connected components in highly dynamic graphs", "cycle detection in undirected graphs", "Kruskal's Algorithm".

- 🟡 [Redundant Connection (Medium)](https://leetcode.com/problems/redundant-connection/)
- 🟡 [Number of Connected Components in an Undirected Graph (Medium) 🔒](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)
- 🟡 [Accounts Merge (Medium)](https://leetcode.com/problems/accounts-merge/)

### 17. Trie (Prefix Tree) 🔤
**Concept:** A tree-like data structure to store associative data structures like strings. Massive performance boost ($O(L)$) for prefix matching.
**Identification:** "Autocomplete", "word search in dictionary", "prefix matching".

- 🟡 [Implement Trie (Prefix Tree) (Medium)](https://leetcode.com/problems/implement-trie-prefix-tree/)
- 🟡 [Design Add and Search Words Data Structure (Medium)](https://leetcode.com/problems/design-add-and-search-words-data-structure/)
- 🔴 [Word Search II (Hard)](https://leetcode.com/problems/word-search-ii/)

### 18. Monotonic Stack 📊
**Concept:** A stack that remains strictly increasing or decreasing. It elegantly handles problems that demand findings the "next greater" or "previous smaller" element.
**Identification:** Finding "next greater element", "daily temperatures", "histogram heights".

- 🟢 [Next Greater Element I (Easy)](https://leetcode.com/problems/next-greater-element-i/)
- 🟡 [Daily Temperatures (Medium)](https://leetcode.com/problems/daily-temperatures/)
- 🟡 [Car Fleet (Medium)](https://leetcode.com/problems/car-fleet/)
- 🔴 [Largest Rectangle in Histogram (Hard)](https://leetcode.com/problems/largest-rectangle-in-histogram/)

### 19. Dynamic Programming (1D & 2D) 🧩
**Concept:** Breaking down a problem into overlapping sub-problems and caching their results (Memoization / Tabulation).
**Identification:** "Max/min way to do X", "total valid paths", "longest common subsequence".

**1D DP:**
- 🟢 [Climbing Stairs (Easy)](https://leetcode.com/problems/climbing-stairs/)
- 🟡 [House Robber (Medium)](https://leetcode.com/problems/house-robber/)
- 🟡 [Coin Change (Medium)](https://leetcode.com/problems/coin-change/)
- 🟡 [Word Break (Medium)](https://leetcode.com/problems/word-break/)

**2D/String DP:**
- 🟡 [Longest Common Subsequence (Medium)](https://leetcode.com/problems/longest-common-subsequence/)
- 🟡 [Unique Paths (Medium)](https://leetcode.com/problems/unique-paths/)
- 🔴 [Edit Distance (Hard)](https://leetcode.com/problems/edit-distance/)
- 🔴 [Regular Expression Matching (Hard)](https://leetcode.com/problems/regular-expression-matching/)

### 20. Bit Manipulation 🛠️
**Concept:** Utilizing bitwise operators (`&`, `|`, `^`, `<<`, `>>`) for math-heavy optimization.
**Identification:** "Single number", "XOR constraints", "fast exponentiation", "counting 1 bits".

- 🟢 [Single Number (Easy)](https://leetcode.com/problems/single-number/)
- 🟢 [Counting Bits (Easy)](https://leetcode.com/problems/counting-bits/)
- 🟢 [Reverse Bits (Easy)](https://leetcode.com/problems/reverse-bits/)
- 🟡 [Sum of Two Integers (Medium)](https://leetcode.com/problems/sum-of-two-integers/)

### 21. Greedy Algorithms 🦅
**Concept:** Making locally optimal choices at each step with the hope of finding a global optimum.
**Identification:** "Maximum jump", "minimum cost", "interval coverage" (without overlapping checks).

- 🟡 [Jump Game (Medium)](https://leetcode.com/problems/jump-game/)
- 🟡 [Maximum Subarray (Medium)](https://leetcode.com/problems/maximum-subarray/) *(Kadane's Algorithm)*
- 🟡 [Gas Station (Medium)](https://leetcode.com/problems/gas-station/)
- 🟡 [Task Scheduler (Medium)](https://leetcode.com/problems/task-scheduler/)

---

<div align="center">
  <p><strong>Success at FAANG requires patience, consistency, and pattern recognition.</strong></p>
  <p><em>“Knowledge is of no value unless you put it into practice.” — Anton Chekhov</em></p>
</div>
