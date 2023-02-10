#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=mcc_generated_files/adc/src/adc0.c mcc_generated_files/evsys/src/evsys.c mcc_generated_files/system/src/clock.c mcc_generated_files/system/src/system.c mcc_generated_files/system/src/config_bits.c mcc_generated_files/system/src/pins.c mcc_generated_files/system/src/protected_io.S mcc_generated_files/system/src/interrupt.c mcc_generated_files/timer/src/tcb0.c mcc_generated_files/timer/src/rtc.c mcc_generated_files/timer/src/tcb1.c mcc_generated_files/uart/src/usart0.c mcc_generated_files/uart/src/usart1.c mcc_generated_files/vref/src/vref.c main.c application.c TWI.c bme280.c ringBuffer.c RN2xx3.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o ${OBJECTDIR}/mcc_generated_files/system/src/clock.o ${OBJECTDIR}/mcc_generated_files/system/src/system.o ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o ${OBJECTDIR}/mcc_generated_files/system/src/pins.o ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o ${OBJECTDIR}/main.o ${OBJECTDIR}/application.o ${OBJECTDIR}/TWI.o ${OBJECTDIR}/bme280.o ${OBJECTDIR}/ringBuffer.o ${OBJECTDIR}/RN2xx3.o
POSSIBLE_DEPFILES=${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o.d ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o.d ${OBJECTDIR}/mcc_generated_files/system/src/clock.o.d ${OBJECTDIR}/mcc_generated_files/system/src/system.o.d ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o.d ${OBJECTDIR}/mcc_generated_files/system/src/pins.o.d ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o.d ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o.d ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o.d ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o.d ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o.d ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o.d ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o.d ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/application.o.d ${OBJECTDIR}/TWI.o.d ${OBJECTDIR}/bme280.o.d ${OBJECTDIR}/ringBuffer.o.d ${OBJECTDIR}/RN2xx3.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o ${OBJECTDIR}/mcc_generated_files/system/src/clock.o ${OBJECTDIR}/mcc_generated_files/system/src/system.o ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o ${OBJECTDIR}/mcc_generated_files/system/src/pins.o ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o ${OBJECTDIR}/main.o ${OBJECTDIR}/application.o ${OBJECTDIR}/TWI.o ${OBJECTDIR}/bme280.o ${OBJECTDIR}/ringBuffer.o ${OBJECTDIR}/RN2xx3.o

# Source Files
SOURCEFILES=mcc_generated_files/adc/src/adc0.c mcc_generated_files/evsys/src/evsys.c mcc_generated_files/system/src/clock.c mcc_generated_files/system/src/system.c mcc_generated_files/system/src/config_bits.c mcc_generated_files/system/src/pins.c mcc_generated_files/system/src/protected_io.S mcc_generated_files/system/src/interrupt.c mcc_generated_files/timer/src/tcb0.c mcc_generated_files/timer/src/rtc.c mcc_generated_files/timer/src/tcb1.c mcc_generated_files/uart/src/usart0.c mcc_generated_files/uart/src/usart1.c mcc_generated_files/vref/src/vref.c main.c application.c TWI.c bme280.c ringBuffer.c RN2xx3.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=AVR64DD32
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o: mcc_generated_files/adc/src/adc0.c  .generated_files/flags/default/7096d5b1ef0d18aeb1f439c7238c3a950945773a .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/adc/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o.d" -MT "${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o.d" -MT ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o -o ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o mcc_generated_files/adc/src/adc0.c 
	
${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o: mcc_generated_files/evsys/src/evsys.c  .generated_files/flags/default/70b7302409128eaf74c43d189790ca5d233bec4e .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/evsys/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o.d" -MT "${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o.d" -MT ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o -o ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o mcc_generated_files/evsys/src/evsys.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/clock.o: mcc_generated_files/system/src/clock.c  .generated_files/flags/default/c78a811aca9d4439cbb8955cca32724026965954 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/clock.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/clock.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/clock.o -o ${OBJECTDIR}/mcc_generated_files/system/src/clock.o mcc_generated_files/system/src/clock.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/system.o: mcc_generated_files/system/src/system.c  .generated_files/flags/default/fd12ddba60810b20238cdf33fc795b72604a1915 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/system.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/system.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/system.o -o ${OBJECTDIR}/mcc_generated_files/system/src/system.o mcc_generated_files/system/src/system.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o: mcc_generated_files/system/src/config_bits.c  .generated_files/flags/default/755ba57da58f123fb55eb5ffa637448b63cfee41 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o -o ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o mcc_generated_files/system/src/config_bits.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/pins.o: mcc_generated_files/system/src/pins.c  .generated_files/flags/default/9c67aa2d8d926657de0d26cfca0bc14d46a6b91c .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/pins.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/pins.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/pins.o -o ${OBJECTDIR}/mcc_generated_files/system/src/pins.o mcc_generated_files/system/src/pins.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o: mcc_generated_files/system/src/interrupt.c  .generated_files/flags/default/62796cd9b2c85bf9f082571acf400cc2c069ed1d .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o -o ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o mcc_generated_files/system/src/interrupt.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o: mcc_generated_files/timer/src/tcb0.c  .generated_files/flags/default/d68bb94b0ff3071e8e9aac0c65d44f16a8614492 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o.d" -MT "${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o.d" -MT ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o -o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o mcc_generated_files/timer/src/tcb0.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o: mcc_generated_files/timer/src/rtc.c  .generated_files/flags/default/ae1d9e3d6c3638068aa88f8a672773094e088b1e .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o.d" -MT "${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o.d" -MT ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o -o ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o mcc_generated_files/timer/src/rtc.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o: mcc_generated_files/timer/src/tcb1.c  .generated_files/flags/default/25ba8d2e79e36fe62abf34051aa9b65a48eca4d4 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o.d" -MT "${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o.d" -MT ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o -o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o mcc_generated_files/timer/src/tcb1.c 
	
${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o: mcc_generated_files/uart/src/usart0.c  .generated_files/flags/default/387e759a1ffc1617fee0e28f8c6ccb146d61af59 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/uart/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o.d" -MT "${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o.d" -MT ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o -o ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o mcc_generated_files/uart/src/usart0.c 
	
${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o: mcc_generated_files/uart/src/usart1.c  .generated_files/flags/default/b8b5f69a41056ef03c9458c1e7e892de769dd49d .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/uart/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o.d" -MT "${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o.d" -MT ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o -o ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o mcc_generated_files/uart/src/usart1.c 
	
${OBJECTDIR}/mcc_generated_files/vref/src/vref.o: mcc_generated_files/vref/src/vref.c  .generated_files/flags/default/77d806a29a07325e9a67c399fadceeb676bb5d21 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/vref/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/vref/src/vref.o.d" -MT "${OBJECTDIR}/mcc_generated_files/vref/src/vref.o.d" -MT ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o -o ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o mcc_generated_files/vref/src/vref.c 
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/6bb834b26250c41fdc957c44dc80d2a09fc8bbcc .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/application.o: application.c  .generated_files/flags/default/b80620a438c430c6bdcb720d00b3c8ce011ebc6e .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/application.o.d 
	@${RM} ${OBJECTDIR}/application.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/application.o.d" -MT "${OBJECTDIR}/application.o.d" -MT ${OBJECTDIR}/application.o -o ${OBJECTDIR}/application.o application.c 
	
${OBJECTDIR}/TWI.o: TWI.c  .generated_files/flags/default/8a812e8a54a1c97bc6faf0d331979321f0a8319d .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/TWI.o.d 
	@${RM} ${OBJECTDIR}/TWI.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/TWI.o.d" -MT "${OBJECTDIR}/TWI.o.d" -MT ${OBJECTDIR}/TWI.o -o ${OBJECTDIR}/TWI.o TWI.c 
	
${OBJECTDIR}/bme280.o: bme280.c  .generated_files/flags/default/669c5b70d0e2906c2aecd88b890e12e850b10106 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bme280.o.d 
	@${RM} ${OBJECTDIR}/bme280.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/bme280.o.d" -MT "${OBJECTDIR}/bme280.o.d" -MT ${OBJECTDIR}/bme280.o -o ${OBJECTDIR}/bme280.o bme280.c 
	
${OBJECTDIR}/ringBuffer.o: ringBuffer.c  .generated_files/flags/default/b386e290ea8153db74613264e0f612400ae2e523 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/ringBuffer.o.d 
	@${RM} ${OBJECTDIR}/ringBuffer.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/ringBuffer.o.d" -MT "${OBJECTDIR}/ringBuffer.o.d" -MT ${OBJECTDIR}/ringBuffer.o -o ${OBJECTDIR}/ringBuffer.o ringBuffer.c 
	
${OBJECTDIR}/RN2xx3.o: RN2xx3.c  .generated_files/flags/default/80c349df3a9133c456303442b58b7b646e5471d4 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/RN2xx3.o.d 
	@${RM} ${OBJECTDIR}/RN2xx3.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/RN2xx3.o.d" -MT "${OBJECTDIR}/RN2xx3.o.d" -MT ${OBJECTDIR}/RN2xx3.o -o ${OBJECTDIR}/RN2xx3.o RN2xx3.c 
	
else
${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o: mcc_generated_files/adc/src/adc0.c  .generated_files/flags/default/4e173f388ce2c5e4aacd56231b8dce6b3cb6719f .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/adc/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o.d" -MT "${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o.d" -MT ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o -o ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.o mcc_generated_files/adc/src/adc0.c 
	
${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o: mcc_generated_files/evsys/src/evsys.c  .generated_files/flags/default/94a7103b54c64d10750e4279d48addc6b9d14b8c .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/evsys/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o.d" -MT "${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o.d" -MT ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o -o ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.o mcc_generated_files/evsys/src/evsys.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/clock.o: mcc_generated_files/system/src/clock.c  .generated_files/flags/default/c520b4dc4df8c9cb35ec2260d2b0c7a911459329 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/clock.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/clock.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/clock.o -o ${OBJECTDIR}/mcc_generated_files/system/src/clock.o mcc_generated_files/system/src/clock.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/system.o: mcc_generated_files/system/src/system.c  .generated_files/flags/default/f266a2af31a98445e18f08f1ddcee5b2cf8c95d2 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/system.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/system.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/system.o -o ${OBJECTDIR}/mcc_generated_files/system/src/system.o mcc_generated_files/system/src/system.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o: mcc_generated_files/system/src/config_bits.c  .generated_files/flags/default/bf65cb8ce481a3f5dcc21e83037c494c0bffdf69 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o -o ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.o mcc_generated_files/system/src/config_bits.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/pins.o: mcc_generated_files/system/src/pins.c  .generated_files/flags/default/8430bb99a32e6f21983c8a864ec8122d9880188e .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/pins.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/pins.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/pins.o -o ${OBJECTDIR}/mcc_generated_files/system/src/pins.o mcc_generated_files/system/src/pins.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o: mcc_generated_files/system/src/interrupt.c  .generated_files/flags/default/adba3dd01527ea369a5a01d70354f37e5f61c9ef .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o -o ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.o mcc_generated_files/system/src/interrupt.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o: mcc_generated_files/timer/src/tcb0.c  .generated_files/flags/default/bd8675ed0f495abb69c0bfa3e0b48445cc78669d .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o.d" -MT "${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o.d" -MT ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o -o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb0.o mcc_generated_files/timer/src/tcb0.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o: mcc_generated_files/timer/src/rtc.c  .generated_files/flags/default/a95d712404b9a8d6611d1a69bb8d227c1319b78e .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o.d" -MT "${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o.d" -MT ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o -o ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.o mcc_generated_files/timer/src/rtc.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o: mcc_generated_files/timer/src/tcb1.c  .generated_files/flags/default/213998120a25c86d1929106d30c6c38fe6f65070 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o.d" -MT "${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o.d" -MT ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o -o ${OBJECTDIR}/mcc_generated_files/timer/src/tcb1.o mcc_generated_files/timer/src/tcb1.c 
	
${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o: mcc_generated_files/uart/src/usart0.c  .generated_files/flags/default/aa0a8059260f0ff39a8eaa07ac6f0d144192b20 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/uart/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o.d" -MT "${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o.d" -MT ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o -o ${OBJECTDIR}/mcc_generated_files/uart/src/usart0.o mcc_generated_files/uart/src/usart0.c 
	
${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o: mcc_generated_files/uart/src/usart1.c  .generated_files/flags/default/1b883efc74d0534e93c7077c757deb94c575df56 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/uart/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o.d" -MT "${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o.d" -MT ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o -o ${OBJECTDIR}/mcc_generated_files/uart/src/usart1.o mcc_generated_files/uart/src/usart1.c 
	
${OBJECTDIR}/mcc_generated_files/vref/src/vref.o: mcc_generated_files/vref/src/vref.c  .generated_files/flags/default/3867f2f6c5ac2cea0cea6f17f71e599349da4844 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/vref/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/vref/src/vref.o.d" -MT "${OBJECTDIR}/mcc_generated_files/vref/src/vref.o.d" -MT ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o -o ${OBJECTDIR}/mcc_generated_files/vref/src/vref.o mcc_generated_files/vref/src/vref.c 
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/default/78b72bc2dd9cc010d23d031e2c7c2f0e2dcf4a2c .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/application.o: application.c  .generated_files/flags/default/d42ea8a4af18d0b342dc7693fb7cd5a41d724581 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/application.o.d 
	@${RM} ${OBJECTDIR}/application.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/application.o.d" -MT "${OBJECTDIR}/application.o.d" -MT ${OBJECTDIR}/application.o -o ${OBJECTDIR}/application.o application.c 
	
${OBJECTDIR}/TWI.o: TWI.c  .generated_files/flags/default/c8b250cecf02c8fefa4e169dc6ea3a5a1bc58349 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/TWI.o.d 
	@${RM} ${OBJECTDIR}/TWI.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/TWI.o.d" -MT "${OBJECTDIR}/TWI.o.d" -MT ${OBJECTDIR}/TWI.o -o ${OBJECTDIR}/TWI.o TWI.c 
	
${OBJECTDIR}/bme280.o: bme280.c  .generated_files/flags/default/bb79f69358649b8db2ae48f9c7ee83ba00878226 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bme280.o.d 
	@${RM} ${OBJECTDIR}/bme280.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/bme280.o.d" -MT "${OBJECTDIR}/bme280.o.d" -MT ${OBJECTDIR}/bme280.o -o ${OBJECTDIR}/bme280.o bme280.c 
	
${OBJECTDIR}/ringBuffer.o: ringBuffer.c  .generated_files/flags/default/a81d82a67f36ad3b4a5d65d65c2d10c210502800 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/ringBuffer.o.d 
	@${RM} ${OBJECTDIR}/ringBuffer.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/ringBuffer.o.d" -MT "${OBJECTDIR}/ringBuffer.o.d" -MT ${OBJECTDIR}/ringBuffer.o -o ${OBJECTDIR}/ringBuffer.o ringBuffer.c 
	
${OBJECTDIR}/RN2xx3.o: RN2xx3.c  .generated_files/flags/default/84c8a8f7b72ae12eb50d3fa0d20761889b47c9d0 .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/RN2xx3.o.d 
	@${RM} ${OBJECTDIR}/RN2xx3.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3     -MD -MP -MF "${OBJECTDIR}/RN2xx3.o.d" -MT "${OBJECTDIR}/RN2xx3.o.d" -MT ${OBJECTDIR}/RN2xx3.o -o ${OBJECTDIR}/RN2xx3.o RN2xx3.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o: mcc_generated_files/system/src/protected_io.S  .generated_files/flags/default/5f20f9b3e38c114614f51372415de39b056e6b9a .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o 
	${MP_CC} -c $(MP_EXTRA_AS_PRE) -mcpu=$(MP_PROCESSOR_OPTION)  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x assembler-with-cpp -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  -gdwarf-3 -Wa,--defsym=__MPLAB_BUILD=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1   -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o -o ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o  mcc_generated_files/system/src/protected_io.S 
	
else
${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o: mcc_generated_files/system/src/protected_io.S  .generated_files/flags/default/ad81dacbf7bcef9d5f2f560f8ccb838ab12db46f .generated_files/flags/default/2721dddcc581e483f4433ec4a9035a59d8af4f9b
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o 
	${MP_CC} -c $(MP_EXTRA_AS_PRE) -mcpu=$(MP_PROCESSOR_OPTION)  -x assembler-with-cpp -D__$(MP_PROCESSOR_OPTION)__   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -DXPRJ_default=$(CND_CONF)  -gdwarf-3 -Wa,--defsym=__MPLAB_BUILD=1   -MD -MP -MF "${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o.d" -MT "${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o.d" -MT ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o -o ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.o  mcc_generated_files/system/src/protected_io.S 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"   -gdwarf-2 -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group  -Wl,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1
	@${RM} ${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.hex 
	
else
${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -Wall -gdwarf-3     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group 
	${MP_CC_DIR}\\avr-objcopy -O ihex "${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}" "${DISTDIR}/agri-iot-hackster.X.${IMAGE_TYPE}.hex"
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
