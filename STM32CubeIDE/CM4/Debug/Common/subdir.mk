################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Common/Src/system_stm32h7xx_dualcore_boot_cm4_cm7.c 

C_DEPS += \
./Common/system_stm32h7xx_dualcore_boot_cm4_cm7.d 

OBJS += \
./Common/system_stm32h7xx_dualcore_boot_cm4_cm7.o 


# Each subdirectory must supply rules for building sources it contributes
Common/system_stm32h7xx_dualcore_boot_cm4_cm7.o: C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Common/Src/system_stm32h7xx_dualcore_boot_cm4_cm7.c Common/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM4/Core/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Common

clean-Common:
	-$(RM) ./Common/system_stm32h7xx_dualcore_boot_cm4_cm7.d ./Common/system_stm32h7xx_dualcore_boot_cm4_cm7.o

.PHONY: clean-Common

