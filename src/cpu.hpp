/**
 * @file cpu.hpp
 * @brief CPU class declaration
 */
//

#ifndef CPU_HPP
#define CPU_HPP

#include <cstdint>
#include <map>

class CPU {
public:
    CPU();                                                  // Constructor, initialize internal components
    ~CPU();                                                 // Destructor, clean up internal components

    void reset();
    void setRegisterValue(std::string reg, uint8_t value);  // Set register value
    uint8_t getRegisterValue(std::string reg);              // Get register value
    void setFlagValue(std::string flag, bool value);        // Set flag value
    bool getFlagValue(std::string flag);                    // Get flag value
private:
    std::map<std::string, uint8_t> registers;               // Registers (Mapping register name to value)
    std::map<std::string, bool> flags;                      // Flags (Mapping flag name to value)
};

#endif