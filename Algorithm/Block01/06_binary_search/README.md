# Binary Search — 二分查找

[← 返回 Block 01](../README.md)

## 1. 本课概览

前面我们已经知道：按值线性查找最坏需要从头看到尾，也就是 `O(n)`。

这一课第一次真正利用一个额外条件：

> **数组已经按升序排列。**

有序以后，我们不再需要每个元素都检查。每次比较中间位置 `mid`，都可以直接排除当前搜索区间的一半。

本课真实练习实现的是一个迭代二分查找：

- 找到目标时返回下标；
- 找不到时返回 `-1`；
- 最好时间复杂度 `O(1)`；
- 最坏时间复杂度 `O(log n)`；
- 辅助空间 `O(1)`。

---

## 2. 直觉 / Intuition

假设升序数组是：

```text
[1, 3, 5, 7, 9, 11, 13]
```

目标是 `11`。

因为数组有序，我们可以先看中间的 `7`。现在知道 `11 > 7`，于是 `7` 左边那些更小的数全部不可能是 `11`，它们甚至不需要再看。

> **一次比较不仅告诉我们 mid 对不对，还能证明一整块区域不可能包含答案。**

---

## 3. 核心思想 / Core Idea

维护当前仍然可能包含目标的闭区间：

```text
[left, right]
```

每轮计算 `mid = (left + right) / 2`，然后分三种情况：

### `nums[mid] == target`

已经找到，直接返回 `mid`。

### `target > nums[mid]`

由于数组升序，可以排除 `mid` 以及它左边：

```cpp
left = mid + 1;
```

### `target < nums[mid]`

同理，`mid` 右边全部更大：

```cpp
right = mid - 1;
```

核心不是背这两句更新，而是理解为什么有序性能让被排除的那一半永久不用再看。

---

## 4. 手推 / Hand Simulation

数组：

```text
index: 0  1  2  3  4   5   6
nums:  1  3  5  7  9  11  13
```

查找 `target = 11`。

第 1 轮：

```text
left = 0
right = 6
mid = 3
nums[mid] = 7
```

因为 `11 > 7`，所以 `left = 4`。

第 2 轮：

```text
left = 4
right = 6
mid = 5
nums[mid] = 11
```

命中，返回 `5`。

---

## 5. 实现 / Implementation

本课真实代码：[`main.cpp`](./main.cpp)。

```cpp
int binarySearch(const std::vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (right + left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
```

### 为什么是 `left <= right`？

当 `left == right` 时，搜索区间中仍然剩下最后一个候选位置，所以还必须检查一次。

### 为什么是 `mid + 1` 和 `mid - 1`？

`mid` 已经比较过，而且已经确认不是目标，下一轮不应该再次包含它。

### 为什么最后返回 `-1`？

循环结束意味着 `left > right`，候选区间已经为空，因此目标不存在。

---

## 6. 复杂度 / Complexity

每进行一次比较，候选区间大约缩小一半：

```text
n
n / 2
n / 4
n / 8
...
```

因此：

| 情况 | 时间复杂度 |
| --- | --- |
| 第一次 `mid` 就命中 | `O(1)` |
| 最坏情况 | `O(log n)` |
| 辅助空间 | `O(1)` |

---

## 7. 常见错误 / Common Mistakes

- 在无序数组上直接二分；
- 更新成 `left = mid` 或 `right = mid` 导致区间不收缩；
- 把 `left < right` 和当前闭区间定义混用；
- 只背移动方向，不理解有序性带来的排除逻辑。

---

## 8. 精选例题 / Selected Problems

暂未额外收录。

当前练习先把“在升序数组中查找一个确定目标”做扎实。边界二分、答案二分等变化以后按真实学习进度扩展。

---

## 9. 快速复习 / Quick Review

1. 当前二分查找最重要的前提是什么？
2. `target > nums[mid]` 时，为什么左半边可以全部扔掉？
3. 为什么当前实现是 `left = mid + 1`？
4. 为什么循环条件是 `left <= right`？
5. 为什么最坏时间复杂度是 `O(log n)`？
6. 搜索失败时为什么最终一定会得到 `left > right`？

### 一句话唤醒

> **二分查找利用有序性，让一次比较能够排除一半仍可能的答案。**

---

## 10. Knowledge Connections

**Before:** [Sorting — 排序基础](../05_sorting/)  
**Now:** 第一次利用有序性显著缩小搜索空间  
**Next:** [Two Pointers — 双指针](../07_two_pointers/) 会继续利用升序结构，但采用另一种“单调排除”方式。
