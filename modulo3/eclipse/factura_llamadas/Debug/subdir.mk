################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Call.cpp \
../CallI.cpp \
../Cliente.cpp \
../Evento.cpp \
../Factura.cpp \
../Fecha.cpp \
../Hora.cpp \
../Sms.cpp \
../Tarifa.cpp \
../main.cpp 

OBJS += \
./Call.o \
./CallI.o \
./Cliente.o \
./Evento.o \
./Factura.o \
./Fecha.o \
./Hora.o \
./Sms.o \
./Tarifa.o \
./main.o 

CPP_DEPS += \
./Call.d \
./CallI.d \
./Cliente.d \
./Evento.d \
./Factura.d \
./Fecha.d \
./Hora.d \
./Sms.d \
./Tarifa.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


