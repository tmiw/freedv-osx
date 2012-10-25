.PHONY: clean All

All:
	@echo ----------Building project:[ pa_enum - Debug ]----------
	@cd "C:\bin\Projects\Radio\fdmdv2\tests\pa_enum" && "$(MAKE)" -f "pa_enum.mk"
clean:
	@echo ----------Cleaning project:[ pa_enum - Debug ]----------
	@cd "C:\bin\Projects\Radio\fdmdv2\tests\pa_enum" && "$(MAKE)" -f "pa_enum.mk" clean
