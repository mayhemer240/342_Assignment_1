# C Test Program
### Build Requirements
- GCC Compiler

### Project Structure
📂 CTest/ (Main directory for the C project)

### Build Instructions
1. Navigate to the project directory
   cd CTest

2. Compile the program
   make

3. Run the program in debug mode (outputs the last 10 lines):
   make debug

4. Run the program and save output to a file
   make release
   - This will prompt you to enter a file number, creating an output file:
     output_c_x.txt  (where x is your input)

5. Clean the build directory (removes compiled files and output files):
   make clean

### Additional Notes
- The `make release` command will store output in the `build/output/` directory.
- The executable file is stored in `build/`.
- Ensure you have `make` installed to use these co



