# C Test Program

Merge and Sort algorithm implemented in C language

## Tools 
- **Compiler(s)**:
    - GCC (Apple Clang 15.0.0)
- **IDE(S)**:
    - Visual Studio Code
- **Other**:
    - Makefile for compilation
##SERVICES
    **Merge Sort algorithm reference** - https://en.wikipedia.org/wiki/Merge_sort
    **Quick Sort algorithm reference** -  https://en.wikipedia.org/wiki/Quick_sort
    **Communication** - discord.com
    **Source control** - Github.com

### Project Structure

📂 CTest/ (Main directory for the C project)  
├── 📂 src/ (Contains all C source files)  
├── 📂 build/ (Created after `make` is run, stores compiled files)  
│   ├── 📂 output/ (Created after `make release`, stores output files)  
│   └── program (Compiled executable)


## Build Instructions

1. Navigate to the project directory
   `cd CTest`

2. Compile the program
   `make`

3. Compile and view last 10 lines of program output:
   `make debug`

4. Compile and store program output in a textfile
   `make release`
   - This will prompt you to enter a file number, creating an output file:
     output_c_x.txt  (where x is your input)

5. Clean the build directory (removes compiled files and output files):
   `make clean`

#### Additional Notes

- The `make release` command will store output in the `build/output/` directory.
- The executable file is stored in `build/`.
- Ensure you have `make` installed to use these commands
