# knightzcpu
> A simple **CPU** simulation on C++

This Simple CPU Simulator **will be** (is) designed as an educational tool for computer engineering students to understand the basic workings of a CPU. This project is implemented in C++, and it simulates the essential operations of a CPU, including fetching, decoding, and executing instructions. It is kept deliberately simple to make it fun and accessible while providing substantial learning opportunities.

## Todos

- **Basic CPU Operations**: Simulate the fetch, decode, and execute cycles of a CPU.
- **Registers and Memory**:
  - Registers: Accumulator (A), Index Register (X), Stack Pointer (SP), and Program Counter (PC), etc.
  - 256n bytes of memory, etc.
- **Status Flags**: Carry (C), Zero (Z), Interrupt Disable (I), Decimal Mode (D), Break Command (B), Overflow (V), and Negative (N).
- **Interactive Input**: Users can input instructions or programs via the console or by loading files.
- **Visual Output**: The state of the CPU (registers, memory, flags) can be printed out after each cycle for educational purposes.

## Components

### Classes

- **CPU Class**: Encapsulates all operations of the simulated CPU, including the execution cycle.
- **Memory Class**: Manages operations related to memory access.

### Main Functions

- **fetch()**: Retrieves an instruction from memory based on the current value of the Program Counter (PC).
- **decode(uint8_t instruction)**: Identifies the operation to be performed based on the fetched instruction.
- **execute()**: Executes the decoded instruction.
- **run()**: Initiates and controls the execution cycle until a halt condition is met.