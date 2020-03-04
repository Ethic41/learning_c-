//function to make Histogram on commandline

int makeWordHistogram(int length) {
    int i;

    for (i = 0; i < length; i++) {
        printf("====");
    }
    printf("\n%d", length);
    //printf("\n%d", length);
    for (i = 0; i < length; i++) {
        printf("    ");
    }
    if (length < 10) {
        printf("\b\b|\n");
    } else {
        printf("\b\b\b|\n");
    }
    for (i = 0; i < length; i++) {
        printf("====");
    }
    printf("\n");

}
