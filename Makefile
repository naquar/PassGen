BINARY_NAME=passgen
PROGRAM_NAME=PassGen
PROGRAM_VERSION=1.0.0
BIN=$(BINARY_NAME)
FPC=fpc
RELEASE_UNIT=-Mobjfpc -l -B -O3 -Sih -viewnh -Fu/usr/local/include/* -Xs -XS -XX
RELEASE=-Mobjfpc -l -B -O3 -Sih -viewnh -Fu/usr/local/include/* -Xs -XS -XX
DEBUG=-dDEBUG -Mobjfpc -g -l -B -O0 -Sih -viewnh -Fu/usr/local/include/* -XS -XX

LOCAL_DATE=$(shell date --utc +'%Y/%m/%d - %H:%M:%S %Z')
SOURCE_HASH=$(shell cat *.pas *.inc | sha256sum | grep -o '^[0-9a-fA-F]*')
WORD_SEPARATOR=$(shell echo ' ')

export PROGRAM_NAME
export PROGRAM_VERSION
export LOCAL_DATE
export SOURCE_HASH
export WORD_SEPARATOR

SOURCE_FILES=COPYING dict.inc dict_1.inc dict_2.inc dict_3.inc dict_4.inc dict_5.inc dict_6.inc LICENSE.txt Makefile passgen.pas READ-ME.txt README.md REPENT THANKS

release:
	@rm -rf ./bin && mkdir -p ./bin
	@$(FPC) $(RELEASE) ./$(BINARY_NAME).pas -o./bin/$(BIN)

debug:
	@rm -rf ./bin && mkdir -p ./bin
	@$(FPC) $(DEBUG) ./$(BINARY_NAME).pas -o./bin/$(BIN)

run:
	@./bin/$(BIN) $(ARG)

rundbg:
	@./bin/$(BIN)_dbg

install:
	@bash -c "if [ $$USER != 'root' ]; then echo -e 'Must be run as root.\n'; exit 1; fi"
	chmod a+x ./bin/$(BIN)
	cp ./bin/$(BIN) /usr/local/bin

source:
	@rm -r -f $(BINARY_NAME) && mkdir $(BINARY_NAME) && cp $(SOURCE_FILES) $(BINARY_NAME)
	@tar --to-stdout -c $(BINARY_NAME) | xz -v --extreme -9 --stdout > $(PROGRAM_NAME)-v$(PROGRAM_VERSION).tar.xz

clean:
	@rm -f *.o *.res *.a *.ppu ./bin/*
