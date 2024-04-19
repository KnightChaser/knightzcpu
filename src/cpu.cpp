/**
 * @file cpu.cpp
 * @brief CPU class implementation
 */
//

#include "cpu.hpp"

// Constructor, initialize internal components
template <typename CPUBitSize>
CPU<CPUBitSize>::CPU() {
    // Initialize registers
    this->registers["A"]  = 0;  // Accumulator
    this->registers["B"]  = 0;  // General purpose register
    this->registers["C"]  = 0;  // General purpose register
    this->registers["D"]  = 0;  // General purpose register
    this->registers["E"]  = 0;  // General purpose register
    this->registers["H"]  = 0;  // General purpose register
    this->registers["L"]  = 0;  // General purpose register
    this->registers["PC"] = 0;  // Program counter (Points to the current instruction)
    this->registers["SP"] = 0;  // Stack pointer (Points to the current top of the stack)
    this->registers["BP"] = 0;  // Base pointer (Points to the current base of the stack)

    // Initialize flags
    this->flags["Z"] = false;   // Zero flag
    this->flags["N"] = false;   // Negative flag
    this->flags["H"] = false;   // Half carry flag
    this->flags["C"] = false;   // Carry flag
}

// Destructor, clean up internal components
template <typename CPUBitSize>
CPU<CPUBitSize>::~CPU() {
    // Nothing to clean up for now
}

// Reset the CPU
template <typename CPUBitSize>
void CPU<CPUBitSize>::reset() {
    // Reset every existing register to 0
    // (Including %PC, %SP, and %BP)
    for (auto& reg : this->registers) {
        reg.second = 0;
    }

    // Reset every existing flag to false
    for (auto& flag : this->flags) {
        flag.second = false;
    }
}

// Set register value
template <typename CPUBitSize>
void CPU<CPUBitSize>::setRegisterValue(std::string reg, CPUBitSize value) {
    // Check if the register exists
    if (this->registers.find(reg) != this->registers.end()) {
        // Set the register value
        this->registers[reg] = value;
    } else {
        std::string errorMessage = "Register " + reg + " does not exist";
        throw std::invalid_argument(errorMessage);
    }
}

// Get register value
template <typename CPUBitSize>
CPUBitSize CPU<CPUBitSize>::getRegisterValue(std::string reg) {
    // Check if the register exists
    if (this->registers.find(reg) != this->registers.end()) {
        // Return the register value
        return this->registers[reg];
    } else {
        std::string errorMessage = "Register " + reg + " does not exist";
        throw std::invalid_argument(errorMessage);
    }
}

// Set flag value
template <typename CPUBitSize>
void CPU<CPUBitSize>::setFlagValue(std::string flag, bool value) {
    // Check if the flag exists
    if (this->flags.find(flag) != this->flags.end()) {
        // Set the flag value
        this->flags[flag] = value;
    } else {
        std::string errorMessage = "Flag " + flag + " does not exist";
        throw std::invalid_argument(errorMessage);
    }
}

// Get flag value
template <typename CPUBitSize>
bool CPU<CPUBitSize>::getFlagValue(std::string flag) {
    // Check if the flag exists
    if (this->flags.find(flag) != this->flags.end()) {
        // Return the flag value
        return this->flags[flag];
    } else {
        std::string errorMessage = "Flag " + flag + " does not exist";
        throw std::invalid_argument(errorMessage);
    }
}

// Explicit instantiation of the CPU class (supported CPU bit sizes)
// This is needed to avoid linker errors
template class CPU<uint8_t>;
template class CPU<uint16_t>;
template class CPU<uint32_t>;
template class CPU<uint64_t>;