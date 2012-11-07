.PHONY: clean All

All:
	@echo "----------Building project:[ rawbits - Release ]----------"
	@cd "C:\bin\Projects\Radio\fdmdv2\tests\image" && "$(MAKE)" -f "rawbits.mk"
clean:
	@echo "----------Cleaning project:[ rawbits - Release ]----------"
	@cd "C:\bin\Projects\Radio\fdmdv2\tests\image" && "$(MAKE)" -f "rawbits.mk" clean
