# Haskell Test Program

Merge and quicksort implementation in Haskell

## **Requirements*

**Makefile
**GHC: the Glasgow Haskell Compiler
**cabal-install: the Cabal installation tool for managing Haskell software

## Using the Makefile

This project uses a `Makefile` to automate compilation, execution, and output management.

1. **Build the Program**
   Command: `make`  
   - Default command – compiles the source code.  
   - Creates an `output/` subdirectory inside the project directory (if it doesn’t exist).  

2. **Debug Mode (Console Output)**
   Command: `make debug`  
   - Runs the program.  
   - Displays output directly in the console (does not save to a file).  

3. **Release Mode (Save Output to File)**
   Command: `make release`  
   - Runs the program and saves output to a text file.  
   - Files are automatically numbered:  
     - First run → `output_hs_1.txt`  
     - Second run → `output_hs_2.txt`  
     - Third run → `output_hs_3.txt`  
     - … and so on.  

4. **Clean Output Files**
   Command: `make clean`  
   - Deletes all `.txt` files from the `output/` directory. 
