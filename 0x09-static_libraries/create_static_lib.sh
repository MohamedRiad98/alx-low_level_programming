#!/bin/bash

# Compile each .c file into an object file
for file in *.c; do
    gcc -c "$file"
done

# Create the static library using the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o

echo "Static library liball.a created successfully."
