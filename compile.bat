@echo off
setlocal

echo * Compile Script Written by Sahil
echo * This script uses GCC to compile C programs.

echo * Compiling %1...

rem Remove the .c extension
set "output=%~n1"
set "output_dir=outputs"
set "include_dir=include"

if not exist "%output_dir%" mkdir "%output_dir%"

set "command=gcc "%~1" libs\*.c -I"%include_dir%" -o "%output_dir%\%output%.exe"

echo.
echo   ^> Using Compile Command:
echo   %command%
echo.

call %command%

if %ERRORLEVEL% EQU 0 (
    echo ✅ Compilation successful. Executable saved at %output_dir%\%output%.exe
) else (
    echo ❌ Compilation failed.
)
