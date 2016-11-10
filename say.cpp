

#include <node.h>
#include <v8.h>
#include<string>
#include<iostream>

//using namespace v8;

v8::Handle<v8::Value> method(const v8::Arguments& args) {
	v8::HandleScope scope;
	char *  x = (char*)"\033[01;36mNafis\nAyaz";
	return scope.Close(v8::String::New(x));
}

void init(v8::Handle<v8::Object> target) {
	target->Set(v8::String::NewSymbol("say"),
	v8::FunctionTemplate::New(method)->GetFunction());
}

NODE_MODULE(say, init)


