################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Buscaminas.cpp \
../Casilla.cpp \
../Coordenada.cpp \
../Jugador.cpp \
../Tablero.cpp \
../main.cpp 

OBJS += \
./Buscaminas.o \
./Casilla.o \
./Coordenada.o \
./Jugador.o \
./Tablero.o \
./main.o 

CPP_DEPS += \
./Buscaminas.d \
./Casilla.d \
./Coordenada.d \
./Jugador.d \
./Tablero.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


