 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME stack)

 add_subdirectory(monotone-stack)

 add_library(${TARGET_NAME}
         STATIC
         valid-parentheses.cpp
         score-of-parentheses.cpp
         evaluate-reverse-polish-notation.cpp
         largest-rectangle-in-histogram.cpp
         minimum-remove-to-make-valid-parentheses.cpp
         exclusive-time-of-functions.cpp
         asteroid-collision.cpp
         remove-all-adjacent-duplicates-in-string.cpp
         recover-a-tree-from-preorder-traversal.cpp basic-calculator.cpp simplify-path.cpp minimum-add-to-make-parentheses-valid.cpp next-greater-element-i.cpp baseball-game.cpp reverse-substrings-between-each-pair-of-parentheses.cpp remove-all-adjacent-duplicates-in-string-ii.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})
