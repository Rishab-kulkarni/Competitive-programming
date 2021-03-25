# Bash script for stress testing 
# ./gen --> generator for creating small tests
# ./brute --> the brute force solution to the problem

for((i = 1 ; ; i++)); do
	echo "Test case : " $i;
	./gen $i > int
	./a < int > out1
	./brute < int > out2
	diff -w out out2 || break
done


