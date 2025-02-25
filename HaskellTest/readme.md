# Haskell Test Program

Merge and quicksort implementation in Haskell

## Requirements*

- Makefile
- GHC: the Glasgow Haskell Compiler
- cabal-install: the Cabal installation tool for managing Haskell software

## Project navigation
📂 HaskellTest/ (Main directory for the Haskell project)  
├── 📂 app/ (Contains all source files)  
├── 📂 output/ (Created after `make` is run, stores output txt files)  
├── 📂 dist-newstyle/ (Automatically generated from cabal, stores build artifacts)  
├── 📄 CHANGELOG.md (Keeps track of the project’s history with version updates, bug fixes, and new features)  
├── 📄 haskelltest.cabal (Cabal project file that defines project settings, dependencies, and build instructions)  
└── 📄 Makefile (Defines build automation commands, such as `make release` or `make clean`)



## Using the Makefile

This project uses a `Makefile` to automate compilation, execution, and output management.

1. `make`  
   - Default command – compiles the source code.  
   - Creates an `output/` subdirectory inside the project directory (if it doesn’t exist).  

2. `make debug`  
   - Builds then displays program output to console  

3. `make release`  
   - Builds then saves output to a text file.  
   - Files are automatically numbered:  
     - First run → `output_hs_1.txt`  
     - Second run → `output_hs_2.txt`  
     - Third run → `output_hs_3.txt`  
     - … and so on.

4. `make all`
   - debug and release 

4. `make clean`  
   - Deletes all `.txt` files from the `output/` directory. 
