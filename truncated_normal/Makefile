# make sure we default to all
all:
	-if [ -r build ]; then cd build && make; else make init && make; fi

# setup cmake
#any:
#	@mkdir -p build
#	cd build && cmake $(CMAKE_FLAGS) ..

init:
	@mkdir -p build
	cd build && cmake $(CMAKE_FLAGS) ..

remake:
	make init && make $(ROS_MAKE_FLAGS)

force_remake:
	make clean && make $(ROS_MAKE_FLAGS)

clean:
	-if [ -r build ]; then cd build && make clean; fi
	-rm -rf build
	-rm -rf lib
	-rm -rf bin
