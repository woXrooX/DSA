# Out
OUT = -o ./out/out


# Clears The Terminal
clear:
	clear

array_sort: clear
	g++ ./source/Arrays/sort.c++ $(OUT)
	./out/out

linked_list: clear
	g++ ./source/Linked_Lists/main.c++ $(OUT)
	./out/out
