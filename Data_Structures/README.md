# Project Horizon Data Structures / 数据结构

> 面向大学课程与长期工程基础的提前掌握线程。目标不是多开一条主线，而是把必须掌握的数据结构知识提前学会，减少以后课堂、算法和工程中的重复学习成本。

Last Updated: 2026-09-05

## 1. Thread Position

Data Structures is an **Active — Academic Acceleration Support** Specialist Thread inside `Horizon_Learning`.

Its job is to help the learner **master important data-structure concepts before or alongside the university course**, with real implementation and transfer evidence.

It is **not**:

- a second Algorithm roadmap;
- a generic school-homework thread;
- a reason to add another independent main technical line;
- a requirement to relearn material already demonstrated elsewhere.

## 2. Why This Thread Exists

Many data-structure ideas are prerequisites for later algorithms, systems work, embedded/software engineering and the university course itself. Waiting until the classroom first introduces every concept can create avoidable learning bottlenecks.

The thread therefore optimizes for:

> **earlier independent capability + lower later learning friction**

rather than for matching the classroom pace exactly.

## 3. Boundary with Algorithm

Data Structures and Algorithm overlap, but they have different primary questions.

### Data Structures owns

- abstract structure / representation;
- invariants and internal organization;
- core operations and their cost;
- implementation mechanics;
- comparison between representations;
- course-aligned terminology and understanding when official materials are available;
- practical ability to build, inspect and debug structures.

### Algorithm owns

- choosing techniques to solve problems;
- algorithmic patterns and problem solving;
- proofs / reasoning about algorithms;
- contest / interview-style transfer when relevant;
- the existing Block 01–08 Algorithm route.

### Shared-Mastery Rule

**Do not learn the same thing twice merely because two threads touch it.**

If one thread already provides strong evidence that a concept is independently understood and implemented, the other thread should reuse that evidence and test only the capability that is genuinely new.

Examples:

- A linked-list implementation mastered here does not need to be reteached from zero in Algorithm Block 02.
- Algorithm may still test whether the learner can recognize when a linked list is or is not useful in a problem.
- A stack already mastered through an Algorithm task may satisfy the Data Structures prerequisite, while this thread may only add representation / implementation details missing from the prior evidence.

Prefer **cross-reference and transfer** over duplicate notes, duplicate code and duplicate study hours.

## 4. Boundary with Academic Operations

`Horizon_Academic` owns factual university-course evidence such as the official syllabus, textbook, assessment scheme, lecture coverage, labs, assignments and grades.

This thread owns **subject-matter learning**.

When the user provides official course materials, textbook chapters, slides or teacher requirements, those materials become the primary basis for course-specific teaching and terminology. General knowledge or external material should supplement them rather than silently replace them.

## 5. Learning Mode

The first real trials should use:

`Horizon_Skills/adaptive-guided-learning/SKILL.md`

Default behavior:

```text
one concrete capability
→ quick diagnosis
→ minimum necessary explanation
→ one meaningful task chunk
→ inspect real performance
→ enlarge the step if correct / repair only the real gap if blocked
→ independent transfer or implementation
```

Avoid:

- long passive reading as a default prerequisite;
- repeated trivial one-question-at-a-time confirmation;
- asking questions whose answers would not change the next teaching step;
- giving complete solutions before a meaningful attempt;
- polishing notes before capability exists.

Target metric:

> **Time-to-Independent-Capability**

## 6. Provisional Foundation Map

Until the actual university syllabus / textbook is supplied, use this only as a **provisional generic map**, not as a claim about the school's official order:

1. Data structure / ADT / operation-cost intuition
2. Linear lists and representation choices
3. Linked structures
4. Stacks and queues
5. Trees and tree traversal
6. Priority structures / heaps where course-relevant
7. Graph representation and traversal foundations
8. Searching / sorting structures and related course topics where required

The route should be adjusted when real course evidence arrives. Do not expand merely for completeness.

## 7. Implementation Language

The university course's required implementation language is **not yet verified here**.

- If official course material specifies C / C++ / another language, align course-facing work to that requirement.
- Until then, the learner's existing C++ capability may be used for provisional implementation exercises when useful.
- Do not present provisional C++ work as proof of a specific school-language requirement.

## 8. Evidence Standard

A useful structure milestone should usually demonstrate several of:

- explain what problem the structure solves;
- describe its representation and invariant;
- implement core operations without following a tutorial line by line;
- reason about time / space cost;
- debug a broken implementation;
- compare at least one alternative representation when meaningful;
- use the structure in a nearby unfamiliar task;
- retain enough understanding to reconstruct the key mechanism later.

Real capability is more important than a large note archive.

## 9. Initial Gate

**Linear Structure Foundation v1**

The learner should be able to:

- explain the idea of a linear structure / linear list at an intuitive level;
- distinguish sequential and linked representation conceptually;
- explain the main trade-offs between them;
- implement a small set of core operations in the course-aligned language once that language is known;
- reason about the operation costs;
- complete one unfamiliar transfer / debugging task without tutorial-style guidance.

If official course materials indicate a different starting point, follow the real course evidence instead.

## 10. Operating Rule

This thread exists to **save future time**, not consume more of it.

Whenever new work is proposed, ask:

> Is this creating a new capability, or are we duplicating capability already proved in Algorithm / coursework?

If it is duplicate, reuse the evidence and move on.
