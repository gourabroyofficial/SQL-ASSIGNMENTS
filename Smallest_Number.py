def find_smallest_number(numbers):
    smallest = numbers[0]
    for number in numbers:
        if number < smallest:
            smallest = number
    return smallest

list1 = [5, 7, 9, 14, 10, 20, 4]

smallest_number = find_smallest_number(list1)

print("The smallest number in the list is:", smallest_number)
