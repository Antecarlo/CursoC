################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Factory.cpp \
../FactoryApple.cpp \
../FactorySamsung.cpp \
../GalaxyA.cpp \
../IPad.cpp \
../IPhoneX.cpp \
../S10.cpp \
../SmartPhone.cpp \
../Tablet.cpp \
../main.cpp 

OBJS += \
./Factory.o \
./FactoryApple.o \
./FactorySamsung.o \
./GalaxyA.o \
./IPad.o \
./IPhoneX.o \
./S10.o \
./SmartPhone.o \
./Tablet.o \
./main.o 

CPP_DEPS += \
./Factory.d \
./FactoryApple.d \
./FactorySamsung.d \
./GalaxyA.d \
./IPad.d \
./IPhoneX.d \
./S10.d \
./SmartPhone.d \
./Tablet.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++17 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


