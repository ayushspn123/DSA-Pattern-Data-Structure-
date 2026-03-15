#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // For INT_MIN

using namespace std;

int main() {
    // In C++, we use std::vector for dynamic arrays, or proper array initialization
    vector<int> arr = {2, 5, 1, 8, 2, 9, 6, 1};
    int size = arr.size();
    int k = 3;
    
    int start = 0;
    int end = 0;
    
    // We use INT_MIN for the safest possible minimum value
    int maxValue = INT_MIN;
    int sum = 0;
    
    while (end < size) {
        // 1. Add the incoming right bucket (arr[end], NOT arr[start])
        sum += arr[end];
        
        // 2. If the window isn't size 'k' yet, just keep expanding
        if (end - start + 1 < k) {
            end++;
        }
        // 3. When the window hits exactly size 'k'
        else if (end - start + 1 == k) {
            // Check if our current window has the biggest sum
            maxValue = max(maxValue, sum);
            
            // Remove the leftmost bucket from our sum before we slide
            sum -= arr[start];
            
            // Slide exactly 1 step to the right
            start++;
            end++;
        }
    }
    
    cout << "Answer: " << maxValue << endl;
    return 0;
}
