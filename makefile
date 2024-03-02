clean:
	rm $(wildcard *.o) $(wildcard *.exe)
	@echo "removed .o and .exe files"
	
two-sum.exe: main.c problems/0001-two-sum/two-sum.c
	gcc $^ -o $@
	@echo "$^ compiled into $@"

contains-duplicate.exe: main.c problems/0217-contains-duplicate/contains-duplicate.c
	gcc $^ -o $@
	@echo "$^ compiled into $@"

valid-anagram.exe: main.c problems/0242-valid-anagram/valid-anagram.c
	gcc $^ -o $@
	@echo "$^ compiled into $@"