################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Banco.cpp \
../Cajero.cpp \
../Cliente.cpp \
../Cuenta.cpp \
../Movimiento.cpp \
../Tarjeta.cpp \
../main.cpp 

OBJS += \
./Banco.o \
./Cajero.o \
./Cliente.o \
./Cuenta.o \
./Movimiento.o \
./Tarjeta.o \
./main.o 

CPP_DEPS += \
./Banco.d \
./Cajero.d \
./Cliente.d \
./Cuenta.d \
./Movimiento.d \
./Tarjeta.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++17 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


