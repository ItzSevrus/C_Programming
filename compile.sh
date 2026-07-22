#!/usr/bin/env bash

echo "* Compile Script Written by Sahil, This script uses gcc to compile the c programs into their executables."

echo "* Compiling $1..."

output="${1%.c}"
output_dir="outputs"

include_dir="include/"

mkdir -p "$output_dir"

command="gcc $1 libs/*.c -lm -I$include_dir -o $output_dir/$output"

echo -e "  > Using Compile Command ->\n  $command"

if eval "$command"; then
    echo "✅ Compilation successful, Executable is saved at $output_dir/$output"
else
    echo "❌ Compilation failed"
fi

