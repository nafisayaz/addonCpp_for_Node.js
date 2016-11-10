

all: con cl run 

run:
	js world.js

cl:
	clear

con:
	node-gyp configure build


