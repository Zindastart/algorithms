 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME maths)

 add_library(${TARGET_NAME}
         STATIC
         plus-one.cpp
         reverse-integer.cpp
         count-primes.cpp
         ugly-number.cpp
         add-binary.cpp
         gcd-lcm.cpp
         check-if-it-is-a-straight-line.cpp
         valid-perfect-square.cpp
         find-n-unique-integers-sum-up-to-zero.cpp
         valid-triangle-number.cpp
         count-numbers-with-unique-digits.cpp
         maximum-of-absolute-value-expression.cpp
         fizz-buzz.cpp palindrome-number.cpp
         integer-to-roman.cpp
         roman-to-integer.cpp
         power-of-three.cpp
         multiply-strings.cpp
         integer-to-english-words.cpp
         self-dividing-numbers.cpp
         powx-n.cpp
         fraction-to-recurring-decimal.cpp
         arithmetic-slices.cpp
         point-of-lattice.cpp
         geometry/check-if-it-is-a-straight-line.cpp
         geometry/circle-and-rectangle-overlapping.cpp
         geometry/minimum-time-visiting-all-points.cpp
         geometry/maximum-number-of-darts-inside-of-a-circular-dartboard.cpp
         geometry/surface-area-of-3d-shapes.cpp
         geometry/erect-the-fence.cpp
         geometry/minimum-area-rectangle-ii.cpp
         number-of-burgers-with-no-waste-of-ingredients.cpp
         play-with-chips.cpp
         arranging-coins.cpp
         moving-stones-until-consecutive.cpp geometry/max-points-on-a-line.cpp factorial-trailing-zeroes.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_CURRENT_SOURCE_DIR})