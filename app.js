let exports;
WebAssembly.instantiateStreaming(
    fetch("bin/streaming.wasm"), {}
).then(results => exports = results.instance.exports);

function run_wasm() {
    const result = document.getElementById("result");
    const numA = document.getElementById("a").value;
    let sum = exports.sumOfNInts(numA);

    result.innerHTML += `Sum of first ${numA} integers is: ${sum}<br/>`;
}