#include <gumbo/gumbo.h>

#include <stdlib.h>
#include <string.h>

#include <iostream>
//
int main(int argc, char *argv[])
{
	// taken from: https://github.com/google/gumbo-parser
	GumboOutput* output = gumbo_parse("<h1>Hello, World!</h1>");
	
	if(output)
	{
		// Do stuff with output->root
		gumbo_destroy_output(&kGumboDefaultOptions, output);
		std::cout << "Success" << std::endl;
		return EXIT_SUCCESS;
	}
	
    // do something
	return EXIT_FAILURE;
}
