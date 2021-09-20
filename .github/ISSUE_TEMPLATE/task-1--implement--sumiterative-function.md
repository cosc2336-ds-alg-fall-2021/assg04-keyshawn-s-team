---
name: 'Task 1: Implement `sumIterative()` Function'
about: Task 1 for Students
title: 'Task 1: Implement `sumIterative()` Function'
labels: enhancement, good first issue
assignees: ''

---

**Description**

Implement the `sumIterative()` function.  This function takes a `List` user defined data type as input, as well as specification of the sub-list values to sum, and returns this sum of the portion of the list.


**Suggested Solution**

Be careful in specifying your loop to sum up the requested values.  Be aware that the `begin` and `end` index parameters given are inclusive, so if asked to:

```
sumIterative(list, 3, 5)
```

on the list of values `[ 1 3 2 4 6 8 7 ]`, then this should sum up and return the values from index 3 up to and including index 5 of the list.  So, `4 + 6 + 8 = 18` is the result.x

**Additional Requirements**

- You are required to use an iterative solution in the implementation of this function.  This means you need to define a loop that calculates the sum.
- You are required to sum up only the requested sub-portion of the list as indicated by the last two parameters.
