################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Apagado.cpp \
../Coche.cpp \
../EnMarcha.cpp \
../Parado.cpp \
../SinCombustible.cpp \
../State.cpp \
../main.cpp 

OBJS += \
./Apagado.o \
./Coche.o \
./EnMarcha.o \
./Parado.o \
./SinCombustible.o \
./State.o \
./main.o 

CPP_DEPS += \
./Apagado.d \
./Coche.d \
./EnMarcha.d \
./Parado.d \
./SinCombustible.d \
./State.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


