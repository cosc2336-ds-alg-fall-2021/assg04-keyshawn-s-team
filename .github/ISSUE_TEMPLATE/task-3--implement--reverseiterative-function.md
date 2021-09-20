---
name: 'Task 3: Implement `reverseIterative()` Function'
about: Task 3 for Students
title: 'Task 3: Implement `reverseIterative()` Function'
labels: enhancement
assignees: ''

---

**Description**

Implement the `reverseIterative()` function.  These function reverse the items in a `List` in place.  So for example, if the list is `[ 1 2 3 4 ]`, then calling reverse on the list should reverse the values to be `[ 4 3 2 1 ]`.

This function will take the same inputs as the functions from the previous two tasks.  This function is a `void` function, it does not return an explicit result.  As mentioned, the function should reverse the given list in place, which will be the result of calling this function.

**Suggested Solution**

For your iterative solution, you should implement the following algorithm using a loop, you should do the following as a loop as long as begin is less than end `(begin < end)`:

1. Swap the values at the begin and end indexes.
2. increment begin and decrement end so next pass of loop will swap the next two values.

Notice that when `begin == end` or when `begin > end` this represents a `List` of size 1 or size 0 respectively.  So the loop terminates once you get down to a list of size 1 or smaller.

**Additional Requirements**

- This function must be iterative, using a loop to implement reversing the list items.


