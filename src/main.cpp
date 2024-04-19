/**
 * @file main.cpp
 * @brief Main file for the project
 */
//

#include <iostream>
#include <cstdint>
#include "cpu.hpp"

typedef uint8_t cpuBitSize;

int main() {
    // Create a new CPU instance
    // In this case, we are using a small and cute 8-bit CPU >w<
    // (Further, we can create 16-bit, 32-bit, or even 64-bit CPUs!)
    CPU<cpuBitSize> cpu;

    // Reset the CPU
    cpu.reset();

    // Set register values
    cpu.setRegisterValue("A", 10);
    cpu.setRegisterValue("B", 20);
    cpu.setRegisterValue("C", 30);

    // Get register values
    // Note that std::cout treats uint8_t as a character type
    std::cout << "Register A: " << static_cast<int>(cpu.getRegisterValue("A")) << std::endl;
    std::cout << "Register B: " << static_cast<int>(cpu.getRegisterValue("B")) << std::endl;
    std::cout << "Register C: " << static_cast<int>(cpu.getRegisterValue("C")) << std::endl;

    return 0;
}