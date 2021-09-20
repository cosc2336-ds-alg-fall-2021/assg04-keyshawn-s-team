---
name: 'Task 2: Implement `sumRecursive()` Function'
about: Task 2 for Students
title: 'Task 2: Implement `sumRecursive()` Function'
labels: enhancement
assignees: ''

---

**Description**

The second task is to implement the `sumRecursive()` function.  This function has the same signature as the first `sumIterative()` function.

**Suggested Solution**

This implementation must implement a recursive algorithm.  You should use the following

base case(s):
1. If the sub-list that is asked to be summed is size 0, return a sum of 0.
2. If the sub-list is of size 1, return the value as the sum.

general case:
- add the value at the `begin` index to the sum returned by calling this function recursively
  on the sub-list from `begin + 1` to `end`.

**Additional Requirements**

- Your implementation must be recursive for task 2.  The unit tests can and will pass for a nonrecursive implementation, e.g. for the first sumIterative()` method, but the task will be considered as not being done if recursion is not used to implement this second function.
