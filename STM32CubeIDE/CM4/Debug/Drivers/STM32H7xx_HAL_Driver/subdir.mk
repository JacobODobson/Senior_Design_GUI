################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal.c \
C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_cortex.c \
C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_hsem.c \
C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_pwr_ex.c \
C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_rcc.c 

C_DEPS += \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal.d \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_cortex.d \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_hsem.d \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_pwr_ex.d \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_rcc.d 

OBJS += \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal.o \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_cortex.o \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_hsem.o \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_pwr_ex.o \
./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_rcc.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal.o: C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal.c Drivers/STM32H7xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM4/Core/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_cortex.o: C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_cortex.c Drivers/STM32H7xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM4/Core/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_hsem.o: C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_hsem.c Drivers/STM32H7xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM4/Core/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_pwr_ex.o: C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_pwr_ex.c Drivers/STM32H7xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM4/Core/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_rcc.o: C:/Users/eamon/Documents/ece485/stmworkspace/Senior_Design_GUI/Drivers/STM32H7xx_HAL_Driver/Src/stm32h7xx_hal_rcc.c Drivers/STM32H7xx_HAL_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DCORE_CM4 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM4/Core/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-STM32H7xx_HAL_Driver

clean-Drivers-2f-STM32H7xx_HAL_Driver:
	-$(RM) ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal.d ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal.o ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_cortex.d ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_cortex.o ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_hsem.d ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_hsem.o ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_pwr_ex.d ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_pwr_ex.o ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_rcc.d ./Drivers/STM32H7xx_HAL_Driver/stm32h7xx_hal_rcc.o

.PHONY: clean-Drivers-2f-STM32H7xx_HAL_Driver

