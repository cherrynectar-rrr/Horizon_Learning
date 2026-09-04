# Two Pointers — 双指针

[← 返回 Block 01](../README.md)

## 1. 本课概览

这一课继续利用“升序有序”这个结构，但不再每次跳到中间。

我们解决的问题是：

> 在一个升序数组中，是否存在两个不同位置的数，它们的和等于 `target`？

最直接的方法可以枚举所有数对，但那会产生大量重复尝试。

当前课程使用两个指针：

```text
left  → 从最小值开始
right → 从最大值开始
```

根据当前两数之和与 `target` 的大小关系，只移动真正有可能改善答案的那个指针。

本课真实实现最终返回 `true / false`，最坏时间复杂度 `O(n)`，辅助空间 `O(1)`。

> 注意：本课学习的是“升序数组 two-sum”这一种双指针模式。并不是所有双指针问题都要求数组有序。

---

## 2. 直觉 / Intuition

升序数组：

```text
[1, 3, 4, 6, 9, 11, 15]
```

假设 `target = 13`。

先取两端：`1 + 15 = 16`，和太大。

这时候如果把 `left` 向右移动，左边的数只会变大，和不但不会变小，反而可能更大。

所以真正有意义的动作是：

```text
right--
```

让右边的数变小。

如果当前和太小，则反过来 `left++`。

> **指针怎么移动不是规定出来的，而是由有序性和当前结果共同推出来的。**

---

## 3. 核心思想 / Core Idea

初始化：

```text
left = 0
right = n - 1
```

只要 `left < right`，就还有两个不同位置可以组成一对。

计算：

```text
sum = nums[left] + nums[right]
```

### `sum == target`

找到答案：`return true`。

### `sum < target`

当前和太小，想让和变大，需要让较小的一端变大：`left++`。

### `sum > target`

当前和太大，想让和变小，需要让较大的一端变小：`right--`。

每移动一次指针，都永久排除了一批不可能成为答案的组合。

---

## 4. 手推 / Hand Simulation

数组：

```text
[1, 3, 4, 6, 9, 11, 15]
```

目标 `13`：

```text
1 + 15 = 16  → right--
1 + 11 = 12  → left++
3 + 11 = 14  → right--
3 + 9  = 12  → left++
4 + 9  = 13  → true
```

整个过程没有枚举所有数对，而是不断利用“太大 / 太小”的信息缩小可能范围。

---

## 5. 实现 / Implementation

本课真实代码：[`main.cpp`](./main.cpp)。

```cpp
bool hasTwoSum(const std::vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        if (nums[left] + nums[right] == target)
        {
            return true;
        }
        else if (nums[left] + nums[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return false;
}
```

### 为什么是 `left < right`？

题目需要两个不同位置。`left == right` 时，两个指针已经指向同一个元素，不应该把同一个位置使用两次。

### 为什么只移动一个指针？

根据有序性，我们能够确定哪一个方向一定没有帮助，于是只排除那一侧。如果两个指针同时移动，就可能跳过本来存在的答案。

---

## 6. 复杂度 / Complexity

`left` 只能向右移动，`right` 只能向左移动。每个指针在整个算法中最多走过数组一次。

因此整体移动次数与 `n` 同数量级：`O(n)`。

算法只维护固定数量状态，所以辅助空间 `O(1)`。

---

## 7. 常见错误 / Common Mistakes

- `sum < target` 时错误移动 `right`；
- `sum > target` 时错误移动 `left`；
- 每轮两个指针一起移动；
- 忽略本课模式的有序前提；
- 循环写成 `left <= right`，把同一个位置使用两次。

---

## 8. 精选例题 / Selected Problems

暂未额外收录。

以后如果加入题目，优先选择能训练“为什么当前比较能排除某些组合”和“如何判断移动哪一侧”的例题。

---

## 9. 快速复习 / Quick Review

1. 本课 two-sum 双指针为什么要求升序数组？
2. `sum < target` 时为什么一定移动 `left`？
3. `sum > target` 时为什么移动 `right`？
4. 为什么不能默认两个指针一起移动？
5. 为什么循环条件是 `left < right`？
6. 为什么整个算法是 `O(n)` 而不是 `O(n^2)`？

### 一句话唤醒

> **双指针利用升序关系和当前和的大小，让左右指针单调移动，并不断排除不可能的数对。**

---

## 10. Knowledge Connections

**Before:** [Binary Search — 二分查找](../06_binary_search/) 同样利用有序性排除不可能区域  
**Earlier:** [Strings — 字符串](../04_strings/) 的回文判断已经出现过“从两端向中间”的雏形  
**Next:** Prefix Sums 将从“排除搜索空间”转向“避免重复计算”，进入预处理思想。
