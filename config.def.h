/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10", "Blobmoji:pixelsize=10:antialias=true:autohint=true"
};
static const unsigned int alpha = 0xcc;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#F8F8F2", "#272822"  },
	[SchemeSel] = { "#f8f8f2", "#7aa6da" },
	[SchemeSelHighlight] = { "#75715e", "#66D9EF" },
	[SchemeNormHighlight] = { "#f92672", "#272822" },
	[SchemeOut] = { "#F4BF75", "#e7c547" },
};
static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel] = { OPAQUE, alpha },
    [SchemeOut] = { OPAQUE, alpha },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 24;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
