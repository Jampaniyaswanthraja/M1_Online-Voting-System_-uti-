Onilne Voting System_main = main
TEST_Onilne Voting System = Test_$(Onilne Voting System)



INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(OnlineVotingSystem).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_OnlineVotingSystem).$(EXEC))
	./$(call FixPath,$(TEST_OnlineVotingSystem).$(EXEC))

clean:
	
	$(RM) *.$(EXEC)
