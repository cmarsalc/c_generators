BUILD_DIR := build
SRC := $(wildcard *.c) $(wildcard ../src/*.c)
OBJECTS := $(addprefix $(BUILD_DIR)/,$(notdir $(SRC:.c=.o)))
INCLUDE := $(wildcard ../include/*.h)

vpath %.c $(dir $(SRC))

.phony := clean

$(BUILD_DIR)/simple: $(OBJECTS) $(INCLUDE) makefile | $(BUILD_DIR) 
	$(CC) -o "$@" $(OBJECTS) 

$(BUILD_DIR)/%.o: %.c makefile | $(BUILD_DIR)
	$(CC) -o "$@" -c "$<" 

$(BUILD_DIR):
	mkdir "$@"

clean:
	$(RM) -fR $(BUILD_DIR)
