# 🏆 Find Players With Zero or One Losses  
**LeetCode 2225**

---

## 📌 Problem Statement
You are given an integer array `matches` where  
`matches[i] = [winneri, loseri]` indicates that player `winneri` defeated player `loseri`.

Return a list `answer` of size `2` where:
- `answer[0]` → players who have **not lost any matches**
- `answer[1]` → players who have **lost exactly one match**

📌 Notes:
- Consider only players who played at least one match
- Return results in **sorted order**

---

## 🧠 Key Idea
Track how many times each player **lost** using a hashmap.

- Players with **0 losses** → winners not present in loser map
- Players with **1 loss** → loser count equals 1

---

## ✅ Approach: HashMap Counting

### 🔹 Steps
1. Maintain a map for counting losses
2. Maintain a map to track winners
3. Identify players with 0 losses
4. Identify players with exactly 1 loss
5. Sort the result lists

---

## 🧾 C++ Solution
```cpp
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        vector<int> ans0;
        vector<int> ans1;

        unordered_map<int, int> loser;
        unordered_map<int, int> winner;

        for (auto& match : matches) {
            int win = match[0];
            int lose = match[1];

            winner[win]++;
            loser[lose]++;
        }

        for (auto& p : loser) {
            if (p.second == 1) {
                ans1.push_back(p.first);
            }
        }

        for (auto& p : winner) {
            if (!loser.count(p.first)) {
                ans0.push_back(p.first);
            }
        }

        sort(ans0.begin(), ans0.end());
        sort(ans1.begin(), ans1.end());

        return {ans0, ans1};
    }
};
```

---

## 🧪 Examples

### Example 1
**Input**
```
[[1,3],[2,3],[3,6],[5,6],[5,7],[4,5],[4,8],[4,9],[10,4],[10,9]]
```

**Output**
```
[[1,2,10],[4,5,7,8]]
```

---

### Example 2
**Input**
```
[[2,3],[1,3],[5,4],[6,4]]
```

**Output**
```
[[1,2,5,6],[]]
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(n)`

---

## 🏁 Conclusion
✔ Efficient hashmap-based solution  
✔ Works well for large inputs  
✔ Clean and interview-ready  

---

⭐ If this README helped you, consider starring the repository!
