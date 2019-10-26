################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Operaciones.cpp \
../Proxy.cpp \
../Servidor.cpp \
../ServidorDedicado.cpp \
../main.cpp 

OBJS += \
./Operaciones.o \
./Proxy.o \
./Servidor.o \
./ServidorDedicado.o \
./main.o 

CPP_DEPS += \
./Operaciones.d \
./Proxy.d \
./Servidor.d \
./ServidorDedicado.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


