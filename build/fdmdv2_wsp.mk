.PHONY: clean All

All:
	@echo "----------Building project:[ fdmdv2 - Release ]----------"
	@"$(MAKE)" -f "fdmdv2.mk"
clean:
	@echo "----------Cleaning project:[ fdmdv2 - Release ]----------"
	@"$(MAKE)" -f "fdmdv2.mk" clean
