cmake_minimum_required(VERSION 3.31)
project(Competitive_Programming)

set(CMAKE_CXX_STANDARD 20)

add_executable(General_Practice "main.cpp")

add_executable(Problem_A "Assuit_Recursion/A_Print_Recursion.cpp"
        Assuit_Recursion/L_Summation.cpp
        Assuit_Recursion/M_Suffix_Sum.cpp
        Assuit_Recursion/N_Sum_of_a_Matrix.cpp
        Assuit_Recursion/O_Fibonacci.cpp
)
add_executable(Problem_B "Assuit_Recursion/B_Print_from_1_to_N.cpp")
add_executable(Problem_C "Assuit_Recursion/C_Print_from_N_to_1.cpp")
add_executable(Problem_D "Assuit_Recursion/D_Print_Digits_using_Recursion.cpp")
add_executable(Problem_E "Assuit_Recursion/E_Base_Converssion.cpp")
add_executable(Problem_F "Assuit_Recursion/F_Print_Even_Indices.cpp")
add_executable(Problem_G "Assuit_Recursion/G_Pyramid.cpp")
add_executable(Problem_H "Assuit_Recursion/H_Inverted_Pyramid.cpp")
add_executable(Problem_I "Assuit_Recursion/I_Count_Vowels.cpp")
add_executable(Problem_J "Assuit_Recursion/J_Factorial.cpp")
add_executable(Problem_K "Assuit_Recursion/K_Max_Number.cpp")
add_executable(Problem_L "Assuit_Recursion/L_Summation.cpp")
add_executable(Problem_M "Assuit_Recursion/M_Suffix_Sum.cpp")
add_executable(Problem_N "Assuit_Recursion/N_Sum_of_a_Matrix.cpp")
add_executable(Problem_O "Assuit_Recursion/O_Fibonacci.cpp")