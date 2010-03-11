/* vi: set sw=4 ts=4: */
/*
 * test-main.c
 *
 * This file is part of ________.
 *
 * Copyright (C) 2010 - kelvenxu <kelvenxu@gmail.com>.
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
 * Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 * */

#include "search-library.h"

//
// 这是daemon版的命令行版，主要用于是调试方便
//
int main(int argc,char *argv[])
{
	monitor_daemon("/dev/tty");

	return 0;
}

