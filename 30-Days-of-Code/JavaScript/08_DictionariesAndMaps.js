function processData(input) {
    var inputs = input.split('\n');
    var count = parseInt(inputs[0]);
    var dict = {};

    for (var i = 1; i <= count; i++)
    {
        var curr = inputs[i];
        var values = curr.split(" ");

        dict[values[0]] = values[1];
    }

    for (var i = count + 1; i < inputs.length; i++){
        var name = inputs[i];

        if (name in dict)
            console.log(name + "=" + dict[name]);
        else
            console.log("Not found");
    }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
