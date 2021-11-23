#pragma once

namespace tstyle //Contains terminal style constants
{
	//Foreground colors
	const char* fg_black = "\033[1;30m";
	const char* fg_red = "\033[1;31m";
	const char* fg_green = "\033[1;32m";
	const char* fg_yellow = "\033[1;33m";
	const char* fg_blue = "\033[1;34m";
	const char* fg_magenta = "\033[1;35m";
	const char* fg_cyan = "\033[1;36m";
	const char* fg_white = "\033[1;37m";
	const char* fg_default = "\033[1;39m";

	//Background colors
	const char* bg_black = "\033[1;40m";
	const char* bg_red = "\033[1;41m";
	const char* bg_green = "\033[1;42m";
	const char* bg_yellow = "\033[1;43m";
	const char* bg_blue = "\033[1;44m";
	const char* bg_magenta = "\033[1;45m";
	const char* bg_cyan = "\033[1;46m";
	const char* bg_white = "\033[1;47m";
	const char* bg_default = "\033[1;49m";

	//Various style controls
	const char* reset = "\033[1;0m"; //Resets styles
	const char* bold = "\033[1;1m"; //makes it bold/bright, this is often a brighter shade of the same color
	const char* bright = "\033[1;1m"; //makes it bold/bright, this is often a brighter shade of the same color
	const char* underline = "\033[1;4m";
	const char* underlined = "\033[1;4m";
	const char* crossed = "\033[1;9m";
	const char* crossed_out = "\033[1;9m";
	const char* blink = "\033[1;5m";
	const char* blink_slow = "\033[1;5m";
	const char* blink_fast = "\033[1;6m"; //Not widely supported
	const char* overline = "\033[1;53m";
	const char* overlined = "\033[1;53m";
	const char* inverse = "\033[1;7m"; //Swap foreground and background colors
	const char* bold_off = "\033[1;21m";
	const char* bright_off = "\033[1;21m";
	const char* underline_off = "\033[1;24m";
	const char* underlined_off = "\033[1;24m";
	const char* inverse_off = "\033[1;27m";
	const char* crossed_off = "\033[1;29m";
	const char* crossed_out_off = "\033[1;29m";
	const char* blink_off = "\033[1;25m";
	const char* overline_off = "\033[1;55m";
	const char* overlined_off = "\033[1;55m";
	const char* intensity_normal = "\033[1;21m";
	const char* intensity_increased = "\033[1;1m";
	const char* intensity_decreased = "\033[1;2m"; //Light font weight

	//Various other control characters
}
