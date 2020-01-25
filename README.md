# C-Language-To-WASM
Convert C Language code to web assembly using emscripten.

Download emcc.
https://emscripten.org/docs/getting_started/downloads.html

Download git terminal from this url if you haven't installed it already.
https://git-scm.com/downloads

Use the following command to create the .wasm file. Discard the html if you don't need it.

emcc functions.c -s WASM=1 -o functions.html
