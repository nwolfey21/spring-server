// Copyright (c) 2016 Brian Barto
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the MIT License. See LICENSE for more details.

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include "logic/socket.h"

#include "l2/command.h"
#include "l2/periodic.h"
#include "l2/socket.h"
#include "l2/socketlist.h"

PERIODICFUNCTIONS_RETURN periodic(PERIODICFUNCTIONS_ARGS) {
	int r;

	r = socket_write(socket_get_main(), "beat");
	
	return r;
}

void load_functions(void) {
	periodic_add(&periodic);
}

int comp_type(void) {
	return CLIENT;
}
