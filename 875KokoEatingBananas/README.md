# 🍌 Koko Eating Bananas  
**LeetCode 875**

---

## 📌 Problem Statement
Koko loves to eat bananas. There are `n` piles of bananas, where the `i-th` pile has `piles[i]` bananas.

Koko can choose an **eating speed `k` (bananas/hour)**.  
Each hour, she eats `k` bananas from **one pile only**.  
If a pile has fewer than `k` bananas, she eats all of them.

Return the **minimum integer `k`** such that Koko can eat all bananas within `h` hours.

---

## 🧠 Key Idea
This problem is solved using **Binary Search on Answer**.

- Minimum speed = `1`
- Maximum speed = `max(piles)`
- Check if a given speed allows finishing within `h` hours

---

## ✅ Approach: Binary Search

### 🔹 Steps
1. Initialize `low = 1`, `high = max(piles)`
2. While `low < high`:
   - Calculate `mid` speed
   - Compute total hours needed at speed `mid`
3. If hours ≤ `h`, try smaller speed
4. Else, increase speed

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = low + (high - low) / 2;
            int hours = 0;

            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }

            if (hours <= h)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
```

---

## 🧪 Examples

### Example 1
**Input**
```
piles = [3,6,7,11]
h = 8
```
**Output**
```
4
```

---

### Example 2
**Input**
```
piles = [30,11,23,4,20]
h = 5
```
**Output**
```
30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n log max(piles))`
- **Space Complexity:** `O(1)`

---

## 🏁 Conclusion
✔ Efficient binary search solution  
✔ Uses ceiling division trick  
✔ Clean and interview-ready  

---

⭐ If this README helped you, consider starring the repository!
