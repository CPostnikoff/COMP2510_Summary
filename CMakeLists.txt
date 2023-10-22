cmake_minimum_required(VERSION 3.26)
project(midtermTesting C)

set(CMAKE_C_STANDARD 11)

add_executable(midtermTesting
        main.c)
add_executable(lecture01 Lecture_01/lecture01.c)
add_executable(lecture02 Lecture_02/lecture02.c)
add_executable(lecture02exercises Lecture_02/lecture02exercises.c)
add_executable(lecture03 Lecture_03/lecture03.c)
add_executable(lecture03exercises Lecture_03/lecture03exercises.c)
add_executable(lecture04 Lecture_04/lecture04.c)
add_executable(lecture04flawedcode Lecture_04/lecture04flawedcode.c)
add_executable(lecture04exercises Lecture_04/lecture04exercises.c)
