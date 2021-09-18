CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m3 -mthumb
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
Project_Name=pressure_senseor

all:$(Project_Name).bin

startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@ 

$(Project_Name).elf: $(OBJ) startup.o
	$(CC)ld.exe -T linker_scrpit.ld $(LIBS) $(OBJ) startup.o -o $@ -Map=Map_file.map

$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@ 
clean-all:
	rm *.o *bin *.elf *.map
