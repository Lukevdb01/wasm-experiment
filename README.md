# WASM Experiment

This repository contains a simple WebAssembly (WASM) test using plain HTML, JavaScript, and C compiled to WASM with the Emscripten SDK.

## Prerequisites

* **Emscripten SDK (emsdk)** installed. Follow the [official Emscripten installation guide](https://emscripten.org/docs/getting_started/downloads.html) if you haven't installed it yet.

## Setup

1. **Clone the repository:**

   ```bash
   git clone https://github.com/Lukevdb01/wasm-experiment.git
   cd wasm-experiment
   ```

2. **Install Emscripten:**

   Follow the installation instructions from Emscripten's website if you haven't done so yet. Once installed, activate Emscripten by running:

   ```bash
   source /path/to/emsdk/emsdk_env.sh
   ```

3. **Compile the C code to WebAssembly:**

   Run the following command to compile `streaming.c` & `streaming_util.c` to a WASM module:

   ```bash
   emcc streaming.c streaming_util.c -o bin/streaming.js
   ```

   This will generate two files: `streaming.js` and `streaming.wasm`.

4. **Run the experiment:**

   Open the `index.html` file in a browser to see the WASM code in action.

#### © copyright 2025 | Luke van den Broek
