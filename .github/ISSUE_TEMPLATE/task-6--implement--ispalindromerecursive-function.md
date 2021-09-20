---
name: 'Task 6: Implement `isPalindromeRecursive()` function'
about: Task 6 for Students
title: 'Task 6: Implement `isPalindromeRecursive()` function'
labels: enhancement
assignees: ''

---

**Description**

Implement the `isPalindromeRecursive()` function.  This function will have the same inputs and the same `bool` result as the task 5 non-recursive version.  The purpose of this funciton is the same, it should return `true` if the sub-list is a palindrome, and `false` if it is not.

**Suggested Solution**

base case:
- If the list is of size 1 or smaller, then the `List` is trivially a palindrome, so return `true`.

general recursive case:
- if the `begin` index value is not equal to the `end` index value, then the list can't be a palindrome, so return `false`.
- otherwise, if the ends are equal, then whether the middle part of the list is a palindrome can be determined by recursively calling the function for the indexes from `begin + 1` to `end - 1`.

**Additional Requirements**

- Your implementation must be recursive for task 6.  The unit tests can and will pass for a nonrecursive implementation, e.g. for the first `sumIterative()` method, but the task will be considered as not being done if recursion is not used to implement this second function.
- Being recursive does not mean calling another recursive function.  For example, it is not a correct implementation to use the task 5 algorithm but calling `reverseRecursive` to reverse the copy of the list.  You must use actual recursion (calling the function inside of itself) in this task.
