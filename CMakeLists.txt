cmake_minimum_required(VERSION 3.31)
project(Competitive_Programming)

set(CMAKE_CXX_STANDARD 20)

# Executable for Problem A - Only one file here
add_executable(Problem_A "Assuit_Recursion/A_Print_Recursion.cpp"
        Assuit_Recursion/D_Print_Digits_using_Recursion.cpp
        Assuit_Recursion/E_Base_Converssion.cpp
        Assuit_Recursion/F_Print_Even_Indices.cpp
)

# Executable for Problem B
add_executable(Problem_B "Assuit_Recursion/B_Print_from_1_to_N.cpp")

# Executable for Problem C
add_executable(Problem_C "Assuit_Recursion/C_Print_from_N_to_1.cpp")

# Executable for Problem D
add_executable(Problem_D "Assuit_Recursion/D_Print_Digits_using_Recursion.cpp")

# Executable for Problem E
add_executable(Problem_E "Assuit_Recursion/E_Base_Converssion.cpp")

# Executable for Problem F
add_executable(Problem_F "Assuit_Recursion/F_Print_Even_Indices.cpp")