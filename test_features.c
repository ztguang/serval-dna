/*
Serval DNA test features
Copyright (C) 2016 Flinders University

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include "feature.h"

void test_features()
{
  USE_FEATURE(cli_version);
  USE_FEATURE(cli_echo);
  USE_FEATURE(cli_log);
  USE_FEATURE(cli_vomp_console);
  USE_FEATURE(cli_tests);
  USE_FEATURE(log_output_console);
}

void command_cleanup() {}
