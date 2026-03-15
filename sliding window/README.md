# 🪟 Sliding Window Pattern

Imagine you are standing in front of a long line of buckets. Each bucket has some carrots inside.

**[ 2 ]  [ 1 ]  [ 5 ]  [ 1 ]  [ 3 ]  [ 2 ]**

The goal is: *"Find the most carrots you can collect from **exactly 3 buckets that are next to each other**."*

### The Slow Way (Brute Force):
1. You look at buckets 1, 2, and 3. You add them up: **`2 + 1 + 5 = 8 carrots`**. You remember "8".
2. Then you walk back to bucket 2. You look at buckets 2, 3, and 4: **`1 + 5 + 1 = 7 carrots`**.
3. Then you walk back to bucket 3. You look at buckets 3, 4, and 5: **`5 + 1 + 3 = 9 carrots`**.

*Why is this bad?* Because you keep counting the middle buckets over and over! You counted the `5` bucket three times. That is too much repeated work!

### The Fast Way (Sliding Window):
You build a special wooden window frame. It is exactly wide enough to show 3 buckets.

1. You put the frame over the first 3 buckets: **`[ 2, 1, 5 ]`**. That is 8 carrots.
2. To check the next buckets, you **DON'T** count everything again. You just PUSH the wooden frame one step to the right!
3. What happens when you push the frame? Let's look:
   - The bucket on the left (`2`) falls out of the frame. So you **subtract 2**.
   - A new bucket (`1`) comes inside the frame on the right. So you **add 1**.
   - Your new total is easy to find: `8 (old total) - 2 (left bucket) + 1 (new right bucket) = 7`
4. Push it again! `7 (old total) - 1 (old left bucket) + 3 (new right bucket) = 9`

**You are a genius!** You only do ONE minus and ONE plus for every step. It is super fast!

---

## 🔍 How to Know When to Use Your Wooden Frame

If an interviewer gives you a problem, look for these **three clues**:

1. **Items in a straight line:** They give you an Array (buckets of carrots) or a String (letters in a line).
2. **"Next to each other":** They ask for a **Subarray** or a **Substring**. (Watch out for words like "contiguous" or "consecutive" - these just mean "next to each other").
3. **The Goal:** They want you to find the **Biggest/Smallest** total, or a **Specific Number** of things.

---

## 📊 Drawing the Sliding Window Frame

Here is a look at the frame in action. 

*We drop the `2` and pick up the `1`!*

```mermaid
flowchart LR
    classDef oldFrame fill:#ffcccc,stroke:#333,stroke-width:2px;
    classDef newFrame fill:#ccffcc,stroke:#333,stroke-width:2px;

    subgraph Step 1: Start Window Size = 3
    A1[ 2 ]:::oldFrame --- B1[ 1 ]:::oldFrame --- C1[ 5 ]:::oldFrame --- D1[ 1 ] --- E1[ 3 ] --- F1[ 2 ]
    end

    subgraph Step 2: Push Right Minus 2, Plus 1
    A2[ 2 ] --- B2[ 1 ]:::newFrame --- C2[ 5 ]:::newFrame --- D2[ 1 ]:::newFrame --- E2[ 3 ] --- F2[ 2 ]
    end
```

---

## 🛠️ The Cheat Codes (Code Templates)

If they want exactly `K` buckets every time, use this **Fixed Window** code. Choose the language you like best!

### 📝 1. C++
```cpp
// Fixed Window Template
int fixedSlidingWindow(vector<int>& arr, int k) {
    int left = 0, right = 0;
    int current_sum = 0, max_sum = 0;

    // Keep going until we reach the end of the line
    while (right < arr.size()) {
        current_sum += arr[right]; // Get the new bucket on the right
        
        // Is our frame too small? Just keep making it bigger
        if (right - left + 1 < k) {
            right++; 
        } 
        // Is our frame exactly the right size? 
        else if (right - left + 1 == k) {
            max_sum = max(max_sum, current_sum); // Save the biggest number we find
            current_sum -= arr[left];            // Drop the old bucket on the left
            left++;                              // Move left side of frame
            right++;                             // Move right side of frame
        }
    }
    return max_sum;
}
```

### 📝 2. Java
```java
// Fixed Window Template
public int fixedSlidingWindow(int[] arr, int k) {
    int left = 0, right = 0;
    int currentSum = 0, maxSum = Integer.MIN_VALUE;

    // Keep going until we reach the end of the line
    while (right < arr.length) {
        currentSum += arr[right]; // Get the new bucket on the right
        
        // Is our frame too small? Just keep making it bigger
        if (right - left + 1 < k) {
            right++; 
        } 
        // Is our frame exactly the right size?
        else if (right - left + 1 == k) {
            maxSum = Math.max(maxSum, currentSum); // Save the biggest number we find
            currentSum -= arr[left];               // Drop the old bucket on the left
            left++;                                // Move left side of frame
            right++;                               // Move right side of frame
        }
    }
    return maxSum;
}
```

### 📝 3. Python
```python
# Fixed Window Template
def fixed_sliding_window(arr, k):
    left = 0
    right = 0
    current_sum = 0
    max_sum = float('-inf')

    # Keep going until we reach the end of the line
    while right < len(arr):
        current_sum += arr[right] # Get the new bucket on the right
        
        # Is our frame too small? Just keep making it bigger
        if right - left + 1 < k:
            right += 1 
        # Is our frame exactly the right size?
        elif right - left + 1 == k:
            max_sum = max(max_sum, current_sum) # Save the biggest number we find
            current_sum -= arr[left]            # Drop the old bucket on the left
            left += 1                           # Move left side of frame
            right += 1                          # Move right side of frame
            
    return max_sum
```

### 📝 4. JavaScript / TypeScript
```javascript
// Fixed Window Template
function fixedSlidingWindow(arr, k) {
    let left = 0, right = 0;
    let currentSum = 0, maxSum = -Infinity;

    // Keep going until we reach the end of the line
    while (right < arr.length) {
        currentSum += arr[right]; // Get the new bucket on the right
        
        // Is our frame too small? Just keep making it bigger
        if (right - left + 1 < k) {
            right++; 
        } 
        // Is our frame exactly the right size?
        else if (right - left + 1 === k) {
            maxSum = Math.max(maxSum, currentSum); // Save the biggest number we find
            currentSum -= arr[left];               // Drop the old bucket on the left
            left++;                                // Move left side of frame
            right++;                               // Move right side of frame
        }
    }
    return maxSum;
}
```