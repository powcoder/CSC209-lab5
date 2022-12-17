https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef BITMAP_H_
#define BITMAP_H_

struct pixel {
    unsigned char blue;
    unsigned char green;
    unsigned char red;
};

void read_bitmap_metadata(FILE *image, int *pixel_array_offset, int *width, int *height);
struct pixel **read_pixel_array(FILE *image, int pixel_array_offset, int width, int height);
void print_pixel(struct pixel p);

#endif /* BITMAP_H_*/
