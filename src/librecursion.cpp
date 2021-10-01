/** @file librecursion.cpp
 * @brief Recursive function implementations for Assignment Recursion:
 *   Writing and Understanding Recursive Functions
 *
 * @author Jane Programmer
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment Recursion
 * @date   June 1, 2021
 *
 * Implement several functions using both iteration and recursion.
 * For more practice with using basic C/C++ arrays, we will
 * write functions taking arrays as input to be manipulated.
 *
 * This file contains the actual implementation of the functions
 * and code you are required to complete for Assignment Recursion.
 * Make sure you modify the file header information to be correct
 * for the code you are creating.
 */
#include "librecursion.hpp"
#include "List.hpp"
// In this assignment you will not be given the function documentation
// comments ahead of time.  But you are required to write function
// documentation for all of your functions for this assignment.  You must
// use the function comment block format you have seen in previous
// assignments, including giving a name, short description, and
// documenting parameters and return value using @param and @returns
// tags respectively.

/** sumIterative member function
 * Provide a way to calculate sum of values without changing any data in the list,
 * It reads the provided list of integers, read between the parameters of indeces,
 * calulate the sum value for those integers and return that value.
 *
 * @param values The List of Integer
 *
 * @param begin The starting index of the list to read the values from.
 *
 * @param end The ending index of the list to read the values until reached to that index
 *
 * @returns int Returns calculated sum value
 *
 */
int sumIterative(List& values, int begin, int end)
{
  int sum = 0;
  for (int i = begin; i <= end; i++)
  {
    sum += values[i];
  }
  return sum;
}
/** sumRecursive member function
 * Provide a way to calculate sum of values by using recursive approach.
 * It breaks the whole sum into a small piece and then recursively recall itself for all values,
 * calulate the sum value for those integers and return that value.
 *
 * @param values The List of Integer
 *
 * @param begin The starting index of the list to read the values from.
 *
 * @param end The ending index of the list to read the values until reached to that index
 *
 * @returns int Returns calculated sum value
 *
 */
int sumRecursive(List& list, int begin, int end)
{
  if (begin == end)
  {
    return list[begin];
  }
  else
  {
    if (list.getSize() == 0)
      return 0;
    else if (list.getSize() == 1)
      return list[begin];
    else
    {
      begin = begin + 1;
      return list[begin - 1] + sumRecursive(list, begin, end);
    }
  }
}
/** reverseIterative member function
 * Provide a way to reverse of values of provided list by using iterative approach.
 * It uses a for loop and reverse the values inside list by swaping.
 * This function does not return any value.
 *
 * @param values The List of Integer
 *
 * @param begin The starting index of the list to read the values from.
 *
 * @param end The ending index of the list to read the values until reached to that index
 *
 * @returns it does not return any value so its type is void
 *
 */
void reverseIterative(List& list, int begin, int end)
{
  int temp = 0;
  int j = end;
  for (int i = begin; i < j; i++, j--)
  {
    temp = list[i];
    list[i] = list[j];
    list[j] = temp;
  }
}
/** reverseRecursive member function
 * Provide a way to reverse of values of provided list by using recursive approach.
 * It swaps the ending index value with starting index
 * and recall itself by decrementing ending index and incrementing starting index..
 * This function does not return any value.
 *
 * @param values The List of Integer
 *
 * @param begin The starting index of the list to read the values from.
 *
 * @param end The ending index of the list to read the values until reached to that index
 *
 * @returns it does not return any value so its type is void
 *
 */
void reverseRecursive(List& list, int begin, int end)
{
  if (begin == end)
  {
    return;
  }
  else
  {
    int temp = 0;
    if (begin < end)
    {

      /* Swap the position of an element. */
      temp = list[begin];
      list[begin] = list[end];
      list[end] = temp;
      /*calling itself
       *Incrementing start and decrementing end
       */
      reverseRecursive(list, begin + 1, end - 1);
    }
  }
}
/** isPalindromeIterative member function
 * Provide a way to check that the list of integers is plaindrom pattren
 * or not by using iterative approach.
 * It reusing reverse member function on a copy of list and the recomparing it with original list,
 * if lists are still same then it is plaindrome otherwise not.
 * This function return boolean value.
 *
 * @param values The List of Integer
 *
 * @param begin The starting index of the list to read the values from.
 *
 * @param end The ending index of the list to read the values until reached to that index
 *
 * @returns it returns a boolean value which indicates that the list is plaindrom or not
 *
 */
bool isPalindromeIterative(List list, int begin, int end)
{
  List copy = list;
  reverseIterative(copy, begin, end);
  if (copy.str() == list.str())
    return true;
  else
    return false;
}
/** isPalindromeRecursive member function
 * Provide a way to check that the list of integers is plaindrom
 * or not by using recursive approach.
 * It recalls itself and compare values from staring and ending indeces.
 * If values does not match then return false else true.
 * This function returns boolean value indicating list is plaindrom or not.
 *
 * @param values The List of Integer
 *
 * @param begin The starting index of the list to read the values from.
 *
 * @param end The ending index of the list to read the values until reached to that index
 *
 * @returns it returns a boolean value which indicates that the list is plaindrom or not
 *
 */
bool isPalindromeRecursive(List list, int begin, int end)
{
  if (list.getSize() <= 1)
    return true;
  else
  {
    if (begin < end)
    {
      if (list[begin] != list[end])
        return false;
      else
      {
        return isPalindromeRecursive(list, begin + 1, end - 1);
      }
    }
    else
      return true;
  }
}