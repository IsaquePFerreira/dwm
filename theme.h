static const char norm_fg[] = "#aaaaaa";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#1c2022";

static const char sel_fg[] = "#ff8c00";
static const char sel_bg[] = "#000000";
static const char sel_border[] = "#606060";

static const char urg_fg[] = "#af1d18";
static const char urg_bg[] = "#000000";
static const char urg_border[] = "#af1d18";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
