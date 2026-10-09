MAKEFILE_PATH := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

.PHONY: all always

all: always
	cd $(MAKEFILE_PATH)CMakeBinDir && cmake ..
	make -C $(MAKEFILE_PATH)CMakeBinDir

always:
	mkdir -p $(MAKEFILE_PATH)CMakeBinDir

clean: always
	rm -rf $(MAKEFILE_PATH)CMakeBinDir
