---
name: 'Task 4: Implement `reverseRecursive()` Function'
about: Task 4 for Students
title: 'Task 4: Implement `reverseRecursive()` Function'
labels: enhancement
assignees: ''

---

**Description**

The fourth task is to implement the `reverseRecursive()` function.  This function will have the same signature as the iterative version of reverse, it is a `void` function that takes a `List` reference and `begin` and `end` indexes as input.  This function should perform the same operation as task 3 and reverse the values of the list inplace.

The purpose of `digitAtPosition()` is to index into the `LargeInteger` and return the digit at a particular location (digit place) of the instance.


**Suggested Solution**

base case:
- The base case(s) should be similar for this recursive function as for your first one.  A list of size 0 or size 1 is already the reverse of itself.  So whenever asked to reverse a sub-list that is 1 or smaller in size, you can simply do nothing (return).

general recursive case:
- For the general recursive case, you should first just swap the values from the begin and end indexes of the sub-list.
- Then you can reverse the middle portion of the list by calling your `reverseRecursive()` recursively on the sub-list from `begin + 1` to `end + 1`.


**Additional Requirements**

- Your implementation must be recursive for task 4.  The unit tests can and will pass for a nonrecursive implementation, e.g. for the first sumIterative()` method, but the task will be considered as not being done if recursion is not used to implement this second function.


