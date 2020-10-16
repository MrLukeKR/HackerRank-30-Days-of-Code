function processData(input) {
    words = input.split('\n');

    for(var word_count = 1; word_count <= words[0]; word_count++){
        word = words[word_count];

        var odd_word = "";
        var even_word = "";

        for(var i = 0; i < word.length; i++){
            if (i % 2 == 0)
                even_word = even_word.concat(word[i]);
            else
                odd_word = odd_word.concat(word[i]);
        }

        console.log(even_word + " " + odd_word);
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
