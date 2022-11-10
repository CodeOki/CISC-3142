setup:
	mkdir -p $(./Ex2)/bin

Ex7:
	echo "running program Classes and Objects\n"
	make compile-file-only dir="Ex7" f="classobject.cpp"
	cd ..

	echo "running program Conductors\n"
	make compile-file-only dir="Ex7" f="conductor.cpp"
	cd ..

	echo "running program Struct\n"
	make compile-file-only dir="Ex7" f="struct.cpp"
	cd ..

Ex5:
	echo "running program Sums of Digits\n"
	make compile-file-only dir="Ex5" f="sumsofdigits.cpp"
	cd ..

	echo "running program Prime Numbers\n"
	make compile-file-only dir="Ex5" f="primenumbers.cpp"
	cd ..

	echo "running program Linear Regression\n"
	make compile-file-only dir="Ex5" f="linearregression.cpp"


Ex4:
	echo "running program Ex3.17\n"
	make compile-file-input dir="Ex4" f="Ex3.17.cpp" inputfile="inputfile317"
	cd ..

	echo "running program Ex3.23\n"
	make compile-file-only dir="Ex4" f="Ex3.23.cpp"
	cd ..

	echo "running program Ex4.28\n"
	make compile-file-only dir="Ex4" f="Ex4.28.cpp"
	cd ..

	echo "running program Practice Problem 1\n"
	make compile-file-input dir="Ex4" f="inflation" inputfile="inputfilep1"
	cd ..

	echo "running program Practice Problem 2\n"
	make compile-file-input dir="Ex4" f="Nutrition" inputfile="inputfilep2"
	cd ..

Ex2:
	$(./Ex2)/bin/task1_1.o $(./Ex2)/bin/task1_2.o $(./Ex2)/bin/task1_3.o
	@echo "Running program Ex1.11 (for loop):"
	$(./Ex2)/bin/Ex1.11(for).o
	@echo
	@echo "Running program Ex1.11 (while loop):"
	$(./Ex2)/bin/Ex1.11(while).o
	@echo
	@echo "Running program Ex1.5:"
	$(./Ex2)/bin/Ex1.5.o
	@echo

compile-file: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f} < inputfile


compile-file-only: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f}

compile-file-input: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f} < ${inputfile}

clean:
	rm $(./Ex2)/bin/*.o

@hello:
	echo "Hello, World"