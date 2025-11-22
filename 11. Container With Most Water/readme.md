# 11. Container With Most Water (LeetCode 11)

A clean and simple explanation of how I solved the “Container With Most Water” problem using the optimal two‑pointer approach.

🚀 Overview

I solved this problem using a two‑pointer technique, where one pointer starts at the beginning of the array and the other at the end. At each step, I calculate the area formed between the two heights using the max() function to keep track of the maximum water stored so far. I then move the pointer pointing to the smaller height, since moving the taller one cannot increase the area. This approach efficiently checks all useful combinations in O(n) time and gives the maximum possible water that can be contained.