################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/bubblesort.cc \
../src/insertion_sort.cc \
../src/lab5.cc \
../src/mergesort.cc \
../src/myheaders.cc \
../src/quick_sort.cc 

CC_DEPS += \
./src/bubblesort.d \
./src/insertion_sort.d \
./src/lab5.d \
./src/mergesort.d \
./src/myheaders.d \
./src/quick_sort.d 

OBJS += \
./src/bubblesort.o \
./src/insertion_sort.o \
./src/lab5.o \
./src/mergesort.o \
./src/myheaders.o \
./src/quick_sort.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/bubblesort.d ./src/bubblesort.o ./src/insertion_sort.d ./src/insertion_sort.o ./src/lab5.d ./src/lab5.o ./src/mergesort.d ./src/mergesort.o ./src/myheaders.d ./src/myheaders.o ./src/quick_sort.d ./src/quick_sort.o

.PHONY: clean-src

