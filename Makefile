# Out
OUT = -o ./out/out


# Clears The Terminal
clear:
	clear

linked_list: clear
	gcc ./source/Linked_Lists/main.c $(OUT)
	./out/out
