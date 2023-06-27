cmake_minimum_required(VERSION 3.24)
project(sorting_algorithms_main C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(sorting_algorithms_main
        0-bubble_sort.c
        1-insertion_sort_list.c
        100-shell_sort.c
        101-cocktail_sort_list.c
        102-counting_sort.c
        103-merge_sort.c
        104-heap_sort.c
        105-radix_sort.c
        106-bitonic_sort.c
        2-selection_sort.c
        3-quick_sort.c
        main.c
        print_array.c
        sort.h)
