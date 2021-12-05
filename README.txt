A3
Authour: Raymond Zhu
Student#: 101158903


A3 PROGRAM: Implementing a store and warehouse simulator to reciving stuff and sell stuff and restock
function etc.
 

list of file:

Makefile
Control.cc
Control.h
List.cc
List.h
Location.cc
Location.h
main.cc
Product.cc
Product.h
Queue.cc
Queue.h
Store.cc
Store.h
StoreLocation.cc
StoreLocation.h
WHLocation.cc
WHLocation.h
view.cc
view.h
defs.h
README



compile: make
run: ./a3
run with valgrind: 
valgrind --leak-check=yes --track-origins=yes -s  --dsymutil=yes  ./a3 
valgrind --leak-check=full  --track-origins=yes -s --dsymutil=yes  --show-leak-kinds=all ./a3 
or
valgrind --leak-check=yes ./a3

can check case by case and enter 0 to return, see the valgrind result, 
or done all cases then enter 0 see valgrind result

clean: make clean 