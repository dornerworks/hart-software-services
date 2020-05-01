/* ******************************************************************************
* Copyright © 2015 Microsemi Corporation                                        *
* Permission is hereby granted, free of charge, to any person obtaining a copy  *
* of this software and associated documentation files (the "Software"), to deal *
* in the Software without restriction, including without limitation the rights  *
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell     *
* copies of the Software, and to permit persons to whom the Software is         *
* furnished to do so, subject to the following conditions:                      *
* The above copyright notice and this permission notice shall be included in    *
* all copies or substantial portions of the Software.                           *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, *
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     *
* THE SOFTWARE.                                                                 *
******************************************************************************* */
const uint8_t vsc_viper_phy_micro_patch_9995[] = {
0xe9, 0x78, 0x02, 0xe8, 0xe4, 0x02, 0xe9, 0x6c, 0x02, 0xe9,
0x7b, 0x02, 0xe9, 0x7c, 0x02, 0xe9, 0x7d, 0xe4, 0xf5, 0x11,
0x12, 0xe9, 0x65, 0x20, 0xe7, 0x1e, 0x7b, 0xfe, 0x12, 0xe8,
0xce, 0xef, 0xc4, 0x33, 0x33, 0x54, 0xc0, 0xff, 0xc0, 0x07,
0x7b, 0x54, 0x12, 0xe8, 0xce, 0xd0, 0xe0, 0x4f, 0xff, 0x74,
0x16, 0x25, 0x11, 0xf8, 0xa6, 0x07, 0x12, 0xe9, 0x65, 0x20,
0xe7, 0x03, 0x02, 0xe8, 0xc1, 0x54, 0x03, 0x64, 0x03, 0x60,
0x62, 0x7b, 0xcb, 0x12, 0xe8, 0xd9, 0x8f, 0xfb, 0x7b, 0x20,
0x12, 0xe8, 0xd9, 0xef, 0x4e, 0x70, 0x3c, 0x7b, 0x22, 0x7d,
0x18, 0x7f, 0x06, 0x12, 0x3d, 0xff, 0xef, 0x64, 0x01, 0x4e,
0x60, 0x1c, 0x7d, 0x1c, 0xe4, 0xff, 0x12, 0x3f, 0x07, 0xef,
0x54, 0x1b, 0x64, 0x0a, 0x70, 0x16, 0x7b, 0xcc, 0x7d, 0x10,
0xff, 0x12, 0x3d, 0xff, 0xef, 0x64, 0x01, 0x4e, 0x70, 0x08,
0x12, 0xe9, 0x5b, 0xe4, 0xfb, 0xfa, 0x80, 0x1a, 0x12, 0xe9,
0x5b, 0x7b, 0x01, 0x7a, 0x00, 0x80, 0x11, 0x12, 0xe9, 0x5b,
0x12, 0xe9, 0x65, 0x54, 0x40, 0xfe, 0xc4, 0x13, 0x13, 0x54,
0x03, 0xfb, 0x7a, 0x00, 0x7d, 0xee, 0x12, 0x39, 0x0f, 0xe5,
0x11, 0x24, 0x17, 0xfd, 0x7b, 0xff, 0x7f, 0x04, 0x12, 0x3d,
0xff, 0xef, 0x4e, 0x70, 0x07, 0x74, 0x16, 0x25, 0x11, 0xf8,
0xe4, 0xf6, 0x05, 0x11, 0xe5, 0x11, 0xc3, 0x94, 0x02, 0x50,
0x03, 0x02, 0xe8, 0x15, 0x22, 0xe5, 0x11, 0x24, 0x17, 0xfd,
0x7f, 0x04, 0x12, 0x3d, 0xff, 0x22, 0xe5, 0x11, 0x24, 0x17,
0xfd, 0x7f, 0x04, 0x12, 0x3d, 0xff, 0x22, 0xd2, 0x02, 0x75,
0xfb, 0x03, 0xab, 0x70, 0xaa, 0x6f, 0x7d, 0x19, 0x7f, 0x03,
0x12, 0x3f, 0x47, 0xe5, 0x70, 0x54, 0x0f, 0x24, 0xf3, 0x70,
0x48, 0xe5, 0x70, 0xae, 0x6f, 0x78, 0x04, 0xce, 0xa2, 0xe7,
0x13, 0xce, 0x13, 0xd8, 0xf8, 0xff, 0x20, 0xe2, 0x41, 0x13,
0x92, 0x01, 0xef, 0xa2, 0xe1, 0x92, 0x00, 0x30, 0x01, 0x36,
0xe4, 0xf5, 0x10, 0x7b, 0xfe, 0x12, 0xe9, 0x50, 0xef, 0xc4,
0x33, 0x33, 0x54, 0xc0, 0xff, 0xc0, 0x07, 0x7b, 0x54, 0x12,
0xe9, 0x50, 0xd0, 0xe0, 0x4f, 0xff, 0x74, 0x16, 0x25, 0x10,
0xf8, 0xa6, 0x07, 0x05, 0x10, 0xe5, 0x10, 0xc3, 0x94, 0x02,
0x40, 0xd9, 0x22, 0x7b, 0x01, 0x7a, 0x00, 0x7d, 0xee, 0x7f,
0x92, 0x12, 0x39, 0x0f, 0x22, 0xe5, 0x10, 0x24, 0x17, 0xfd,
0x7f, 0x04, 0x12, 0x3d, 0xff, 0x22, 0xe5, 0x11, 0x24, 0x17,
0x54, 0x1f, 0x44, 0x80, 0xff, 0x22, 0x74, 0x16, 0x25, 0x11,
0xf8, 0xe6, 0x22, 0x30, 0x01, 0x03, 0x12, 0xe8, 0x12, 0x22,
0xc2, 0x01, 0xc2, 0x00, 0x22, 0x02, 0xe9, 0x73, 0x22, 0x22,
0x22
};