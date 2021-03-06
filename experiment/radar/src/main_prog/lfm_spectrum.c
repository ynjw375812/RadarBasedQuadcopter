#include "ogl_helper.h"
#include "init_ogl.h"
#include "lfm_fft.h"
#include "math_tech.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	char str[25] = "LFM Waveform Spectrum";

	ogl_init(argc, argv, str);
	ogl_post_process(lfm_fft);

	return 0;
}
