#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Needed for isdigit()

// Run-length compression
void compress(const char *input, char *output) {
    int count, i, j = 0;
    for (i = 0; input[i] != '\0'; i++) {
        output[j++] = input[i];
        count = 1;
        while (input[i] == input[i + 1]) {
            count++;
            i++;
        }
        j += sprintf(&output[j], "%d", count);  // Write count after character
    }
    output[j] = '\0';
}

// Run-length decompression
void decompress(const char *input, char *output) {
    int i = 0, j = 0;
    while (input[i] != '\0') {
        char ch = input[i++];
        int count = 0;
        while (isdigit((unsigned char)input[i])) {  // Ensure valid for isdigit
            count = count * 10 + (input[i++] - '0');
        }
        for (int k = 0; k < count; k++) {
            output[j++] = ch;
        }
    }
    output[j] = '\0';
}

int main() {
    char str[100], compressed[200], decompressed[200];

    printf("Enter a string to compress (no spaces): ");
    scanf("%99s", str);  // Prevent buffer overflow

    compress(str, compressed);
    printf("Compressed: %s\n", compressed);

    decompress(compressed, decompressed);
    printf("Decompressed: %s\n", decompressed);

    return 0;
}
