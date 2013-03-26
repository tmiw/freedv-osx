.PHONY: clean All

All:
	@echo "----------Building project:[ hamlib_trial - Release ]----------"
	@cd "hamlib_trial" && $(MAKE) -f  "hamlib_trial.mk"
clean:
	@echo "----------Cleaning project:[ hamlib_trial - Release ]----------"
	@cd "hamlib_trial" && $(MAKE) -f  "hamlib_trial.mk" clean
