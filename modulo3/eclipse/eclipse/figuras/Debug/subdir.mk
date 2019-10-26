################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Circulo.cpp \
../Figura.cpp \
../Figura2D.cpp \
../Figura3D.cpp \
../main.cpp 

OBJS += \
./Circulo.o \
./Figura.o \
./Figura2D.o \
./Figura3D.o \
./main.o 

CPP_DEPS += \
./Circulo.d \
./Figura.d \
./Figura2D.d \
./Figura3D.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


