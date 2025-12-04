## 🚗 LeetCode 2211 — Count Collisions on a Road

Difficulty: Medium

# 🧠 Problem Summary

You are given a string directions representing cars on an infinite road:

'L' → car moves left

'R' → car moves right

'S' → car is stationary

All cars have the same speed.

Collision rules:

R meets L → 2 collisions (both were moving)

moving car meets S → 1 collision

After a collision, all involved cars become stationary and stay there.

Goal: return the total number of collisions that occur.

# 🧩 Key Insight

Only two types of cars can avoid collision:

- 1️⃣ Leading 'L' cars at the left boundary

Example:

L L L R ...


- All these left-moving cars run off the road → no collision.

2️⃣ Trailing 'R' cars at the right boundary

Example:

... L S R R R


These right-moving cars escape right → no collision.

# 🧠 Crucial Observation

Every 'L' or 'R' inside the range (after removing boundary L’s and R’s)
must collide with something.

So:

Total collisions = (all moving cars inside the valid range)


Because every moving car inside the middle will crash exactly once.

✔️ Algorithm

Skip all leading 'L' (they never collide).

Skip all trailing 'R' (they never collide).

Count all remaining moving cars ('L' or 'R') between indices l and r.

Time Complexity: O(n)
Space Complexity: O(1)

# 🔍 Example

Input:

directions = "RLRSLL"


No leading L

No trailing R

Middle cars: R L R S L L → 5 moving cars

Total collisions = 5

# 💻 C++ Solution (with comments)
```cpp
class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size(), ans = 0;
        int l = 0, r = n - 1; 
        
        // Skip all leading 'L' (they move left and never collide)
        while (l < n && directions[l] == 'L') 
            l++;

        // Skip all trailing 'R' (they move right and never collide)
        while (r >= l && directions[r] == 'R') 
            r--;
        
        // Count all remaining moving cars ('L' or 'R')
        for (int i = l; i <= r; i++) {
            if (directions[i] != 'S') 
                ans++;
        }
        return ans;
    }
};
```

# 🏁 Final Notes

The problem looks complicated but becomes simple once you realize only boundary cars escape.

Every moving car inside the trimmed region must crash.