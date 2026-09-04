# Project Horizon Algorithm Course

> 一套沿现有 Horizon Algorithm 路线持续生长的算法课程：用于第一次学习、以后复习，也逐渐沉淀成能够帮助初学者理解算法的材料。

Last Updated: 2026-09-04

## 1. 课程定位

这不是第二套算法路线，也不是一份按算法名字堆出来的百科全书。

课程直接课程化 Project Horizon 已批准的 Algorithm Block 01–Block 08：

- 路线与优先级以 `Project_Horizon/00_Project_Control/MASTER_STATUS.md` 为准；
- 当前真实学习状态以 `Algorithm/STATUS.md` 为准；
- 本目录中的代码、README、运行结果与 Git 历史作为学习证据；
- AcWing、洛谷、LeetCode 等外部题目只服务当前主题，不自行形成第二条刷题路线。

课程目标不是背模板或堆题量，而是逐步建立：

1. 对算法的直觉；
2. 能手推执行过程；
3. 能独立实现；
4. 能判断时间 / 空间复杂度；
5. 能定位常见错误；
6. 能把方法迁移到新题；
7. 过一段时间仍能重新提取关键知识；
8. 最终能用清楚、低门槛的方式解释给初学者。

## 2. 课程特点

### 从基础开始

先建立复杂度、数组、字符串，再进入排序、二分、双指针、前缀和等算法思想。高级内容只在基础、真实进度和 Horizon 状态允许时进入。

### 一条连续路线

每个 Block 有明确阶段目标，每节课建立在已经掌握的知识上。

### 先理解为什么，再写代码

新算法通常从：

```text
已有方法
→ 暴露问题
→ 找到可利用的结构
→ 小数据手推
→ 写成程序
```

自然出现。

### 真实代码是课程的一部分

课程保留真实写过、运行过、调试过的 `main.cpp`。README 解释为什么这样做、每一步表达什么思想、复杂度为什么得到这个结论。

### 题目服务于知识

外部题目是题源，不是第二 roadmap。只有能展示重要方法、边界、错误或迁移模式的题才值得沉淀。

### 学习和复习使用不同路径

第一次学习强调引导发现和自己实现；复习优先闭卷回忆、手推和重新实现。

## 3. 长期课程路线

| Block | 课程主题 | 正式范围 | 当前状态 |
| --- | --- | --- | --- |
| **Block 01 — Foundation** | 基础 | Complexity, arrays, strings, sorting, binary search, two pointers, prefix sums, basic algorithmic thinking | **Active** |
| Block 02 — Linear Structures | 线性结构 | Linked lists, stacks, queues, deques, hash tables | Not started |
| Block 03 — Search | 搜索 | Recursion, enumeration, DFS, BFS, backtracking, basic pruning | Not started |
| Block 04 — Trees & Priority Structures | 树与优先结构 | Binary trees, traversals, BST concepts, heap / priority_queue, DSU | Not started |
| Block 05 — Graphs | 图 | Representation, DFS/BFS, connectivity, topological sort, shortest paths, MST | Not started |
| Block 06 — Greedy | 贪心 | Sorting-based greedy, intervals, proof intuition, common patterns | Not started |
| Block 07 — Dynamic Programming | 动态规划 | State design, transitions, initialization, iteration order, 1D/2D DP, knapsack, sequence DP | Not started |
| Block 08 — Toolbox | 常用工具箱 | Bits, number theory basics, GCD, primes, fast power, monotonic structures, Trie, KMP | Not started |

Advanced 内容只在真实需要和 Horizon 状态允许时按需进入，不提前扩展主线。

## 4. 当前 Block 01

1. Time Complexity — completed
2. Space Complexity — completed
3. Arrays — completed
4. Strings — completed
5. Sorting — completed
6. Binary Search — completed
7. Two Pointers — completed
8. **Prefix Sums — current topic**
9. Basic Algorithmic Thinking — upcoming

01–07 已基于真实学习代码与原始笔记完成第一轮课程化整理。Prefix Sums 不提前代写完整课程，而是在真实学习过程中继续生长。

## 5. 单节课程结构

```text
1. 本课概览
2. 直觉 / Intuition
3. 核心思想 / Core Idea
4. 手推 / Hand Simulation
5. 实现 / Implementation
6. 复杂度 / Complexity
7. 常见错误 / Common Mistakes
8. 精选例题 / Selected Problems
9. 快速复习 / Quick Review
10. Knowledge Connections
```

## 6. 底层学习逻辑

```text
先尝试 / Pretest
→ 朴素方法
→ 暴露问题
→ Guided Discovery
→ 小数据手推
→ 自己实现
→ Test & Debug
→ Complexity & Trade-offs
→ Closed-book Retrieval
→ Spaced Review
→ Interleaving
→ Teach It
```

课程最终检验不是“看起来熟悉”，而是能否理解、手推、实现、分析、识别、重新提取、解释。

## 7. 例题辅导协议

外部例题默认先定位当前主题和真正卡点，再小数据手推、逐级提示、解释错误；除非用户明确要求，否则不直接倾倒完整答案。

## 8. 可验证学习证据

一个主题 milestone 通常应尽量留下：

- `main.cpp`：可运行核心实现 / 小练习；
- `README.md`：课程化解释与快速复习材料；
- 正确的时间 / 空间复杂度说明；
- 有意义的 Git commit。

不要为了 GitHub 图、题量或目录数量制造空成果。

## 9. 维护规则

- `Algorithm/README.md`：Course Home、长期路线和统一教学约定。
- `Algorithm/BlockXX/README.md`：Block Home。
- `Algorithm/STATUS.md`：当前真实执行状态。
- 各主题 `README.md`：单节课程。
- 各主题 `main.cpp`：能力验证。
- 路线正式变化由 Horizon Core 决定；Algorithm Specialist 不自行添加第二套 roadmap。

## 10. 当前继续位置

**Block 01 — Prefix Sums / 前缀和**

下一步继续从“为什么重复区间求和会浪费时间”建立问题，再参与推出预处理思想、手推前缀数组，最终形成新的 `main.cpp` 和课程章节。

## Migration Note

This course moved from `Project_Horizon/05_Algorithm/` to `Horizon_Learning/Algorithm/` on 2026-09-04. Existing real topic code and notes are being copied without cosmetic rewrites; pre-separation Git history remains in `Project_Horizon`.
