# C++ STL Algorithms Usage Example

This repository provides examples of using various Standard Template Library (STL) algorithms in C++. The examples cover a wide range of operations such as batch operations, search operations, copy operations, swap operations, transformation operations, removing operations, order-changing operations, sorting operations, binary search operations, set operations, min-max operations, permutation operations, numeric operations, arithmetic operations, comparison operations, and logical/bitwise operations.

## Usage

Each algorithm is demonstrated in a separate function within the `main.cpp` file. To view the example of a specific algorithm, navigate to the corresponding function within the file.

# C++ Standard Library Functions Overview

## Non-modifying Sequence Operations

### Batch Operations
- `for_each`: Applies a function to a range of elements.
- `for_each_n`: Applies a function object to the first N elements of a sequence.

### Search Operations
- `all_of`: Checks if a predicate is true for all elements in a range.
- `any_of`: Checks if a predicate is true for any element in a range.
- `none_of`: Checks if a predicate is true for none of the elements in a range.
- `find`: Finds the first occurrence of a value in a range.
- `find_if`: Finds the first element satisfying specific criteria.
- `find_if_not`: Finds the first element not satisfying specific criteria.
- `count`: Returns the number of elements equal to a given value in a range.
- `count_if`: Returns the number of elements satisfying specific criteria in a range.

## Modifying Sequence Operations

### Copy Operations
- `copy`: Copies a range of elements to a new location.
- `copy_if`: Copies elements from one range to another based on a condition.
- `copy_backward`: Copies a range of elements in backward order.
- `move`: Moves a range of elements to a new location.
- `move_backward`: Moves a range of elements to a new location in backward order.

### Swap Operations
- `swap`: Swaps the values of two objects.
- `swap_ranges`: Swaps two ranges of elements.
- `iter_swap`: Swaps the elements pointed to by two iterators.

### Transformation Operations
- `transform`: Applies a function to a range of elements, storing results in a destination range.
- `replace`: Replaces all values equal to a given value in a range.
- `replace_if`: Replaces all values satisfying specific criteria with another value.

### Removing Operations
- `remove`: Removes all elements equal to a given value from a range.
- `remove_if`: Removes all elements satisfying specific criteria from a range.
- `unique`: Removes consecutive duplicate elements in a range.

### Order-changing Operations
- `reverse`: Reverses the order of elements in a range.
- `rotate`: Rotates the order of elements in a range.

### Sorting and Related Operations
- `sort`: Sorts a range into ascending order.
- `is_sorted`: Checks whether a range is sorted into ascending order.
- `is_sorted_until`: Finds the largest sorted subrange.

### Binary Search Operations
- `binary_search`: Determines if an element exists in a partially ordered range.
- `lower_bound`: Returns an iterator to the first element not less than a given value.
- `upper_bound`: Returns an iterator to the first element greater than a given value.
- `equal_range`: Returns a range of elements matching a specific key.

### Set Operations
- `includes`: Returns true if one sequence is a subsequence of another.
- `set_union`: Computes the union of two sets.
- `set_intersection`: Computes the intersection of two sets.

### Minimum/Maximum Operations
- `max`: Returns the greater of two values.
- `max_element`: Returns the largest element in a range.
- `min`: Returns the smaller of two values.
- `min_element`: Returns the smallest element in a range.
- `minmax`: Returns the smaller and larger of two elements.
- `minmax_element`: Returns the smallest and the largest elements in a range.

### Permutation Operations
- `next_permutation`: Generates the next greater lexicographic permutation of a range.
- `prev_permutation`: Generates the next smaller lexicographic permutation of a range.
- `is_permutation`: Determines if a sequence is a permutation of another sequence.

### Numeric Operations
- `accumulate`: Sums up or folds a range of elements.
- `partial_sum`: Computes the partial sum of a range of elements.

## Function Objects

### Arithmetic Operations
- `plus`: Addition operation (X + Y).
- `minus`: Subtraction operation (X - Y).
- `multiplies`: Multiplication operation (X * Y).
- `divides`: Division operation (X / Y).
- `modulus`: Modulus operation (X % Y).
- `negate`: Unary negation (-X).

### Comparisons Operations
- `equal_to`: Equality comparison (X == Y).
- `not_equal_to`: Inequality comparison (X != Y).
- `greater`: Greater than comparison (X > Y).
- `less`: Less than comparison (X < Y).
- `greater_equal`: Greater than or equal to comparison (X >= Y).
- `less_equal`: Less than or equal to comparison (X <= Y).

### Logical and Bitwise Operations
- `logical_and`: Logical AND operation (X && Y).
- `logical_or`: Logical OR operation (X || Y).
- `logical_not`: Logical NOT operation (!X).
- `bit_and`: Bitwise AND operation (X & Y).
- `bit_or`: Bitwise OR operation (X | Y).
- `bit_xor`: Bitwise XOR operation (X ^ Y).
- `bit_not`: Bitwise NOT operation (~X).
