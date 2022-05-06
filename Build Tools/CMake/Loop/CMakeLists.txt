cmake_minimum_required(3.2)
set(list1 A B)
set(list2)
set(foo WillNotBeShown)

foreach(loopVar IN LISTS list1 list2 ITEMS foo bar)
    message("Iteration for: ${loopVar}")
endforeach()