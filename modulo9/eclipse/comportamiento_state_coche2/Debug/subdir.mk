################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Coche.cpp \
../StateApagado.cpp \
../StateArrancado.cpp \
../principal.cpp 

OBJS += \
./Coche.o \
./StateApagado.o \
./StateArrancado.o \
./principal.o 

CPP_DEPS += \
./Coche.d \
./StateApagado.d \
./StateArrancado.d \
./principal.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


