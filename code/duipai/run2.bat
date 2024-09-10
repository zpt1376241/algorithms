@echo off
 
g++ bf.cpp -o bf.exe
g++ test.cpp -o test.exe
g++ data.cpp -o data.exe
 
set /a i = 0
set /a T = 101
 
:loop
data.exe > data.txt
test.exe < data.txt > test.txt
bf.exe < data.txt > bf.txt
 
fc test.txt bf.txt
 
echo running on test %i%
set /a i += 1
if %i% == %T% goto end
 
if not errorlevel 1 goto loop
 
:end
pause