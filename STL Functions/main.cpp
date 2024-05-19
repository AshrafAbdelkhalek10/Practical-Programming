#include <bits/stdc++.h>
using namespace std;

void Batch_operations(){

    cout << "Example 1: Using for_each\n";
    vector<int> nums{3, -4, 2, -8, 15, 267};
    auto print = [](const int& n) { cout << n << ' '; };

    cout << "Before:\t";
    for_each(nums.begin(), nums.end(), print);
    cout << '\n';

    // Increment elements in-place
    for_each(nums.begin(), nums.end(), [](int &n) { n++; });

    cout << "After:\t";
    for_each(nums.begin(), nums.end(), print);
    cout << '\n';


    cout << "\nExample 2: Using for_each_n\n";
    vector<int> nums2{10, 20, 30, 40, 50};
    auto square = [](const int& n) { return n * n; };

    cout << "Using for_each_n: ";
    for_each_n(nums2.begin(), 3, [](int& n){ cout << n << ' '; });
    cout << endl;
}

void Search_operations() {
    cout << "Example 1: all_of, any_of, none_of\n";
    vector<int> nums1{1, 2, -3, 4, 5};

    // Check if all elements are even
    if(all_of(nums1.begin(), nums1.end(), [](int n) { return n % 2 == 0; }))
        cout << "All elements are even\n";
    else
        cout << "Not all elements are even\n";

    // Check if any element is negative
    if(any_of(nums1.begin(), nums1.end(), [](int n) { return n < 0; }))
        cout << "At least one element is negative\n";
    else
        cout << "No element is negative\n";

    // Check if none of the elements are zero
    if(none_of(nums1.begin(), nums1.end(), [](int n) { return n == 0; }))
        cout << "None of the elements are zero\n";
    else
        cout << "At least one element is zero\n";



    cout << "\nExample 2: find, find_if, find_if_not\n";
    vector<int> nums2{1, 2, 3, 4, 5};

    // Find the first occurrence of 3
    auto it = find(nums2.begin(), nums2.end(), 30);
    if(it != nums2.end()) // returns container.end if element not found
        cout << "Found " << *it << " at position " << distance(nums2.begin(), it) << endl;
    else
        cout << "3 not found\n";

    // Find the first even number
    auto it_even = find_if(nums2.begin(), nums2.end(), [](int n) { return n % 2 == 0; });
    if(it_even != nums2.end())
        cout << "Found first even number " << *it_even << " at position " << distance(nums2.begin(), it_even) << endl;
    else
        cout << "No even number found\n";

    // Find the first odd number
    auto it_odd = find_if_not(nums2.begin(), nums2.end(), [](int n) { return n % 2 == 0; });
    if(it_odd != nums2.end())
        cout << "Found first odd number " << *it_odd << " at position " << distance(nums2.begin(), it_odd) << endl;
    else
        cout << "No odd number found\n";


    cout << "\nExample 3: count, count_if\n";
    vector<int> nums3{1, 2, 2, 3, 4, 5};

    // Count occurrences of 2
    cout << "Count of 2: " << count(nums3.begin(), nums3.end(), 2) << endl;

    // Count occurrences of even numbers
    cout << "Count of even numbers: " << count_if(nums3.begin(), nums3.end(), [](int n) { return n % 2 == 0; }) << endl;
}

void Copy_operations() {

    cout << "Example 1: copy\n";
    vector<int> source1{1, 2, 3, 4, 5};
    vector<int> dest1(5);

    copy(source1.begin() + 1, source1.end(), dest1.begin());

    cout << "Source: ";
    for(int& num : source1)
        cout << num << ' ';

    cout << endl;

    cout << "Destination: ";
    for(int& num : dest1)
        cout << num << ' ';

    cout << endl;


    cout << "\nExample 2: copy_if\n";
    vector<int> source2{1, 2, 3, 4, 5};
    vector<int> dest2;

    copy_if(source2.begin(), source2.end(), back_inserter(dest2), [](int n) { return n % 2 == 0; });

    cout << "Source: ";
    for(int& num : source2)
        cout << num << ' ';
    cout << endl;

    cout << "Destination (even numbers): ";
    for(int& num : dest2)
        cout << num << ' ';
    cout << endl;


    cout << "\nExample 3: copy_backward\n";
    vector<int> source3{1, 2, 3, 4, 5};
    vector<int> dest3(5);

    copy_backward(source3.begin(), source3.end() - 1, dest3.end());

    cout << "Source: ";
    for(int& num : source3)
        cout << num << ' ';
    cout << endl;

    cout << "Destination (backward): ";
    for(int& num : dest3)
        cout << num << ' ';
    cout << endl;


    cout << "\nExample 4: move and move_backward\n";
    vector<string> source4{"one", "two", "three"};
    vector<string> dest4(3);

    move(source4.begin(), source4.end(), dest4.begin());

    cout << "Source after move: ";
    for(string& str : source4)
        cout << str << ' ';
    cout << endl;

    cout << "Destination after move: ";
    for(string& str : dest4)
        cout << str << ' ';
    cout << endl;

    vector<string> source5{"one", "two", "three"};
    vector<string> dest5(3);

    move_backward(source5.begin(), source5.end() -1, dest5.end());

    cout << "Source after move_backward: ";
    for(string& str : source5)
        cout << str << ' ';
    cout << endl;

    cout << "Destination after move_backward: ";
    for(string& str : dest5)
        cout << str << ' ';
    cout << endl;
}

void Swap_operations() {

    cout << "Example 1: swap\n";
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;


    cout << "\nExample 2: swap_ranges\n";
    vector<int> vec1{1, 2, 3, 4, 5};
    vector<int> vec2{6, 7, 8, 9, 10};
    cout << "Before swap:\n";
    cout << "Vector 1: ";
    for(int& num : vec1)
        cout << num << ' ';

    cout << "\nVector 2: ";
    for(int& num : vec2)
        cout << num << ' ';
    cout << endl;

    swap_ranges(vec1.begin(), vec1.begin() + 3, vec2.begin() + 2);
    cout << "After swap:\n";
    cout << "Vector 1: ";
    for(int& num : vec1)
        cout << num << ' ';

    cout << "\nVector 2: ";
    for(int& num : vec2)
        cout << num << ' ';
    cout << endl;


    cout << "\nExample 3: iter_swap\n";
    vector<char> chars{'a', 'b', 'c', 'd'};
    auto it1 = chars.begin();
    auto it2 = chars.begin() + 2;
    cout << "Before iter_swap: " << *it1 << " " << *it2 << endl;
    iter_swap(it1, it2);
    cout << "After iter_swap: " << *it1 << " " << *it2 << endl;
}

void Transformation_operations() {

    cout << "Example 1: transform\n";
    vector<int> source{1, 2, 3, 4, 5};
    vector<int> dest(source.size());

    transform(source.begin(), source.end(), dest.begin(), [](int x) { return x * x;});

    cout << "Source: ";
    for(int& num : source)
        cout << num << ' ';
    cout << endl;

    cout << "Destination (squared): ";
    for(int& num : dest)
        cout << num << ' ';
    cout << endl;


    cout << "\nExample 2: replace and replace_if\n";
    vector<int> nums{1, 2, 3, 4, 5};
    replace(nums.begin(), nums.end(), 3, 0);

    cout << "After replacing 3 with 0: ";
    for(int& num : nums)
        cout << num << ' ';
    cout << endl;

    vector<int> nums2{1, 2, 3, 4, 5};
    replace_if(nums2.begin(), nums2.end(), [](int x) { return x % 2 == 0; }, 0);

    cout << "After replacing even numbers with 0: ";
    for(int& num : nums2)
        cout << num << ' ';
    cout << endl;
}

void Removing_operations() {

    cout << "Example 1: remove and remove_if\n";
    vector<int> nums1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = remove(nums1.begin(), nums1.end(), 3); // does it really erase them ?
    nums1.erase(it, nums1.end());

    cout << "After removing 3: ";
    for(int& num : nums1)
        cout << num << ' ';
    cout << endl;

    vector<int> nums2{1, 2, 3, 4, 5, 6, 7, 8, 9};
    nums2.erase(remove_if(nums2.begin(), nums2.end(), [](int x) { return x % 2 == 0; }), nums2.end());

    cout << "After removing even numbers: ";
    for(int& num : nums2)
        cout << num << ' ';
    cout << endl;


    cout << "\nExample 2: unique\n";
    vector<int> nums3{1, 2, 2, 3, 3, 4, 5, 5, 5, 6};
    auto last = unique(nums3.begin(), nums3.end());
    nums3.erase(last, nums3.end());

    cout << "After removing consecutive duplicates: ";
    for(int& num : nums3)
        cout << num << ' ';
    cout << endl;
}

void OrderChanging_operations() {

    cout << "Example 1: reverse\n";
    vector<int> nums1{1, 2, 3, 4, 5};
    reverse(nums1.begin(), nums1.end());

    cout << "After reverse: ";
    for(int& num : nums1)
        cout << num << ' ';
    cout << endl;

    // Example 2: rotate
    cout << "\nExample 2: rotate\n";
    vector<int> nums2{1, 2, 3, 4, 5};
    rotate(nums2.begin(), nums2.begin() + 2, nums2.end());

    cout << "After rotate: ";
    for(int& num : nums2)
        cout << num << ' ';
    cout << endl;
}

void Sorting_operations() {

    cout << "Example 1: sort\n";
    vector<int> nums1{5, 2, 7, 1, 9, 3};
    sort(nums1.begin(), nums1.end());

    cout << "After sorting: ";
    for(int& num : nums1)
        cout << num << ' ';
    cout << endl;


    cout << "\nExample 2: is_sorted\n";
    vector<int> nums2{1, 2, 3, 4, 5};
    vector<int> nums3{3, 1, 4, 2, 5};

    cout << "Is nums2 sorted? " << (is_sorted(nums2.begin(), nums2.end()) ? "Yes" : "No") << endl;
    cout << "Is nums3 sorted? " << (is_sorted(nums3.begin(), nums3.end()) ? "Yes" : "No") << endl;


    cout << "\nExample 3: is_sorted_until\n";
    vector<int> nums4{1, 2, 4, 3, 6, 5};
    auto it = is_sorted_until(nums4.begin(), nums4.end());
    if(it != nums4.end())
        cout << "Largest sorted subrange ends at index " << distance(nums4.begin(), it - 1) << endl;
    else
        cout << "The entire range is sorted" << endl;
}

void BinarySearch_operations() { // need all to be sorted

    cout << "Example 1: binary_search\n";
    vector<int> nums1{1, 2, 3, 4, 5, 6, 7};
    int target1 = 5;
    bool found1 = binary_search(nums1.begin(), nums1.end(), target1);
    cout << "Is " << target1 << " found? " << (found1 ? "Yes" : "No") << endl;

    int target2 = 8;
    bool found2 = binary_search(nums1.begin(), nums1.end(), target2);
    cout << "Is " << target2 << " found? " << (found2 ? "Yes" : "No") << endl;


    cout << "\nExample 2: lower_bound\n";
    vector<int> nums2{1, 2, 3, 3, 3, 4, 5};
    int target3 = 3;
    auto lb = lower_bound(nums2.begin(), nums2.end(), target3);
    if(lb != nums2.end())
        cout << "First element not less than " << target3 << " is " << *lb << " at index " << distance(nums2.begin(), lb) << endl;
    else
        cout << "No element not less than " << target3 << " found" << endl;


    cout << "\nExample 3: upper_bound\n";
    int target4 = 3;
    auto ub = upper_bound(nums2.begin(), nums2.end(), target4);
    if(ub != nums2.end())
        cout << "First element greater than " << target4 << " is " << *ub << " at index " << distance(nums2.begin(), ub) << endl;
    else
        cout << "No element greater than " << target4 << " found" << endl;

    cout << "\nExample 4: equal_range\n";
    auto range = equal_range(nums2.begin(), nums2.end(), target3);
    cout << "Range of elements matching " << target3 << ": [" << distance(nums2.begin(), range.first) << ", " << distance(nums2.begin(), range.second) << ")" << endl;
}

void Set_operations() { // need all to be sorted

    cout << "Example 1: includes\n";
    vector<int> nums1{1, 2, 3, 4, 5, 6, 7};
    vector<int> subseq1{2, 4, 6};
    bool isSubseq1 = includes(nums1.begin(), nums1.end(), subseq1.begin(), subseq1.end()); // O(2(N + M))
    cout << "Is {2, 4, 6} a subsequence of {1, 2, 3, 4, 5, 6, 7}? " << (isSubseq1 ? "Yes" : "No") << endl;

    vector<int> subseq2{2, 4, 8};
    bool isSubseq2 = includes(nums1.begin(), nums1.end(), subseq2.begin(), subseq2.end());
    cout << "Is {2, 4, 8} a subsequence of {1, 2, 3, 4, 5, 6, 7}? " << (isSubseq2 ? "Yes" : "No") << endl;


    cout << "\nExample 2: set_union\n";
    vector<int> set1{1, 2, 3, 4, 5};
    vector<int> set2{3, 4, 5, 6, 7};
    vector<int> unionSet(set1.size() + set2.size());

    auto it_union = set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), unionSet.begin()); // O(2(N + M))
    unionSet.resize(distance(unionSet.begin(), it_union));

    cout << "Union of {1, 2, 3, 4, 5} and {3, 4, 5, 6, 7}: ";
    for(int& num : unionSet)
        cout << num << ' ';
    cout << endl;

    // Example 3: set_intersection
    cout << "\nExample 3: set_intersection\n";
    vector<int> intersectSet(set1.size() + set2.size());

    auto it_intersect = set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), intersectSet.begin()); // O(2(N + M))
    intersectSet.resize(distance(intersectSet.begin(), it_intersect));

    cout << "Intersection of {1, 2, 3, 4, 5} and {3, 4, 5, 6, 7}: ";
    for(int& num : intersectSet)
        cout << num << ' ';
    cout << endl;
}

void MinMax_operations() {

    cout << "Example 1: max\n";
    int a = 10, b = 20;
    cout << "Max of " << a << " and " << b << " is " << max(a, b) << endl;
    cout << "Max of " << a << " and " << b << " and " << 23 << " is " << max({a, b, 23}) << endl;


    cout << "\nExample 2: max_element\n";
    vector<int> nums1{3, 7, 2, 9, 5};
    auto maxElem = max_element(nums1.begin(), nums1.end());
    cout << "Max element in {3, 7, 2, 9, 5} is " << *maxElem << " at index " << distance(nums1.begin(), maxElem) << endl;


    cout << "\nExample 3: min\n";
    int x = 15, y = 8;
    cout << "Min of " << x << " and " << y << " is " << min(x, y) << endl;


    cout << "\nExample 4: min_element\n";
    vector<int> nums2{3, 7, 2, 9, 5};
    auto minElem = min_element(nums2.begin(), nums2.end());
    cout << "Min element in {3, 7, 2, 9, 5} is " << *minElem << " at index " << distance(nums2.begin(), minElem) << endl;


    cout << "\nExample 5: minmax\n";
    int p = 25, q = 30;
    auto [minVal, maxVal] = minmax(p, q);
    cout << "Min of " << p << " and " << q << " is " << minVal << ", and max is " << maxVal << endl; // return pair

    cout << "Example with initializer list:\n";
    pair<int, int> res = minmax({5, 10, 3, 7, 8});
    cout << "Min value: " << res.first << ", Max value: " << res.second << endl;


    cout << "\nExample 6: minmax_element\n";
    vector<int> nums3{3, 7, 2, 9, 5};
    auto [minIt, maxIt] = minmax_element(nums3.begin(), nums3.end());
    cout << "Min element in {3, 7, 2, 9, 5} is " << *minIt << " at index " << distance(nums3.begin(), minIt) << endl;
    cout << "Max element in {3, 7, 2, 9, 5} is " << *maxIt << " at index " << distance(nums3.begin(), maxIt) << endl;
}

void Permutation_operations() {

    cout << "Example 1: next_permutation\n";
    vector<int> nums1{1, 2, 3};
    do{
        cout << "Permutation: ";
        for(int& num : nums1)
        cout << num << ' ';
        cout << endl;
    }while(next_permutation(nums1.begin(), nums1.end()));


    cout << "\nExample 2: prev_permutation\n";
    vector<int> nums2{3, 2, 1};
    do{
        cout << "Permutation: ";
        for(int& num : nums2)
        cout << num << ' ';
        cout << endl;
    }while(prev_permutation(nums2.begin(), nums2.end()));


    cout << "\nExample 3: is_permutation\n";
    vector<int> nums3{1, 2, 3, 4};
    vector<int> perm{3, 2, 1, 4};
    if(is_permutation(nums3.begin(), nums3.end(), perm.begin()))
        cout << "perm is a permutation of nums3\n";
    else
        cout << "perm is not a permutation of nums3\n";
}

void Numeric_operations() {

    cout << "Example 1: accumulate\n";
    vector<int> nums1{1, 2, 3, 4, 5};
    int sum = accumulate(nums1.begin(), nums1.end(), 0);
    cout << "Sum of elements: " << sum << endl;


    cout << "\nExample 2: partial_sum\n";
    vector<int> nums2{1, 2, 3, 4, 5};
    vector<int> partialSums(nums2.size()+1);
    partial_sum(nums2.begin(), nums2.end(), partialSums.begin());
    cout << "Partial sums: ";
    for(int& num : partialSums)
        cout << num << ' ';
    cout << endl;
}

void arithmetic_operations() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> result(nums.size());

    // plus: X + Y
    transform(nums.begin(), nums.end(), result.begin(), [](int x) { return plus<int>()(x, 1); });
    cout << "After plus (X + 1): ";
    for(int& num : result)
        cout << num << ' ';
    cout << '\n';

    // minus: X - Y
    transform(nums.begin(), nums.end(), result.begin(), [](int x) { return minus<int>()(x, 1); });
    cout << "After minus (X - 1): ";
    for(int& num : result)
        cout << num << ' ';
    cout << '\n';

    // multiplies: X * Y
    transform(nums.begin(), nums.end(), result.begin(), [](int x) { return multiplies<int>()(x, 2); });
    cout << "After multiplies (X * 2): ";
    for(int& num : result)
        cout << num << ' ';
    cout << '\n';

    // divides: X / Y
    vector<int> nums_div = {2, 4, 6, 0, 10}; // to avoid division by zero
    transform(nums_div.begin(), nums_div.end(), result.begin(), [](int x) { return divides<int>()(x, 2); });
    cout << "After divides (X / 2): ";
    for(int& num : result)
        cout << num << ' ';
    cout << '\n';

    // modulus: X % Y
    vector<int> nums_mod = {5, 10, 15, 20, 25};
    transform(nums_mod.begin(), nums_mod.end(), result.begin(), [](int x) { return modulus<int>()(x, 4); });
    cout << "After modulus (X % 4): ";
    for(int& num : result)
        cout << num << ' ';
    cout << '\n';

    // negate: -X
    transform(nums.begin(), nums.end(), result.begin(), negate<int>());
    cout << "After negate (-X): ";
    for(int& num : result)
        cout << num << ' ';
    cout << '\n';
}

void comparison_operations() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 0, 4, 5};

    // equal_to: Find if all elements in nums1 are equal to corresponding elements in nums2
    bool all_equal = equal(nums1.begin(), nums1.end(), nums2.begin(), equal_to<int>());
    cout << "All elements equal between nums1 and nums2: " << boolalpha << all_equal << '\n';

    // not_equal_to: Check if any element in nums1 is not equal to the corresponding element in nums2
    bool any_not_equal = any_of(nums1.begin(), nums1.end(), [&](int x) {
        static int index = 0;
        return not_equal_to<int>()(x, nums2[index++]);
    });
    cout << "Any element not equal between nums1 and nums2: " << any_not_equal << '\n';

    // greater: Count elements in nums1 that are greater than corresponding elements in nums2
    int count_greater = count_if(nums1.begin(), nums1.end(), [&](int x) {
        static int index = 0;
        return greater<int>()(x, nums2[index++]);
    });
    cout << "Count of elements in nums1 greater than corresponding elements in nums2: " << count_greater << '\n';

    // less: Find the first element in nums1 that is less than the corresponding element in nums2
    auto it_less = find_if(nums1.begin(), nums1.end(), [&](int x) {
        static int index = 0;
        return less<int>()(x, nums2[index++]);
    });
    if (it_less != nums1.end())
        cout << "First element in nums1 less than corresponding element in nums2: " << *it_less << '\n';
    else
        cout << "No element in nums1 is less than the corresponding element in nums2\n";

    // greater_equal: Check if all elements in nums1 are greater than or equal to the corresponding elements in nums2
    bool all_greater_equal = all_of(nums1.begin(), nums1.end(), [&](int x) {
        static int index = 0;
        return greater_equal<int>()(x, nums2[index++]);
    });
    cout << "All elements in nums1 are greater than or equal to corresponding elements in nums2: " << all_greater_equal << '\n';

    // less_equal: Sort nums1 and nums2, then check if nums1 is less than or equal to nums2
    sort(nums1.begin(), nums1.end(), less_equal<int>());
    sort(nums2.begin(), nums2.end(), less_equal<int>());
    bool sorted_less_equal = equal(nums1.begin(), nums1.end(), nums2.begin(), less_equal<int>());
    cout << "After sorting, all elements in nums1 are less than or equal to corresponding elements in nums2: " << sorted_less_equal << '\n';
}

void logical_and_bitwise_operations() {
    // Logical operations
    vector<bool> bool_vector1 = {true, false, true, false, true};
    vector<bool> bool_vector2 = {true, true, false, false, true};
    vector<bool> result_logical(bool_vector1.size());

    // logical_and: X && Y
    transform(bool_vector1.begin(), bool_vector1.end(), bool_vector2.begin(), result_logical.begin(), logical_and<>());
    cout << "Result of logical_and (X && Y): ";
   for(const auto& num : result_logical)
        cout << num << ' ';
    cout << '\n';

    // logical_or: X || Y
    transform(bool_vector1.begin(), bool_vector1.end(), bool_vector2.begin(), result_logical.begin(), logical_or<>());
    cout << "Result of logical_or (X || Y): ";
    for(const auto& num : result_logical)
        cout << num << ' ';
    cout << '\n';

    // logical_not: !X
    transform(bool_vector1.begin(), bool_vector1.end(), result_logical.begin(), logical_not<>());
    cout << "Result of logical_not (!X): ";
    for(const auto& num : result_logical)
        cout << num << ' ';
    cout << '\n';

    // Bitwise operations
    vector<int> int_vector1 = {5, 10, 15, 20, 25};
    vector<int> int_vector2 = {3, 6, 9, 12, 15};
    vector<int> result_bitwise(int_vector1.size());

    // bit_and: X & Y
    transform(int_vector1.begin(), int_vector1.end(), int_vector2.begin(), result_bitwise.begin(), bit_and<>());
    cout << "Result of bit_and (X & Y): ";
    for(int& num : result_bitwise)
        cout << num << ' ';
    cout << '\n';

    // bit_or: X | Y
    transform(int_vector1.begin(), int_vector1.end(), int_vector2.begin(), result_bitwise.begin(), bit_or<>());
    cout << "Result of bit_or (X | Y): ";
    for(int& num : result_bitwise)
        cout << num << ' ';
    cout << '\n';

    // bit_xor: X ^ Y
    transform(int_vector1.begin(), int_vector1.end(), int_vector2.begin(), result_bitwise.begin(), bit_xor<>());
    cout << "Result of bit_xor (X ^ Y): ";
    for(int& num : result_bitwise)
        cout << num << ' ';
    cout << '\n';

    // bit_not: ~X
    transform(int_vector1.begin(), int_vector1.end(), result_bitwise.begin(), bit_not<>());
    cout << "Result of bit_not (~X): ";
    for(int& num : result_bitwise)
        cout << num << ' ';
    cout << '\n';
}

int main() {

    Batch_operations();
    Search_operations();

    Copy_operations();
    Swap_operations();
    Transformation_operations();
    Removing_operations();
    OrderChanging_operations();
    Sorting_operations();
    BinarySearch_operations();
    Set_operations();
    MinMax_operations();
    Permutation_operations();
    Numeric_operations();
    arithmetic_operations();
    comparison_operations();
    logical_and_bitwise_operations();

    return 0;
}
