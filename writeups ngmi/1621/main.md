What makes sense:
- The dp state is ```dp[i][j]``` which answers "how many ways can we place i line segments using up to point j"

What doesn't make sense:
- The recurrence relation
- Where did prefix sums come from?

---

Trying to understand the editorial

Seems like it's similar to take don't take
At ```dp[i][j]``` you can say:
- The ith line segment ends at point j
  - You can make a line segment with some p in range [0,j-1]
  - The first i-1 segments have to only use points [0,j-1]
  - The ways to make i-1 segments using some point p for p in [0,j-1] is represented by ```dp[i-1][p]```
  - How do we figure out that p?
  - Well, the p can be anything from 0 to j-1, so p is our iterator
- The ith line segment does not end at point j
  - The # of ways is incremented by ```dp[i][j-1]``` 

Won't a bunch of the ```dp[i-1][p]``` be zeros because i-1 > p? There is no way to place more than p-1 line segments, but i-1 can be greater than p if we are raning from [0,j-1].
- This seems to be the intuition to why we can use prefix sums, we don't care about anything except what was already processed. We can keep a prefix of ```dp[i]``` to calcualte any ```dp[i-1]``` in constant time.

---
