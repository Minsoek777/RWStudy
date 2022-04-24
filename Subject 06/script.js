var redSquares = document.getElementById('redSquares');
var yellowSquares = document.getElementById('yellowSquares');
var greenSquares = document.getElementById('greenSquares');
var blueSquares = document.getElementById('blueSquares');
var purpleSquares = document.getElementById('purpleSquares');
var blackSquares = document.getElementById('blackSquares');

var maxNum = 11;
for(var j = 0; j < maxNum; j++) redSquares.innerHTML += "<div class='squares'style='background-color:red'></div>";
for(var j = 0; j < maxNum - 2; j++) yellowSquares.innerHTML += "<div class='squares' style='background-color:yellow'></div>";
for(var j = 0; j < maxNum - 4; j++) greenSquares.innerHTML += "<div class='squares' style='background-color:green'></div>";
for(var j = 0; j < maxNum - 6; j++) blueSquares.innerHTML += "<div class='squares' style='background-color:blue'></div>";
for(var j = 0; j < maxNum - 8; j++) purpleSquares.innerHTML += "<div class='squares' style='background-color:rebeccapurple'></div>";
for(var j = 0; j < maxNum - 10; j++) blackSquares.innerHTML += "<div class='squares' style='background-color:black'></div>";

function Reset() {
    var hidden = document.getElementsByClassName("allSquares")[0];

    hidden.style.visibility = "visible";
}