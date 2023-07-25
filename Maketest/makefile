obj_path = ./output
src_path = ./source
dir = -I./header
src := $(wildcard $(src_path)/*.c)
obj := $(patsubst $(src_path)/%.c,$(obj_path)/%.o,$(src))

main : $(obj)
	@gcc $^ -o $@
	@echo "final out files finished!\n"

$(obj_path)/%.o : $(src_path)/%.c
	@gcc -MMD $(dir) -c $< -o $@
	@echo "object files finished!\n"

clean :
	@-rm -f $(obj_path)/*.o
	@echo "object files clean!\n"
	@-rm -f ./main
	@echo "final out files clean!\n"

allclean :
	@make clean
	@-rm -f $(obj_path)/*.d
	@echo ".d files clean"

makeall :
	mkdir -p $(obj_path)
	@make

-include $(obj_path)/*.d
