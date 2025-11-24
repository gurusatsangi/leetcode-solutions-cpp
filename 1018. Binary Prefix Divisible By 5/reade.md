# 1018. Binary Prefix Divisible By 5

A clear explanation of how I solved the “Binary Prefix Divisible by 5” problem using a running formula for binary-to-decimal conversion.

🚀 Overview

I solved this problem by maintaining a running value that represents the decimal number formed by the binary prefix. For each bit in the array, I used the formula val = val * 2 + bit to extend the binary number, and then applied % 5 to keep the value small. After updating the value, I simply checked whether it is divisible by 5 and pushed true or false into the result vector. This method efficiently builds each prefix without converting the whole binary number every time, making the solution fast and clean.