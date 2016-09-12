// Copyright (c) 2016 Brian Barto
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the MIT License. See LICENSE for more details.

#include <string.h>
#include "config.h"

/*
 * MODULE DESCRIPTION
 * 
 * The inputcommand modules manages a character array that contains the
 * command string from the last time network_read() was executed.
 */


/*
 * Static Variables
 */
static char command[COMMAND_SIZE + 1];

/*
 * Set the command character array to all null characters
 */
void inputcommand_init(void) {
	memset(command, 0, sizeof(COMMAND_SIZE + 1));
}

/*
 * Return the command character array.
 */
char *inputcommand_get(void) {
	return command;
}

/*
 * Parse out the first number of characters equal to COMMAND_SIZE from
 * the given data string and store them in the command character array.
 */
void inputcommand_parse(char *data) {
	strncpy(command, data, COMMAND_SIZE);
}
