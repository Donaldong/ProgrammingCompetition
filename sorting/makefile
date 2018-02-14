.PHONY: main.pdf

main.pdf: main.tex
	pdflatex main.tex && bibtex main.aux && pdflatex main.tex && pdflatex main.tex

gen.o: generator.cpp
	g++ -std=c++11 -O3 -o gen.o generator.cpp

sort.o: sort.cpp
	g++ -std=c++11 -O3 -o sort.o sort.cpp

1.in: gen.o
	./gen.o 100 1 > 1.in

2.in: gen.o
	./gen.o 100 2 > 2.in

3.in: gen.o
	./gen.o 100 3 > 3.in

4.in: gen.o
	./gen.o 10000 1 > 4.in

5.in: gen.o
	./gen.o 10000 2 > 5.in

6.in: gen.o
	./gen.o 10000 3 > 6.in

7.in: gen.o
	./gen.o 10000000 1 > 7.in

8.in: gen.o
	./gen.o 10000000 2 > 8.in

9.in: gen.o
	./gen.o 10000000 3 > 9.in

define ans
	time ./sort.o < $(1).in > $(1).ans
endef

ans: 1.in 2.in 3.in 4.in 5.in 6.in 7.in 8.in 9.in sort.o
	$(call ans,1)
	$(call ans,2)
	$(call ans,3)
	$(call ans,4)
	$(call ans,5)
	$(call ans,6)
	$(call ans,7)
	$(call ans,8)
	$(call ans,9)

clean:
	rm *.in
