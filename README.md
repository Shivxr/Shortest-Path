# Shortest-Path
A simple cpp code to find shortest path from A to B in a grid using Greedy Approach 


# **Shortest Path in a Grid Using Manhattan Distance**

---

## **Description**  
This program demonstrates a greedy algorithm to find the shortest path from the top-left corner `(0, 0)` to a target cell `(4, 4)` in a 7x7 grid using **Manhattan distance**. The grid is filled with sequential numbers for easier visualization of the path. The algorithm moves step-by-step either right or down, ensuring the shortest route is taken at every step.

---

## **Code Explanation**  

### **Grid Representation**  
The grid is represented as a 2D matrix (`mat`) of size `7x7`. The grid is pre-filled with integers to visualize the movement across the matrix.  

### **Starting and Target Positions**  
The program starts at `(0, 0)` and aims to reach `(4, 4)`, which is the given target `(t1, t2)`.  

### **Manhattan Distance Calculation**  
For every step, the algorithm calculates the Manhattan distance for moving **down** and **right**:  
- Moving **down**: `(i + 1, j)`  
- Moving **right**: `(i, j + 1)`  

Manhattan distance is calculated as:  
`Distance = abs(target_row - current_row) + abs(target_col - current_col)`  

### **Movement Decision**  
The algorithm greedily chooses the move that minimizes Manhattan distance to the target:  
- If moving **down** reduces the distance more than moving **right**, move **down**.  
- If moving **right** is more beneficial, move **right**.  
- If both moves are equal, move **right** (a simple tie-breaking rule).  

### **Output**  
The program prints each position visited along the shortest path until it reaches the target `(4, 4)`.  

---

## **Use Case**  

This program is useful in grid-based movement simulations where:  

- **Shortest Path Calculation:** Quickly determine the shortest path from one point to another in uniform grids with no obstacles.  
- **Navigation Systems:** Can be a basic building block for grid-based games, robotic navigation, or AI pathfinding.  
- **Educational Use:** Demonstrates concepts of **greedy algorithms** and **Manhattan distance**.  

---

## **What’s Innovative?**  

### **1. Greedy Approach Using Manhattan Distance**  
This is a unique approach compared to **breadth-first search (BFS)** or **A***:  
- **Efficiency:** The program does not explore unnecessary paths since there are no obstacles.  
- **Memory Usage:** No need for a queue or cost matrix—just two distance variables (`a` and `b`) are used for decisions.  
- **Fast Execution:** Only calculates the distance for two possible moves at each step, ensuring optimal time complexity for open grids.  

### **2. Dynamic Decision-Making**  
The code dynamically chooses the best direction without pre-computing or storing the entire cost matrix. This decision-making process mimics **dynamic programming principles** by greedily solving subproblems at each step.  

### **3. Simplified, Clear Logic**  
The logic is simple and clean, focusing solely on grid traversal using minimal conditions and no additional data structures.  

---

## **Possible Enhancements**  

### **1. Obstacle Handling**  
The current implementation doesn’t account for obstacles. Adding a condition to check for impassable cells would make it more robust for real-world pathfinding.  

### **2. Path Storage**  
If you want to store and return the path as an array or list, you could enhance it to store all visited coordinates.  

### **3. Visualization**  
You could output the entire grid and mark the path visually for better understanding.  

---  
