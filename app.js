let calculate = Module.cwrap(
    "calculate", // name of C function
    "number", // return type
    ["number", "number"] // argument types
)

let subtract = Module.cwrap(
    "subtract", // name of C function
    "number", // return type
    ["number", "number"] // argument types
)

function run_wasm() {
    const numA = document.querySelector("#a").value;
    const numB = document.querySelector("#b").value;

    console.log("Result from WASM: " + subtract(numA, numB));
}