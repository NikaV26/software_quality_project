build:
	if not exist C_Project\build mkdir C_Project\build
	cd C_Project\build && cmake -G "MinGW Makefiles" .. && mingw32-make

test:
	cd C_Project\build && ctest

clean:
	rmdir /s /q C_Project\build

check:
	cppcheck --enable=all --suppress=missingIncludeSystem C_Project/main.c C_Project/math_functions.c C_Project/test.c

python-test:
	pytest PythonProject

python-check:
	flake8 PythonProject