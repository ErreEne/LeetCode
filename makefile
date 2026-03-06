
# COMO CORRER
# make 

dir = nada


#C flags
CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = $(dir)/$(dir).c
OUT = $(dir).out

#java flags
JAR=$(dir).jar
JavaClass = $(dir)Class


ifeq ($(dir),nada)

all: 
	@echo "Can't read directory"

else

all: c java python

#C file
c:
		@echo "Results in C"
		@echo 
		@$(CC) $(CFLAGS) -o $(OUT) $(SRC)
		@./$(OUT)
		@rm -f $(dir)/$(OUT)
		@rm -f $(OUT)
		@echo
java: 
	@echo "Results in Java"
	@echo
	@echo "Manifest-Version: 1.0" > META-INF/MANIFEST.MF
	@echo "Created-By: 11.0.18 (Ubuntu)">> META-INF/MANIFEST.MF
	@echo "Main-Class: $(dir).$(JavaClass)" >> META-INF/MANIFEST.MF
	@javac $(dir)/$(JavaClass).java
	@jar cmf META-INF/MANIFEST.MF $(dir)/$(JAR) $(dir)/$(JavaClass).class 
	@java -jar $(dir)/$(JAR)
	@rm -f $(dir)/$(JAR) $(dir)/$(JavaClass).class
	@echo
	
python:
	@echo "Results in Python"
	@echo
	@python3 $(dir)/$(dir).py

endif
