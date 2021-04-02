/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar      = 1;                 /* -b  option; if 0, dmenu appears at bottom     */
static int incremental = 1;                 /* -r  option; if 1, outputs text each time a key is pressed */
static int fuzzy       = 1;             	/* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered    = 0;                 /* -c option; centers dmenu on screen */
static int min_width   = 500;               /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono:size=14"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]          = { "#bbbbbb", "#282a36" },
	[SchemeSel]           = { "#eeeeee", "#61afe0" },
	[SchemeSelHighlight]  = { "#35ff99", "#61afe0" },
	[SchemeNormHighlight] = { "#35ff99", "#282a36" },
	[SchemeOut]           = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight     = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
