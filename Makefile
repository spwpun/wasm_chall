CC=emcc
OUTPUT_FOLDER=./build

build:
	mkdir $(OUTPUT_FOLDER)
	$(CC) ./re.c -O1 -s WASM=1 -o $(OUTPUT_FOLDER)/re.html --shell-file html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1  -s "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall', 'cwrap']"

clean:
	rm -rf $(OUTPUT_FOLDER)/
