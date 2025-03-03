//This header file defines the struct that will represent directories and any relevant maximums.
#define MAX_TITLE_CHAR 20
#define MAX_FILES 50

struct contextDir {
    char dirTitle[MAX_TITLE_CHAR];
    char fileTitle[MAX_FILES][MAX_TITLE_CHAR];
};