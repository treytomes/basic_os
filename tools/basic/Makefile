BUILD_DIR=build
SOURCE_DIR=src

.PHONY: all clean

all: basic

basic: $(BUILD_DIR)/basic

$(BUILD_DIR)/basic: $(BUILD_DIR)/basic.tab.c $(BUILD_DIR)/lex.yy.c
	g++ $(BUILD_DIR)/basic.tab.c $(BUILD_DIR)/lex.yy.c -o $(BUILD_DIR)/basic

$(BUILD_DIR)/basic.tab.c: $(SOURCE_DIR)/basic.y
	bison -d $(SOURCE_DIR)/basic.y -o $(BUILD_DIR)/basic.tab.c

$(BUILD_DIR)/basic.tab.h: $(SOURCE_DIR)/basic.y
	bison -d $(SOURCE_DIR)/basic.y -o $(BUILD_DIR)/basic.tab.c

$(BUILD_DIR)/lex.yy.c: $(BUILD_DIR)/basic.tab.h $(SOURCE_DIR)/basic.l
	flex -o $(BUILD_DIR)/lex.yy.c $(SOURCE_DIR)/basic.l

clean:
	rm $(BUILD_DIR)/*
