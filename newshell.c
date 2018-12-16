/*
 * newshell.c
 * 
 * Copyright 2018 U-DESKTOP-0V3BOG8\neoge_nb4nkvy <neoge_nb4nkvy@DESKTOP-0V3BOG8>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	void exithandling(void);
	void goodbyemessage(void);
	int ret;
	
	ret = atexit(exithandling);
	if (ret != 0 ) perror("Error in atexit\n");
	ret = atexit(goodbyemessage);
	if (ret != 0) perror("Error in atexit\n");
	
	exit(EXIT_SUCCESS);
	
	
}

void exithandling(void) {
	printf("exit handling \n");
}

void goodbyemessage(void) {
	printf("See you again\n");
}
