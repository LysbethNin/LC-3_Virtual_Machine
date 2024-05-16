# LC-3 Virtual Machine

## Introduction

This project is a simple virtual machine (VM) implementation for the LC-3 architecture, written in C. The LC-3 (Little Computer 3 developed by Yale N. Patt and Sanjay J. Patel) is a minimalist computer architecture often used for educational purposes to teach the fundamentals of computer organization and assembly language programming.

## Features

    LC-3 Virtual Machine: For now it will emulates the behavior of an LC-3 computer, including its processor, memory etc. 

## LC-3 Architecture

The LC-3 architecture is characterized by its simplicity. Here's a brief overview:

    Registers: LC-3 has several registers, including a program counter (PC), 8 general-purpose registers (R0-R7), and a condition flag register (COND).
    Memory: LC-3 has a 16-bit address space, allowing it to address up to 65,536 memory locations, each capable of storing a 16-bit value.
    Instructions: LC-3 instructions are 16 bits long and can be classified into several types, including arithmetic/logical, data transfer, control transfer, and control instructions. There are 16 of them.
    Input/Output: LC-3 supports simple input/output operations, including keyboard input and display output, through memory-mapped I/O.

