################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Caracter.cpp \
../Estilo.cpp \
../FactoriaFlyWeight.cpp \
../Texto.cpp \
../main.cpp 

OBJS += \
./Caracter.o \
./Estilo.o \
./FactoriaFlyWeight.o \
./Texto.o \
./main.o 

CPP_DEPS += \
./Caracter.d \
./Estilo.d \
./FactoriaFlyWeight.d \
./Texto.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


