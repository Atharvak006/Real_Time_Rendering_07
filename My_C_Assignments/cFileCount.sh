#!/bin/bash

sum=0

for file in `ls -ltrh | awk '{print $9}' | grep -v temp.sh | grep -v output_2.txt`; do
	totalCFiles=`find $file -name "*.exe" | wc -l`
	sum=$(( sum + $totalCFiles ))
	echo "*** $file (contains $totalCFiles .exe files)"
	find $file -name "*.exe"
	echo ""
done

echo ""
echo ""
echo "Total .exe files across all directories: $sum"
