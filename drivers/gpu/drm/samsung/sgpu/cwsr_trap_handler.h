/*
 * Copyright 2020 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

static const u32 cwsr_trap_m0_hex[] = {
	0xbfa00001, 0xbfa00164,
	0xb0802005, 0xb8f0f802,
	0x91708670, 0xb8f1f803,
	0x8b71ff71, 0x00000400,
	0xbfa20008, 0xb8f1f803,
	0x8b71ff71, 0x000001ff,
	0xbfa20001, 0x806c846c,
	0x8b6dff6d, 0x0000ffff,
	0xbe804a6c, 0xb8f1f803,
	0x8b71ff71, 0x00000100,
	0xbfa10006, 0xbef60080,
	0xb9760203, 0x8b6dff6d,
	0x0000ffff, 0x80ec886c,
	0x82ed806d, 0xbef60080,
	0xb9760283, 0xb8f62c07,
	0x84769a76, 0x8c6d766d,
	0xb8f603c7, 0x84769976,
	0x8c6d766d, 0xb8f60647,
	0x84769876, 0x8c6d766d,
	0xb8f6f807, 0x8b76ff76,
	0x00007fff, 0xb976f807,
	0xbeee007e, 0xbeef007f,
	0xbefe0180, 0xbefe4d84,
	0xbf89fc07, 0xbf830002,
	0xbfa5fffe, 0xbef4007e,
	0x8b75ff7f, 0x0000ffff,
	0xbef60080, 0xbef700ff,
	0x00807fac, 0x8b76ff7f,
	0x08000000, 0x85768376,
	0x8c777677, 0x8b76ff7f,
	0x70000000, 0x85768176,
	0x8c777677, 0xbefb007d,
	0xbefa0080, 0xb8f202dc,
	0x84729972, 0x8c72727f,
	0xbefe00c1, 0x857d9972,
	0x8b7d817d, 0xbf06817d,
	0xbfa20002, 0xbeff0080,
	0xbfa00001, 0xbeff00c1,
	0xb8f12a05, 0x80718171,
	0x84718271, 0x857d9972,
	0x8b7d817d, 0xbf06817d,
	0xbfa20010, 0x84768771,
	0xbef600ff, 0x01000000,
	0xbefd0080, 0x7e008700,
	0xdca6c000, 0x00740000,
	0xbc7c0000, 0x807d817d,
	0x807aff7a, 0x00000080,
	0x8074ff74, 0x00000080,
	0xbf0a717d, 0xbfa2fff5,
	0xbfa00021, 0x84768871,
	0xbef600ff, 0x01000000,
	0xbefd0080, 0x7e008700,
	0xdca6c000, 0x00740000,
	0xbc7c0000, 0x807d817d,
	0x807aff7a, 0x00000100,
	0x8074ff74, 0x00000100,
	0xbf0a717d, 0xbfa2fff5,
	0xb8f11e06, 0x8b71c171,
	0xbfa1000f, 0x84718371,
	0x80717d71, 0xbefe00c1,
	0xbeff0080, 0x7e008700,
	0xdca6c000, 0x00740000,
	0xbc7c0000, 0x807d817d,
	0x807aff7a, 0x00000080,
	0x8074ff74, 0x00000080,
	0xbf0a717d, 0xbfa2fff5,
	0xbfbd0000, 0x8b76ff72,
	0x04000000, 0xbfa1003d,
	0xbefe00c1, 0x857d9972,
	0x8b7d817d, 0xbf06817d,
	0xbfa20002, 0xbeff0080,
	0xbfa00001, 0xbeff00c1,
	0xb8f14306, 0x8b71c171,
	0xbfa10032, 0x84718671,
	0x84718271, 0xbef60071,
	0xbef600ff, 0x01000000,
	0xd71f0000, 0x000100c1,
	0xd7200000, 0x000200c1,
	0x16000084, 0x857d9972,
	0x8b7d817d, 0xbf06817d,
	0xbefd0080, 0xbfa20012,
	0xd8d80000, 0x01000000,
	0xbf890000, 0xdca6c000,
	0x00740100, 0xbc7c0000,
	0x807dff7d, 0x00000080,
	0x807aff7a, 0x00000080,
	0x8074ff74, 0x00000080,
	0xd5250000, 0x0001ff00,
	0x00000080, 0xbf0a717d,
	0xbfa2ffef, 0xbfa00011,
	0xd8d80000, 0x01000000,
	0xbf890000, 0xdca6c000,
	0x00740100, 0xbc7c0000,
	0x807dff7d, 0x00000100,
	0x807aff7a, 0x00000100,
	0x8074ff74, 0x00000100,
	0xd5250000, 0x0001ff00,
	0x00000100, 0xbf0a717d,
	0xbfa2ffef, 0x857d9972,
	0x8b7d817d, 0xbf06817d,
	0xbfa20003, 0x847682ff,
	0x00000080, 0xbfa00002,
	0x847682ff, 0x00000080,
	0xbef600ff, 0x01000000,
	0x857d9972, 0x8b7d817d,
	0xbf06817d, 0xbefd0080,
	0xbf800000, 0xbfa2003d,
	0xbe804000, 0xd7610000,
	0x0000fa00, 0x807d817d,
	0xbf0aa07d, 0xbfa2fffa,
	0xdca6c000, 0x00740000,
	0xbc7c0000, 0x807aff7a,
	0x00000080, 0x8074ff74,
	0x00000080, 0xbe804000,
	0x80fda07d, 0xd7610000,
	0x0000fa00, 0x807da17d,
	0xbf0ac07d, 0xbfa2fff9,
	0xdca6c000, 0x00740000,
	0xbc7c0000, 0x807aff7a,
	0x00000080, 0x8074ff74,
	0x00000080, 0xbe804000,
	0x80fdc07d, 0xd7610000,
	0x0000fa00, 0x807dff7d,
	0x00000041, 0xbf0aff7d,
	0x00000060, 0xbfa2fff7,
	0xdca6c000, 0x00740000,
	0xbc7c0000, 0x807aff7a,
	0x00000080, 0x8074ff74,
	0x00000080, 0xbe804000,
	0x80fdff7d, 0x00000060,
	0xd7610000, 0x0000fa00,
	0x807dff7d, 0x00000061,
	0xbf0aff7d, 0x00000080,
	0xbfa2fff6, 0xdca6c000,
	0x00740000, 0xbc7c0000,
	0x807aff7a, 0x00000080,
	0x8074ff74, 0x00000080,
	0xbfa0001d, 0xbe804000,
	0xd7610000, 0x0000fa00,
	0x807d817d, 0xbf0ac07d,
	0xbfa2fffa, 0xdca6c000,
	0x00740000, 0xbc7c0000,
	0x807aff7a, 0x00000100,
	0x8074ff74, 0x00000100,
	0xbe804000, 0x80fdc07d,
	0xd7610000, 0x0000fa00,
	0x807dff7d, 0x00000041,
	0xbf0aff7d, 0x00000080,
	0xbfa2fff7, 0xdca6c000,
	0x00740000, 0xbc7c0000,
	0x807aff7a, 0x00000100,
	0x8074ff74, 0x00000100,
	0xbef60084, 0xbef600ff,
	0x01000000, 0xbefd0080,
	0xd7610000, 0x0000fa7b,
	0x807d817d, 0xd7610000,
	0x0000fa6c, 0x807d817d,
	0xd7610000, 0x0000fa6d,
	0x807d817d, 0xd7610000,
	0x0000fa6e, 0x807d817d,
	0xd7610000, 0x0000fa6f,
	0x807d817d, 0xd7610000,
	0x0000fa70, 0x807d817d,
	0xb8f1f803, 0xd7610000,
	0x0000fa71, 0x807d817d,
	0xd7610000, 0x0000fa80,
	0x807d817d, 0xb8fbf801,
	0xd7610000, 0x0000fa7b,
	0x807d817d, 0xb8fbf814,
	0xd7610000, 0x0000fa7b,
	0x807d817d, 0xb8fbf815,
	0xd7610000, 0x0000fa7b,
	0x807d817d, 0x857d9972,
	0x8b7d817d, 0xbf06817d,
	0xbfa20004, 0xdca6c000,
	0x00740000, 0xbc7c0000,
	0xbfa00004, 0xbeff0080,
	0xdca6c000, 0x00740000,
	0xbc7c0000, 0xbfa00166,
	0xbef4007e, 0x8b75ff7f,
	0x0000ffff, 0xbef60080,
	0xbef700ff, 0x00807fac,
	0x8b72ff7f, 0x08000000,
	0x85728372, 0x8c777277,
	0x8b72ff7f, 0x70000000,
	0x85728172, 0x8c777277,
	0xb8f902dc, 0x84799979,
	0x8c79797f, 0xbef80080,
	0xbefe00c1, 0x857d9979,
	0x8b7d817d, 0xbf06817d,
	0xbfa20002, 0xbeff0080,
	0xbfa00001, 0xbeff00c1,
	0xb8ef2a05, 0x806f816f,
	0x846f826f, 0x857d9979,
	0x8b7d817d, 0xbf06817d,
	0xbfa2001b, 0x8476876f,
	0xbef600ff, 0x01000000,
	0x8078ff78, 0x00000080,
	0xbef20074, 0xbef30075,
	0x8074ff74, 0x00000080,
	0xbefd0081, 0xdca2c000,
	0x00740000, 0xbf8903f7,
	0x7e008500, 0x807d817d,
	0x8078ff78, 0x00000080,
	0x8074ff74, 0x00000080,
	0xbf0a6f7d, 0xbfa2fff5,
	0xdca2c000, 0x00720000,
	0xbef50073, 0xbef30072,
	0xbf8903f7, 0xbfa0002d,
	0x8476886f, 0xbef600ff,
	0x01000000, 0x8078ff78,
	0x00000100, 0xbef20074,
	0xbef30075, 0x8074ff74,
	0x00000100, 0xbefd0081,
	0xdca2c000, 0x00740000,
	0xbf8903f7, 0x7e008500,
	0x807d817d, 0x8078ff78,
	0x00000100, 0x8074ff74,
	0x00000100, 0xbf0a6f7d,
	0xbfa2fff5, 0xb8ef1e06,
	0x8b6fc16f, 0xbfa10010,
	0x846f836f, 0x806f7d6f,
	0xbefe00c1, 0xbeff0080,
	0xdca2c000, 0x00740000,
	0xbf8903f7, 0x7e008500,
	0x807d817d, 0x8078ff78,
	0x00000080, 0x8074ff74,
	0x00000080, 0xbf0a6f7d,
	0xbfa2fff5, 0xbeff00c1,
	0xdca2c000, 0x00720000,
	0xbef50073, 0xbef30072,
	0xbf8903f7, 0x8b72ff79,
	0x04000000, 0xbfa10037,
	0xbefe00c1, 0x857d9979,
	0x8b7d817d, 0xbf06817d,
	0xbfa20002, 0xbeff0080,
	0xbfa00001, 0xbeff00c1,
	0xb8ef4306, 0x8b6fc16f,
	0xbfa1002c, 0x846f866f,
	0x846f826f, 0xbef6006f,
	0xbef600ff, 0x01000000,
	0x8b7d8172, 0xbf06817d,
	0xbefd0080, 0xbfa20012,
	0xdca20000, 0x0b740000,
	0xbf890000, 0x16080084,
	0xd7006a04, 0x0000fb04,
	0xd8340000, 0x00000b04,
	0xbf890000, 0x807dff7d,
	0x00000080, 0x8078ff78,
	0x00000080, 0x8074ff74,
	0x00000080, 0xbf0a6f7d,
	0xbfa2ffef, 0xbfa00011,
	0xdca20000, 0x0b740000,
	0xbf890000, 0x16080084,
	0xd7006a04, 0x0000fb04,
	0xd8340000, 0x00000b04,
	0xbf890000, 0x807dff7d,
	0x00000100, 0x8078ff78,
	0x00000100, 0x8074ff74,
	0x00000100, 0xbf0a6f7d,
	0xbfa2ffef, 0xbef40073,
	0x8c75ff75, 0x00040000,
	0x857d9979, 0x8b7d817d,
	0xbf06817d, 0xbfa20003,
	0x847682ff, 0x00000080,
	0xbfa00002, 0x847682ff,
	0x00000080, 0xbef600ff,
	0x01000000, 0x857d9979,
	0x8b7d817d, 0xbf06817d,
	0xbfa20014, 0xf4205cba,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xbefd0081,
	0xf420403a, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xbf89fc07, 0xbe804200,
	0xbf800000, 0x807d817d,
	0xbf0aff7d, 0x0000006c,
	0xbfa2fff5, 0xbe800072,
	0x8078ff78, 0x00000050,
	0xbfa00013, 0xf4205cba,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xbefd0081,
	0xf420403a, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xbf89fc07, 0xbe804200,
	0xbf800000, 0x807d817d,
	0xbf0aff7d, 0x0000006c,
	0xbfa2fff5, 0xbe800072,
	0x8078ff78, 0x00000050,
	0xbef60084, 0xbef600ff,
	0x01000000, 0x857d9979,
	0x8b7d817d, 0xbf06817d,
	0xbfa2002f, 0xf4205bfa,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205b3a,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205b7a,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205eba,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205efa,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205c3a,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205c7a,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205cfa,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205e7a,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xf4205bba,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xb96ef814,
	0xf4205bba, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xb96ef815, 0xbfa0002e,
	0xf4205bfa, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205b3a, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205b7a, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205eba, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205efa, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205c3a, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205c7a, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205cfa, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205e7a, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xf4205bba, 0xf0000000,
	0xbf89fc07, 0x80788478,
	0xb96ef814, 0xf4205bba,
	0xf0000000, 0xbf89fc07,
	0x80788478, 0xb96ef815,
	0xbf89fc07, 0xbef2006d,
	0x8b6dff72, 0x0000ffff,
	0xbefd006f, 0xbefe007a,
	0xbeff007b, 0x8b6f71ff,
	0x000003ff, 0xb96f4803,
	0x8b6f71ff, 0xfffff800,
	0x856f8b6f, 0xb96fa2c3,
	0xb979f801, 0x8b6fff72,
	0xfc000000, 0x856f9a6f,
	0x846f906f, 0xbef90080,
	0x8c796f79, 0x8b6fff72,
	0x02000000, 0x856f996f,
	0x846f8f6f, 0x8c796f79,
	0x8b6fff72, 0x01000000,
	0x856f986f, 0x846f996f,
	0x8c796f79, 0x8b6fff70,
	0x00800000, 0x856f976f,
	0xb979f807, 0xb970f802,
	0xbfbd0000, 0xbe804a6c,
	0xbfb00000, 0xbf9f0000,
	0xbf9f0000, 0xbf9f0000,
	0xbf9f0000, 0xbf9f0000,
};

static const u32 cwsr_trap_nv14_hex[] = {
	0xbf820001, 0xbf8201c1,
	0xb0804004, 0xb978f802,
	0x8a788678, 0xb971f803,
	0x876eff71, 0x00000400,
	0xbf850033, 0x876eff71,
	0x00000100, 0xbf840002,
	0x8878ff78, 0x00002000,
	0x8a77ff77, 0xff000000,
	0xb96ef807, 0x876fff6e,
	0x02000000, 0x8f6f866f,
	0x88776f77, 0x876fff6e,
	0x003f8000, 0x8f6f896f,
	0x88776f77, 0x8a6eff6e,
	0x023f8000, 0xb9eef807,
	0xb97af812, 0xb97bf813,
	0x8ffa887a, 0xf4051bbd,
	0xfa000000, 0xbf8cc07f,
	0xf4051ebd, 0xfa000008,
	0xbf8cc07f, 0x87ee6e6e,
	0xbf840001, 0xbe80206e,
	0xb971f803, 0x8771ff71,
	0x000001ff, 0xbf850002,
	0x806c846c, 0x826d806d,
	0x876dff6d, 0x0000ffff,
	0x906e8977, 0x876fff6e,
	0x003f8000, 0x906e8677,
	0x876eff6e, 0x02000000,
	0x886e6f6e, 0xb9eef807,
	0x87fe7e7e, 0x87ea6a6a,
	0xb9f8f802, 0xbe80226c,
	0xb971f803, 0x8771ff71,
	0x00000100, 0xbf840006,
	0xbef60380, 0xb9f60203,
	0x876dff6d, 0x0000ffff,
	0x80ec886c, 0x82ed806d,
	0xbef60380, 0xb9f60283,
	0xb972f816, 0xb9762c07,
	0x8f769a76, 0x886d766d,
	0xb97603c7, 0x8f769976,
	0x886d766d, 0xb9760647,
	0x8f769876, 0x886d766d,
	0xb976f807, 0x8776ff76,
	0x00007fff, 0xb9f6f807,
	0xbeee037e, 0xbeef037f,
	0xbefe0480, 0xbf900004,
	0xbf8e0002, 0xbf88fffe,
	0xbef4037e, 0x8775ff7f,
	0x0000ffff, 0x8875ff75,
	0x00040000, 0xbef60380,
	0xbef703ff, 0x10807fac,
	0x8776ff7f, 0x08000000,
	0x90768376, 0x88777677,
	0x8776ff7f, 0x70000000,
	0x90768176, 0x88777677,
	0xbefb037c, 0xbefa0380,
	0xb97302dc, 0x8f739973,
	0x8873737f, 0xb97a2a05,
	0x807a817a, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f7a897a,
	0xbf820001, 0x8f7a8a7a,
	0xb9761e06, 0x8f768a76,
	0x807a767a, 0x807aff7a,
	0x00000200, 0xbef603ff,
	0x01000000, 0xbefe037c,
	0xbefc037a, 0xf4611efa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611b3a,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611b7a,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611bba,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611bfa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611e3a,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xb971f803,
	0xbefe037c, 0xbefc037a,
	0xf4611c7a, 0xf8000000,
	0x807a847a, 0xbefc037e,
	0xbefe037c, 0xbefc037a,
	0xf4611cba, 0xf8000000,
	0x807a847a, 0xbefc037e,
	0xb97bf801, 0xbefe037c,
	0xbefc037a, 0xf4611efa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xb97bf814,
	0xbefe037c, 0xbefc037a,
	0xf4611efa, 0xf8000000,
	0x807a847a, 0xbefc037e,
	0xb97bf815, 0xbefe037c,
	0xbefc037a, 0xf4611efa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0x8776ff7f,
	0x04000000, 0xbeef0380,
	0x886f6f76, 0xb97a2a05,
	0x807a817a, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f7a897a,
	0xbf820001, 0x8f7a8a7a,
	0xb9761e06, 0x8f768a76,
	0x807a767a, 0xbef603ff,
	0x01000000, 0xbef20374,
	0x80747a74, 0x82758075,
	0xbefc0380, 0xbf800000,
	0xbe802f00, 0xbe822f02,
	0xbe842f04, 0xbe862f06,
	0xbe882f08, 0xbe8a2f0a,
	0xbe8c2f0c, 0xbe8e2f0e,
	0xf469003a, 0xfa000000,
	0xf469013a, 0xfa000010,
	0xf469023a, 0xfa000020,
	0xf469033a, 0xfa000030,
	0x8074c074, 0x82758075,
	0x807c907c, 0xbf0aff7c,
	0x00000060, 0xbf85ffea,
	0xbe802f00, 0xbe822f02,
	0xbe842f04, 0xbe862f06,
	0xbe882f08, 0xbe8a2f0a,
	0xf469003a, 0xfa000000,
	0xf469013a, 0xfa000010,
	0xf469023a, 0xfa000020,
	0x8074b074, 0x82758075,
	0xbef40372, 0xbefa0380,
	0xbefe03c1, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0xbeff0380,
	0xbf820002, 0xbeff03c1,
	0xbf82000b, 0xbef603ff,
	0x01000000, 0xe0704000,
	0x7a5d0000, 0xe0704080,
	0x7a5d0100, 0xe0704100,
	0x7a5d0200, 0xe0704180,
	0x7a5d0300, 0xbf82000a,
	0xbef603ff, 0x01000000,
	0xe0704000, 0x7a5d0000,
	0xe0704100, 0x7a5d0100,
	0xe0704200, 0x7a5d0200,
	0xe0704300, 0x7a5d0300,
	0xbefe03c1, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0xbeff0380,
	0xbf820001, 0xbeff03c1,
	0xb9714306, 0x8771c171,
	0xbf840046, 0xbf8a0000,
	0x8776ff6f, 0x04000000,
	0xbf840042, 0x8f718671,
	0x8f718271, 0xbef60371,
	0xb97a2a05, 0x807a817a,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850002,
	0x8f7a897a, 0xbf820001,
	0x8f7a8a7a, 0xb9761e06,
	0x8f768a76, 0x807a767a,
	0x807aff7a, 0x00000200,
	0x807aff7a, 0x00000080,
	0xbef603ff, 0x01000000,
	0xd7650000, 0x000100c1,
	0xd7660000, 0x000200c1,
	0x16000084, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbefc0380, 0xbf850012,
	0xbe8303ff, 0x00000080,
	0xbf800000, 0xbf800000,
	0xbf800000, 0xd8d80000,
	0x01000000, 0xbf8c0000,
	0xe0704000, 0x7a5d0100,
	0x807c037c, 0x807a037a,
	0xd5250000, 0x0001ff00,
	0x00000080, 0xbf0a717c,
	0xbf85fff4, 0xbf820011,
	0xbe8303ff, 0x00000100,
	0xbf800000, 0xbf800000,
	0xbf800000, 0xd8d80000,
	0x01000000, 0xbf8c0000,
	0xe0704000, 0x7a5d0100,
	0x807c037c, 0x807a037a,
	0xd5250000, 0x0001ff00,
	0x00000100, 0xbf0a717c,
	0xbf85fff4, 0xbefe03c1,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850004,
	0xbefa03ff, 0x00000200,
	0xbeff0380, 0xbf820003,
	0xbefa03ff, 0x00000400,
	0xbeff03c1, 0xb9712a05,
	0x80718171, 0x8f718271,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850017,
	0xbef603ff, 0x01000000,
	0xbefc0384, 0xbf0a717c,
	0xbf840037, 0x7e008700,
	0x7e028701, 0x7e048702,
	0x7e068703, 0xe0704000,
	0x7a5d0000, 0xe0704080,
	0x7a5d0100, 0xe0704100,
	0x7a5d0200, 0xe0704180,
	0x7a5d0300, 0x807c847c,
	0x807aff7a, 0x00000200,
	0xbf0a717c, 0xbf85ffef,
	0xbf820025, 0xbef603ff,
	0x01000000, 0xbefc0384,
	0xbf0a717c, 0xbf840020,
	0x7e008700, 0x7e028701,
	0x7e048702, 0x7e068703,
	0xe0704000, 0x7a5d0000,
	0xe0704100, 0x7a5d0100,
	0xe0704200, 0x7a5d0200,
	0xe0704300, 0x7a5d0300,
	0x807c847c, 0x807aff7a,
	0x00000400, 0xbf0a717c,
	0xbf85ffef, 0xb9711e06,
	0x8771c171, 0xbf84000c,
	0x8f718371, 0x80717c71,
	0xbefe03c1, 0xbeff0380,
	0x7e008700, 0xe0704000,
	0x7a5d0000, 0x807c817c,
	0x807aff7a, 0x00000080,
	0xbf0a717c, 0xbf85fff8,
	0xbf820142, 0xbef4037e,
	0x8775ff7f, 0x0000ffff,
	0x8875ff75, 0x00040000,
	0xbef60380, 0xbef703ff,
	0x10807fac, 0x8772ff7f,
	0x08000000, 0x90728372,
	0x88777277, 0x8772ff7f,
	0x70000000, 0x90728172,
	0x88777277, 0xb97302dc,
	0x8f739973, 0x8873737f,
	0x8772ff7f, 0x04000000,
	0xbf840036, 0xbefe03c1,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850002,
	0xbeff0380, 0xbf820001,
	0xbeff03c1, 0xb96f4306,
	0x876fc16f, 0xbf84002b,
	0x8f6f866f, 0x8f6f826f,
	0xbef6036f, 0xb9782a05,
	0x80788178, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f788978,
	0xbf820001, 0x8f788a78,
	0xb9721e06, 0x8f728a72,
	0x80787278, 0x8078ff78,
	0x00000200, 0x8078ff78,
	0x00000080, 0xbef603ff,
	0x01000000, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbefc0380, 0xbf850009,
	0xe0310000, 0x781d0000,
	0x807cff7c, 0x00000080,
	0x8078ff78, 0x00000080,
	0xbf0a6f7c, 0xbf85fff8,
	0xbf820008, 0xe0310000,
	0x781d0000, 0x807cff7c,
	0x00000100, 0x8078ff78,
	0x00000100, 0xbf0a6f7c,
	0xbf85fff8, 0xbef80380,
	0xbefe03c1, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0xbeff0380,
	0xbf820001, 0xbeff03c1,
	0xb96f2a05, 0x806f816f,
	0x8f6f826f, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850021, 0xbef603ff,
	0x01000000, 0xbef20378,
	0x8078ff78, 0x00000200,
	0xbefc0384, 0xe0304000,
	0x785d0000, 0xe0304080,
	0x785d0100, 0xe0304100,
	0x785d0200, 0xe0304180,
	0x785d0300, 0xbf8c3f70,
	0x7e008500, 0x7e028501,
	0x7e048502, 0x7e068503,
	0x807c847c, 0x8078ff78,
	0x00000200, 0xbf0a6f7c,
	0xbf85ffee, 0xe0304000,
	0x725d0000, 0xe0304080,
	0x725d0100, 0xe0304100,
	0x725d0200, 0xe0304180,
	0x725d0300, 0xbf820032,
	0xbef603ff, 0x01000000,
	0xbef20378, 0x8078ff78,
	0x00000400, 0xbefc0384,
	0xe0304000, 0x785d0000,
	0xe0304100, 0x785d0100,
	0xe0304200, 0x785d0200,
	0xe0304300, 0x785d0300,
	0xbf8c3f70, 0x7e008500,
	0x7e028501, 0x7e048502,
	0x7e068503, 0x807c847c,
	0x8078ff78, 0x00000400,
	0xbf0a6f7c, 0xbf85ffee,
	0xb96f1e06, 0x876fc16f,
	0xbf84000e, 0x8f6f836f,
	0x806f7c6f, 0xbefe03c1,
	0xbeff0380, 0xe0304000,
	0x785d0000, 0xbf8c3f70,
	0x7e008500, 0x807c817c,
	0x8078ff78, 0x00000080,
	0xbf0a6f7c, 0xbf85fff7,
	0xbeff03c1, 0xe0304000,
	0x725d0000, 0xe0304100,
	0x725d0100, 0xe0304200,
	0x725d0200, 0xe0304300,
	0x725d0300, 0xbf8c3f70,
	0xb9782a05, 0x80788178,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850002,
	0x8f788978, 0xbf820001,
	0x8f788a78, 0xb9721e06,
	0x8f728a72, 0x80787278,
	0x8078ff78, 0x00000200,
	0x80f8ff78, 0x00000050,
	0xbef603ff, 0x01000000,
	0xbefc03ff, 0x0000006c,
	0x80f89078, 0xf429003a,
	0xf0000000, 0xbf8cc07f,
	0x80fc847c, 0xbf800000,
	0xbe803100, 0xbe823102,
	0x80f8a078, 0xf42d003a,
	0xf0000000, 0xbf8cc07f,
	0x80fc887c, 0xbf800000,
	0xbe803100, 0xbe823102,
	0xbe843104, 0xbe863106,
	0x80f8c078, 0xf431003a,
	0xf0000000, 0xbf8cc07f,
	0x80fc907c, 0xbf800000,
	0xbe803100, 0xbe823102,
	0xbe843104, 0xbe863106,
	0xbe883108, 0xbe8a310a,
	0xbe8c310c, 0xbe8e310e,
	0xbf06807c, 0xbf84fff0,
	0xb9782a05, 0x80788178,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850002,
	0x8f788978, 0xbf820001,
	0x8f788a78, 0xb9721e06,
	0x8f728a72, 0x80787278,
	0x8078ff78, 0x00000200,
	0xbef603ff, 0x01000000,
	0xf4211bfa, 0xf0000000,
	0x80788478, 0xf4211b3a,
	0xf0000000, 0x80788478,
	0xf4211b7a, 0xf0000000,
	0x80788478, 0xf4211eba,
	0xf0000000, 0x80788478,
	0xf4211efa, 0xf0000000,
	0x80788478, 0xf4211c3a,
	0xf0000000, 0x80788478,
	0xf4211c7a, 0xf0000000,
	0x80788478, 0xf4211e7a,
	0xf0000000, 0x80788478,
	0xf4211cfa, 0xf0000000,
	0x80788478, 0xf4211bba,
	0xf0000000, 0x80788478,
	0xbf8cc07f, 0xb9eef814,
	0xf4211bba, 0xf0000000,
	0x80788478, 0xbf8cc07f,
	0xb9eef815, 0xbef2036d,
	0x876dff72, 0x0000ffff,
	0xbefc036f, 0xbefe037a,
	0xbeff037b, 0x876f71ff,
	0x000003ff, 0xb9ef4803,
	0xb9f9f816, 0x876f71ff,
	0xfffff800, 0x906f8b6f,
	0xb9efa2c3, 0xb9f3f801,
	0x876fff72, 0xfc000000,
	0x906f9a6f, 0x8f6f906f,
	0xbef30380, 0x88736f73,
	0x876fff72, 0x02000000,
	0x906f996f, 0x8f6f8f6f,
	0x88736f73, 0x876fff72,
	0x01000000, 0x906f986f,
	0x8f6f996f, 0x88736f73,
	0x876fff70, 0x00800000,
	0x906f976f, 0xb9f3f807,
	0x87fe7e7e, 0x87ea6a6a,
	0xb9f0f802, 0xbf8a0000,
	0xbe80226c, 0xbf810000,
	0xbf9f0000, 0xbf9f0000,
	0xbf9f0000, 0xbf9f0000,
	0xbf9f0000, 0x00000000,
};
