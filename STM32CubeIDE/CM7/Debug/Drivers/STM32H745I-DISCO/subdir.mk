################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery.c \
C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_bus.c \
C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_lcd.c \
C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_qspi.c \
C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_sdram.c \
C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_ts.c 

C_DEPS += \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery.d \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_bus.d \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_lcd.d \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_qspi.d \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_sdram.d \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_ts.d 

OBJS += \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery.o \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_bus.o \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_lcd.o \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_qspi.o \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_sdram.o \
./Drivers/STM32H745I-DISCO/stm32h745i_discovery_ts.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32H745I-DISCO/stm32h745i_discovery.o: C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery.c Drivers/STM32H745I-DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM7/Core/Inc -I../../../CM7/TouchGFX/App -I../../../CM7/TouchGFX/target/generated -I../../../CM7/TouchGFX/target -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -I../../CM7/../../CM7/Middlewares/ST/touchgfx/framework/include -I../../../Drivers/BSP/STM32H745I-DISCO -I../../../Drivers/BSP/Components/Common -I../../../Drivers/BSP/Components/mt25tl01g -I../../../Drivers/BSP/Components/ft5336 -I../../../Drivers/BSP/Components/mt48lc4m32b2 -I../../CM7/../../CM7/TouchGFX/generated/fonts/include -I../../CM7/../../CM7/TouchGFX/generated/gui_generated/include -I../../CM7/../../CM7/TouchGFX/generated/images/include -I../../CM7/../../CM7/TouchGFX/generated/texts/include -I../../CM7/../../CM7/TouchGFX/generated/videos/include -I../../CM7/../../CM7/TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H745I-DISCO/stm32h745i_discovery_bus.o: C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_bus.c Drivers/STM32H745I-DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM7/Core/Inc -I../../../CM7/TouchGFX/App -I../../../CM7/TouchGFX/target/generated -I../../../CM7/TouchGFX/target -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -I../../CM7/../../CM7/Middlewares/ST/touchgfx/framework/include -I../../../Drivers/BSP/STM32H745I-DISCO -I../../../Drivers/BSP/Components/Common -I../../../Drivers/BSP/Components/mt25tl01g -I../../../Drivers/BSP/Components/ft5336 -I../../../Drivers/BSP/Components/mt48lc4m32b2 -I../../CM7/../../CM7/TouchGFX/generated/fonts/include -I../../CM7/../../CM7/TouchGFX/generated/gui_generated/include -I../../CM7/../../CM7/TouchGFX/generated/images/include -I../../CM7/../../CM7/TouchGFX/generated/texts/include -I../../CM7/../../CM7/TouchGFX/generated/videos/include -I../../CM7/../../CM7/TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H745I-DISCO/stm32h745i_discovery_lcd.o: C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_lcd.c Drivers/STM32H745I-DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM7/Core/Inc -I../../../CM7/TouchGFX/App -I../../../CM7/TouchGFX/target/generated -I../../../CM7/TouchGFX/target -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -I../../CM7/../../CM7/Middlewares/ST/touchgfx/framework/include -I../../../Drivers/BSP/STM32H745I-DISCO -I../../../Drivers/BSP/Components/Common -I../../../Drivers/BSP/Components/mt25tl01g -I../../../Drivers/BSP/Components/ft5336 -I../../../Drivers/BSP/Components/mt48lc4m32b2 -I../../CM7/../../CM7/TouchGFX/generated/fonts/include -I../../CM7/../../CM7/TouchGFX/generated/gui_generated/include -I../../CM7/../../CM7/TouchGFX/generated/images/include -I../../CM7/../../CM7/TouchGFX/generated/texts/include -I../../CM7/../../CM7/TouchGFX/generated/videos/include -I../../CM7/../../CM7/TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H745I-DISCO/stm32h745i_discovery_qspi.o: C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_qspi.c Drivers/STM32H745I-DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM7/Core/Inc -I../../../CM7/TouchGFX/App -I../../../CM7/TouchGFX/target/generated -I../../../CM7/TouchGFX/target -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -I../../CM7/../../CM7/Middlewares/ST/touchgfx/framework/include -I../../../Drivers/BSP/STM32H745I-DISCO -I../../../Drivers/BSP/Components/Common -I../../../Drivers/BSP/Components/mt25tl01g -I../../../Drivers/BSP/Components/ft5336 -I../../../Drivers/BSP/Components/mt48lc4m32b2 -I../../CM7/../../CM7/TouchGFX/generated/fonts/include -I../../CM7/../../CM7/TouchGFX/generated/gui_generated/include -I../../CM7/../../CM7/TouchGFX/generated/images/include -I../../CM7/../../CM7/TouchGFX/generated/texts/include -I../../CM7/../../CM7/TouchGFX/generated/videos/include -I../../CM7/../../CM7/TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H745I-DISCO/stm32h745i_discovery_sdram.o: C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_sdram.c Drivers/STM32H745I-DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM7/Core/Inc -I../../../CM7/TouchGFX/App -I../../../CM7/TouchGFX/target/generated -I../../../CM7/TouchGFX/target -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -I../../CM7/../../CM7/Middlewares/ST/touchgfx/framework/include -I../../../Drivers/BSP/STM32H745I-DISCO -I../../../Drivers/BSP/Components/Common -I../../../Drivers/BSP/Components/mt25tl01g -I../../../Drivers/BSP/Components/ft5336 -I../../../Drivers/BSP/Components/mt48lc4m32b2 -I../../CM7/../../CM7/TouchGFX/generated/fonts/include -I../../CM7/../../CM7/TouchGFX/generated/gui_generated/include -I../../CM7/../../CM7/TouchGFX/generated/images/include -I../../CM7/../../CM7/TouchGFX/generated/texts/include -I../../CM7/../../CM7/TouchGFX/generated/videos/include -I../../CM7/../../CM7/TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32H745I-DISCO/stm32h745i_discovery_ts.o: C:/TouchGFXProjects/Senior_Design_GUI/Drivers/BSP/STM32H745I-DISCO/stm32h745i_discovery_ts.c Drivers/STM32H745I-DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM7/Core/Inc -I../../../CM7/TouchGFX/App -I../../../CM7/TouchGFX/target/generated -I../../../CM7/TouchGFX/target -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -I../../CM7/../../CM7/Middlewares/ST/touchgfx/framework/include -I../../../Drivers/BSP/STM32H745I-DISCO -I../../../Drivers/BSP/Components/Common -I../../../Drivers/BSP/Components/mt25tl01g -I../../../Drivers/BSP/Components/ft5336 -I../../../Drivers/BSP/Components/mt48lc4m32b2 -I../../CM7/../../CM7/TouchGFX/generated/fonts/include -I../../CM7/../../CM7/TouchGFX/generated/gui_generated/include -I../../CM7/../../CM7/TouchGFX/generated/images/include -I../../CM7/../../CM7/TouchGFX/generated/texts/include -I../../CM7/../../CM7/TouchGFX/generated/videos/include -I../../CM7/../../CM7/TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-STM32H745I-2d-DISCO

clean-Drivers-2f-STM32H745I-2d-DISCO:
	-$(RM) ./Drivers/STM32H745I-DISCO/stm32h745i_discovery.d ./Drivers/STM32H745I-DISCO/stm32h745i_discovery.o ./Drivers/STM32H745I-DISCO/stm32h745i_discovery.su ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_bus.d ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_bus.o ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_bus.su ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_lcd.d ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_lcd.o ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_lcd.su ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_qspi.d ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_qspi.o ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_qspi.su ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_sdram.d ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_sdram.o ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_sdram.su ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_ts.d ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_ts.o ./Drivers/STM32H745I-DISCO/stm32h745i_discovery_ts.su

.PHONY: clean-Drivers-2f-STM32H745I-2d-DISCO

