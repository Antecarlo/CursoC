################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ExpResta.cpp \
../ExpSuma.cpp \
../Expresion.cpp \
../ExpresionBinaria.cpp \
../ExpresionNumerica.cpp \
../main.cpp 

OBJS += \
./ExpResta.o \
./ExpSuma.o \
./Expresion.o \
./ExpresionBinaria.o \
./ExpresionNumerica.o \
./main.o 

CPP_DEPS += \
./ExpResta.d \
./ExpSuma.d \
./Expresion.d \
./ExpresionBinaria.d \
./ExpresionNumerica.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


