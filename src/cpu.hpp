/**
 * @file cpu.hpp
 * @brief CPU class declaration
 */
//

#ifndef CPU_HPP
#define CPU_HPP

#include <map>

template <typename CPUBitSize>
class CPU {
public:
    CPU();                                                      // Constructor, initialize internal components
    ~CPU();                                                     // Destructor, clean up internal components

    void reset();
    void setRegisterValue(std::string reg, CPUBitSize value);   // Set register value
    CPUBitSize getRegisterValue(std::string reg);               // Get register value
    void setFlagValue(std::string flag, bool value);            // Set flag value
    bool getFlagValue(std::string flag);                        // Get flag value
private:
    std::map<std::string, CPUBitSize> registers;                // Registers (Mapping register name to value)
    std::map<std::string, bool> flags;                          // Flags (Mapping flag name to value)
};

#endif