---
name: 'Task 5: Implement `isPalindromeIterative()` Function'
about: Task 5 for Students
title: 'Task 5: Implement `isPalindromeIterative()` Function'
labels: enhancement
assignees: ''

---

**Description**

Task 5 is to implement the `isPalindromeIterative()` function.  We usually think of words as palindromes, but the concept is the same here for a list of integers. If we have a list, say `[ 1 2 3 2 1 ]` we can describe this as a palindrome, because the values are the same whether we go forwards or backwards through the list.  However the list `[ 1 2 3 2 ]` is not a palindrome by this definition.

The `isPalindromeIterative()` function takes the same input parameters as all of the previous functions.  These function are `bool` functions.  They return a boolean result of `true` if the given list is a palindrome and `false` if it is not a palindrome.

**Suggested Solution**

An easy way to determine if a sub-list is a palindrome or not is to:

1. make a copy of the `List`
2. reverse the sub-list portion of this copy
3. Compare the original and the copy with the reverse sub-list.  
   - If they are equal, then the reversed sup-list was a palindrome, so you can return `true`.
   - If they are not equal after the reverse, then the  sub-list was not a palindrome.

**Additional Requirements**

- You must reuse one of your reverse functions in the implementation of this one.  Using
  a function that uses recursion doesn't make this function a recursive function.  This 
  function uses a straight forward 3-steps to determine if a list is a palindrome or not.
  

