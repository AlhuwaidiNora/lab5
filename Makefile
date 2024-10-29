CC = gcc
CFLAGS = -Wall -g

SRC_DIR = src
BIN_DIR = bin

TASK1 = $(BIN_DIR)/task1_lab5
TASK2 = $(BIN_DIR)/task2_lab5
TASK3 = $(BIN_DIR)/task3_lab5
TASK4 = $(BIN_DIR)/task4_lab5
TASK5 = $(BIN_DIR)/task5_lab5
TASK6 = $(BIN_DIR)/task6_lab5
TASK7 = $(BIN_DIR)/task7_lab5


SRC_TASK1 = $(SRC_DIR)/task1_lab5.c
SRC_TASK2 = $(SRC_DIR)/task2_lab5.c
SRC_TASK3 = $(SRC_DIR)/task3_lab5.c
SRC_TASK4 = $(SRC_DIR)/task4_lab5.c
SRC_TASK5 = $(SRC_DIR)/task5_lab5.c
SRC_TASK6 = $(SRC_DIR)/task6_lab5.c
SRC_TASK7 = $(SRC_DIR)/task7_lab5.c

all: $(TASK1) $(TASK2) $(TASK3) $(TASK4) $(TASK5) $(TASK6) $(TASK7)

$(TASK1): $(SRC_TASK1)
	$(CC) $(CFLAGS) $< -o $@

$(TASK2): $(SRC_TASK2)
	$(CC) $(CFLAGS) $< -o $@

$(TASK3): $(SRC_TASK3)
	$(CC) $(CFLAGS) $< -o $@

$(TASK4): $(SRC_TASK4)
	$(CC) $(CFLAGS) $< -o $@

$(TASK5): $(SRC_TASK5)
	$(CC) $(CFLAGS) $< -o $@

$(TASK6): $(SRC_TASK6)
	$(CC) $(CFLAGS) $< -o $@

$(TASK7): $(SRC_TASK7)
	$(CC) $(CFLAGS) $< -o $@


clean:
	rm -f $(BIN_DIR)/*

