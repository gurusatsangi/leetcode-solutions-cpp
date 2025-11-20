# 58. Length of Last Word

A clean and simple explanation of how I solved the “Length of Last Word” problem using an efficient two-loop approach from the end of the string.

🚀 Overview

I solved this problem by iterating from the back of the string. First, I skip all trailing spaces by moving backwards until I reach a valid character. After that, I continue moving left while counting the characters of the last word until another space appears. This two-loop method handles extra spaces smoothly and gives the correct length of the last word with clarity and efficiency.