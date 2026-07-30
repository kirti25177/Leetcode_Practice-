# ⏱️ Time and Space Complexity

## 📖 What is Time Complexity?

Time Complexity measures **how the execution time of an algorithm grows** as the input size (`n`) increases.

It helps compare the efficiency of different algorithms.

---

## 📖 What is Space Complexity?

Space Complexity measures **how much extra memory an algorithm uses** as the input size (`n`) increases.

It includes:
- Temporary variables
- Auxiliary data structures
- Recursive call stack

---

# 🚀 Time Complexities (Best to Worst)

| Complexity | Name | Example |
|------------|------|---------|
| `O(1)` | Constant | Accessing an array element |
| `O(log n)` | Logarithmic | Binary Search |
| `O(√n)` | Square Root | Trial Division |
| `O(n)` | Linear | Linear Search |
| `O(n log n)` | Linearithmic | Merge Sort, Heap Sort |
| `O(n²)` | Quadratic | Bubble Sort, Selection Sort |
| `O(n³)` | Cubic | Matrix Multiplication (Brute Force) |
| `O(2ⁿ)` | Exponential | Recursive Fibonacci |
| `O(n!)` | Factorial | Generating All Permutations |

---

## 📈 Complexity Order

```text
O(1)
  ↓
O(log n)
  ↓
O(√n)
  ↓
O(n)
  ↓
O(n log n)
  ↓
O(n²)
  ↓
O(n³)
  ↓
O(2ⁿ)
  ↓
O(n!)
```

---

# 💾 Common Space Complexities

| Complexity | Meaning | Example |
|------------|---------|---------|
| `O(1)` | Constant Extra Space | Using a few variables |
| `O(log n)` | Recursive Stack | Binary Search |
| `O(n)` | Linear Extra Space | Hash Map, Vector, Queue |
| `O(n²)` | Two-Dimensional Storage | Matrix |

---

# ⚡ Time vs Space Complexity

| Time Complexity | Space Complexity |
|-----------------|------------------|
| Measures execution time | Measures extra memory usage |
| Focuses on speed | Focuses on memory |
| Lower is generally better | Lower is generally better |

---

# 📌 Important Notes

- Analyze the **worst-case** complexity unless specified otherwise.
- Ignore constants and lower-order terms.

Examples:
- `O(2n)` → `O(n)`
- `O(5n + 100)` → `O(n)`
- `O(3n² + n)` → `O(n²)`

---

# 🎯 Quick Revision

| Complexity | Suitable For |
|------------|--------------|
| `O(1)` | Excellent |
| `O(log n)` | Excellent |
| `O(n)` | Good |
| `O(n log n)` | Very Good |
| `O(n²)` | Acceptable for small inputs |
| `O(n³)` | Slow |
| `O(2ⁿ)` | Very Slow |
| `O(n!)` | Worst |
