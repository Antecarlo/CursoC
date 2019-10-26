################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Call.cpp \
../CallI.cpp \
../Evento.cpp \
../Fecha.cpp \
../Hora.cpp \
../Sms.cpp \
../main.cpp 

OBJS += \
./Call.o \
./CallI.o \
./Evento.o \
./Fecha.o \
./Hora.o \
./Sms.o \
./main.o 

CPP_DEPS += \
./Call.d \
./CallI.d \
./Evento.d \
./Fecha.d \
./Hora.d \
./Sms.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


