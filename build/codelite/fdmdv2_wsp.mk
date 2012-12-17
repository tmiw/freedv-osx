.PHONY: clean All

All:
	@echo "----------Building project:[ libCTB - Release ]----------"
	@cd "libCTB" && "$(MAKE)" -f "libCTB.mk"
clean:
	@echo "----------Cleaning project:[ libCTB - Release ]----------"
	@cd "libCTB" && "$(MAKE)" -f "libCTB.mk" clean
