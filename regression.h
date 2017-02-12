#pragma once
#include <assert.h>
#ifdef DEBUG
#define ASSERT(s)
#else
#define ASSERT(s) assert(s)
#endif

void runRegressionTests()
{
	ASSERT(
		integer<128>("\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00")
		-
		integer<128>("\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01")
		==
		integer<128>("\xFE\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF")
	);

	ASSERT(
		integer<128>("\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00")
		+
		integer<128>("\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01")
		==
		integer<128>("\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01")
	);

	ASSERT(
		integer<2048>("\xde\xcf\xb6\xfc\x3d\x33\xe9\x55\xfd\xac\x90\xe8\x88\x17\xb0\x03\xa1\x6b\x9a\xab\x72\x70\x79\x32\xa2\xa0\x8c\xbb\x33\x6f\xb0\x76\x96\x2e\xc4\xe9\x2e\xd8\x8f\x92\xc0\x2d\x4d\x41\x0f\xde\x45\x1b\x25\x3c\xbe\x37\x6b\x45\x82\x21\xe6\x4d\xb1\x23\x81\x82\xb6\x81\x62\xb7\x30\xf4\x60\x4b\xc7\xf7\xf0\x17\x0c\xb5\x75\x88\x77\x93\x52\x63\x70\xf0\x0b\xc6\x73\x43\x41\xee\xe4\xf0\x71\xec\xc8\xc1\x32\xc4\xdc\xa9\x99\x1d\x31\xb8\xa4\x7e\xdd\x19\x04\x0f\x02\xa8\x1a\xaf\xb3\x48\x9a\x29\x29\x5e\x49\x84\xe0\x94\x11\xd1\x7e\xab\xb2\xc0\x44\x7e\xa1\x1b\x5e\x9d\x0d\x1a\xf9\x02\x9a\x2e\x53\x03\x2d\x48\x96\x7c\x2c\xa6\xd7\xac\xf1\xed\x2b\x18\xbb\x01\xcb\x13\xb9\xac\xa6\xee\x55\x00\x37\x7c\x69\x61\x62\x89\x01\x54\x77\x9f\x07\x5d\x26\x34\x3a\xa9\x49\xa5\xaf\xf2\x5e\x06\x51\xb7\x1c\xe0\xde\xda\x5c\x0b\x9f\x98\xc2\x15\xfd\xba\xd8\xa9\x99\x00\xab\xa4\x8e\x4a\x16\x9d\x66\x2a\xe8\x56\x64\xb2\xb6\xc0\x93\xaf\x4d\x38\xa0\x16\x5c\xe4\xbd\x62\xc2\x46\x6b\xc9\x5a\x59\x4a\x72\x58\xfd\xb2\xcc\x36\x87\x30\x85\xe8\xa1\x04\x5b\xe0\x17\x9b\xd0\xec\x9b")
		-
		integer<2048>("\xa9\xaa\xf4\xb5\x40\x55\x2a\xed\x22\xae\x23\x48\x3f\x28\x69\xa7\x7f\xb5\x3e\xb2\xad\xac\xc2\x44\x41\xbb\x7a\x5b\x4e\xb5\xd0\x9e\x65\x71\x6f\x63\xae\xde\x63\x65\x5d\x4b\x74\x3b\x13\xa2\xc6\x87\x8f\x5a\x05\x9f\xbc\x39\x09\x53\x89\xef\x2a\xe5\xd7\xfb\xf4\x50\xee\x43\x69\xbf\x67\x26\x9d\x22\xdf\x49\xb8\xe0\x03\x8e\xc0\xd2\x96\xde\x19\x62\xaa\x08\x34\x9a\x68\x09\xcd\xce\x3a\xa8\x1e\x60\xcd\x4c\xe6\x91\x4f\x4a\x17\xa7\xcc\x3e\x9f\x31\x63\x2b\x8e\xbe\x7c\xeb\xaf\x97\xa1\xda\x39\x25\x6c\xa5\xcf\x49\x89\x80\x7a\x2f\x56\xf8\xf2\x04\x03\xf6\x5a\x2c\x20\x6f\x16\xf2\x30\xe4\x7f\x37\x79\xf4\x70\x5f\x6b\x36\xfb\x1a\x75\x8e\x76\x3d\xb3\xb2\xda\xa9\xfb\x68\x94\xd2\x13\x14\x38\xf4\x69\xf2\x5e\x49\x90\xb0\x94\x7d\xd9\xf7\x99\xcc\xa0\xaa\x91\x98\xc3\xf9\x03\x07\x00\x31\xc5\x51\xf4\xd1\x65\x5e\x36\x3b\x64\xdc\x2e\x7a\x2e\x10\x0b\x5b\x37\x91\xcc\x0f\x23\x20\x75\xca\xe9\x44\xe1\x7a\xc9\x56\x91\x38\xc1\xb7\x81\x9d\x9a\x2b\xb7\x1b\x97\xd3\x43\x67\xd6\x10\x4c\xc1\x03\x3f\x53\x20\x36\x43\x01\x5a\xe6\x20\x34\xb4\x87\xd6\x13\x60\xb9\x23")
		==
		integer<2048>("\x35\x24\xc2\x46\xfc\xde\xbe\x68\xda\xfe\x6d\xa0\x48\xef\x46\x5c\x21\xb6\x5b\xf8\xc4\xc3\xb6\xee\x60\xe5\x12\x5f\xe4\xb9\xdf\xd8\x30\xbd\x55\x85\x7f\xfa\x2c\x2d\x62\xe1\xd9\x05\xfc\x3b\x7e\x93\x95\xe2\xb8\x97\xaf\x0c\x78\xce\x5c\x5e\x86\x3d\xa9\x86\xc2\x30\x74\x73\xc7\x34\xf9\x25\x2a\xd5\x10\xcd\x53\xd5\x71\xf9\xb6\xc0\xbb\x85\x57\x8d\x61\xbe\x3e\xa8\xd9\xe5\x17\x22\x37\x44\xaa\x60\x65\x77\xf6\x18\x49\xd3\x1a\x10\xd8\x40\x3d\xe7\xa0\xe3\x73\xe9\x9d\xc4\x03\xb0\xf8\x4e\xf0\x38\xdc\xdf\x11\x4a\x88\x51\x04\x7c\x5b\xc7\x52\x7a\x9d\x25\x04\x70\xec\xab\xe2\x10\x69\x49\xd3\xcb\xb3\x54\x26\x1c\xc1\x6f\xdc\x92\x7c\x5e\xb4\xdb\x07\x4e\xf0\x69\xbe\x44\x12\x1c\x41\xeb\xfe\x87\xff\x6f\x04\x3f\x70\xa3\xe3\x21\x2d\x65\x8c\x67\x99\xfe\xb8\x0c\xeb\xf9\x5a\xff\x51\x85\x57\x8e\xea\x08\xf6\xad\x69\x5d\x5d\x39\xcf\x40\xaa\x99\x8d\xa5\x74\x12\xc2\x3a\xf3\x7c\xf0\x5f\xff\x11\x83\x37\xed\x6a\x02\x76\x8b\x81\x1e\x78\xc2\xb9\x06\x47\x2a\x73\x28\x61\x84\x48\xfd\xb1\x55\xbe\x5f\xac\x00\x44\x2f\x2b\x02\x80\xcf\xa7\x58\x41\x88\x70\x33\x78")
	);

	ASSERT(
		integer<2048>("\xde\xcf\xb6\xfc\x3d\x33\xe9\x55\xfd\xac\x90\xe8\x88\x17\xb0\x03\xa1\x6b\x9a\xab\x72\x70\x79\x32\xa2\xa0\x8c\xbb\x33\x6f\xb0\x76\x96\x2e\xc4\xe9\x2e\xd8\x8f\x92\xc0\x2d\x4d\x41\x0f\xde\x45\x1b\x25\x3c\xbe\x37\x6b\x45\x82\x21\xe6\x4d\xb1\x23\x81\x82\xb6\x81\x62\xb7\x30\xf4\x60\x4b\xc7\xf7\xf0\x17\x0c\xb5\x75\x88\x77\x93\x52\x63\x70\xf0\x0b\xc6\x73\x43\x41\xee\xe4\xf0\x71\xec\xc8\xc1\x32\xc4\xdc\xa9\x99\x1d\x31\xb8\xa4\x7e\xdd\x19\x04\x0f\x02\xa8\x1a\xaf\xb3\x48\x9a\x29\x29\x5e\x49\x84\xe0\x94\x11\xd1\x7e\xab\xb2\xc0\x44\x7e\xa1\x1b\x5e\x9d\x0d\x1a\xf9\x02\x9a\x2e\x53\x03\x2d\x48\x96\x7c\x2c\xa6\xd7\xac\xf1\xed\x2b\x18\xbb\x01\xcb\x13\xb9\xac\xa6\xee\x55\x00\x37\x7c\x69\x61\x62\x89\x01\x54\x77\x9f\x07\x5d\x26\x34\x3a\xa9\x49\xa5\xaf\xf2\x5e\x06\x51\xb7\x1c\xe0\xde\xda\x5c\x0b\x9f\x98\xc2\x15\xfd\xba\xd8\xa9\x99\x00\xab\xa4\x8e\x4a\x16\x9d\x66\x2a\xe8\x56\x64\xb2\xb6\xc0\x93\xaf\x4d\x38\xa0\x16\x5c\xe4\xbd\x62\xc2\x46\x6b\xc9\x5a\x59\x4a\x72\x58\xfd\xb2\xcc\x36\x87\x30\x85\xe8\xa1\x04\x5b\xe0\x17\x9b\xd0\xec\x9b")
		+
		integer<2048>("\xa9\xaa\xf4\xb5\x40\x55\x2a\xed\x22\xae\x23\x48\x3f\x28\x69\xa7\x7f\xb5\x3e\xb2\xad\xac\xc2\x44\x41\xbb\x7a\x5b\x4e\xb5\xd0\x9e\x65\x71\x6f\x63\xae\xde\x63\x65\x5d\x4b\x74\x3b\x13\xa2\xc6\x87\x8f\x5a\x05\x9f\xbc\x39\x09\x53\x89\xef\x2a\xe5\xd7\xfb\xf4\x50\xee\x43\x69\xbf\x67\x26\x9d\x22\xdf\x49\xb8\xe0\x03\x8e\xc0\xd2\x96\xde\x19\x62\xaa\x08\x34\x9a\x68\x09\xcd\xce\x3a\xa8\x1e\x60\xcd\x4c\xe6\x91\x4f\x4a\x17\xa7\xcc\x3e\x9f\x31\x63\x2b\x8e\xbe\x7c\xeb\xaf\x97\xa1\xda\x39\x25\x6c\xa5\xcf\x49\x89\x80\x7a\x2f\x56\xf8\xf2\x04\x03\xf6\x5a\x2c\x20\x6f\x16\xf2\x30\xe4\x7f\x37\x79\xf4\x70\x5f\x6b\x36\xfb\x1a\x75\x8e\x76\x3d\xb3\xb2\xda\xa9\xfb\x68\x94\xd2\x13\x14\x38\xf4\x69\xf2\x5e\x49\x90\xb0\x94\x7d\xd9\xf7\x99\xcc\xa0\xaa\x91\x98\xc3\xf9\x03\x07\x00\x31\xc5\x51\xf4\xd1\x65\x5e\x36\x3b\x64\xdc\x2e\x7a\x2e\x10\x0b\x5b\x37\x91\xcc\x0f\x23\x20\x75\xca\xe9\x44\xe1\x7a\xc9\x56\x91\x38\xc1\xb7\x81\x9d\x9a\x2b\xb7\x1b\x97\xd3\x43\x67\xd6\x10\x4c\xc1\x03\x3f\x53\x20\x36\x43\x01\x5a\xe6\x20\x34\xb4\x87\xd6\x13\x60\xb9\x23")
		==
		integer<2048>("\x88\x7a\xab\xb1\x7d\x89\x14\x43\x20\x5a\xb4\x30\xc7\x40\x19\xab\x21\x20\xd9\x5e\x20\x1d\x3b\x76\xe4\x5c\x07\x16\x82\x25\x81\x14\xfb\xa0\x34\x4c\xdd\xb6\xf2\xf8\x1d\x78\xc1\x7c\x23\x81\x0b\xa2\xb4\x96\xc3\xd7\x27\x7e\x8b\x75\x70\x3c\xdc\x09\x59\x7e\xaa\xd2\x50\xfa\x9a\xb3\xc7\x72\x65\x1a\xcf\x60\xc5\x95\x79\x17\x38\x65\xe9\x41\x8a\x52\xb5\xce\xa7\xdd\xa9\xf8\xb2\xbe\xac\x94\xe7\x22\x00\x11\xc3\x3a\xe8\x67\x49\x60\x70\xbd\x7c\x4a\x67\x3a\x91\x66\x97\x9b\x62\xe0\x3c\x03\x62\x83\xb6\x2a\xaf\xdd\x9b\x51\xf8\xdb\x09\xb9\x36\x82\xa5\x11\xb8\xc9\x2d\x8a\x0f\xf4\xcb\x12\xd2\x3a\xa7\x3d\x06\xdb\x97\xdd\xd2\xc7\x67\x7b\xa1\x56\x6e\xb4\xa5\xbd\xb5\x15\x3b\xc0\x68\x14\x70\x70\xd3\x53\xc0\xd2\x92\x05\x0c\x1c\xe1\x54\xc0\x00\xdb\x53\xdb\x3e\x73\xeb\x61\x0d\x51\xe8\xe2\x32\xd3\xab\xc1\x69\xd5\xd4\x26\xf2\x2c\x35\x06\xb9\xa4\x5b\xe3\x36\x5a\x59\x39\xbd\xdb\xf5\xd1\x9b\x46\x2d\x80\x17\x24\xe8\x0e\xf0\x21\xb3\xf7\x10\x74\x7e\x5a\x19\xaf\x31\x30\x69\x97\x33\x5c\x3d\x05\xec\x6c\xca\x31\xe0\xce\xc1\x39\x10\x67\xed\xaf\x31\xa5\xbe")
	);

	ASSERT(
		integer<2048>("\xde\xcf\xb6\xfc\x3d\x33\xe9\x55\xfd\xac\x90\xe8\x88\x17\xb0\x03\xa1\x6b\x9a\xab\x72\x70\x79\x32\xa2\xa0\x8c\xbb\x33\x6f\xb0\x76\x96\x2e\xc4\xe9\x2e\xd8\x8f\x92\xc0\x2d\x4d\x41\x0f\xde\x45\x1b\x25\x3c\xbe\x37\x6b\x45\x82\x21\xe6\x4d\xb1\x23\x81\x82\xb6\x81\x62\xb7\x30\xf4\x60\x4b\xc7\xf7\xf0\x17\x0c\xb5\x75\x88\x77\x93\x52\x63\x70\xf0\x0b\xc6\x73\x43\x41\xee\xe4\xf0\x71\xec\xc8\xc1\x32\xc4\xdc\xa9\x99\x1d\x31\xb8\xa4\x7e\xdd\x19\x04\x0f\x02\xa8\x1a\xaf\xb3\x48\x9a\x29\x29\x5e\x49\x84\xe0\x94\x11\xd1\x7e\xab\xb2\xc0\x44\x7e\xa1\x1b\x5e\x9d\x0d\x1a\xf9\x02\x9a\x2e\x53\x03\x2d\x48\x96\x7c\x2c\xa6\xd7\xac\xf1\xed\x2b\x18\xbb\x01\xcb\x13\xb9\xac\xa6\xee\x55\x00\x37\x7c\x69\x61\x62\x89\x01\x54\x77\x9f\x07\x5d\x26\x34\x3a\xa9\x49\xa5\xaf\xf2\x5e\x06\x51\xb7\x1c\xe0\xde\xda\x5c\x0b\x9f\x98\xc2\x15\xfd\xba\xd8\xa9\x99\x00\xab\xa4\x8e\x4a\x16\x9d\x66\x2a\xe8\x56\x64\xb2\xb6\xc0\x93\xaf\x4d\x38\xa0\x16\x5c\xe4\xbd\x62\xc2\x46\x6b\xc9\x5a\x59\x4a\x72\x58\xfd\xb2\xcc\x36\x87\x30\x85\xe8\xa1\x04\x5b\xe0\x17\x9b\xd0\xec\x9b")
		>>
		1024
		==
		integer<1024>("\xde\xcf\xb6\xfc\x3d\x33\xe9\x55\xfd\xac\x90\xe8\x88\x17\xb0\x03\xa1\x6b\x9a\xab\x72\x70\x79\x32\xa2\xa0\x8c\xbb\x33\x6f\xb0\x76\x96\x2e\xc4\xe9\x2e\xd8\x8f\x92\xc0\x2d\x4d\x41\x0f\xde\x45\x1b\x25\x3c\xbe\x37\x6b\x45\x82\x21\xe6\x4d\xb1\x23\x81\x82\xb6\x81\x62\xb7\x30\xf4\x60\x4b\xc7\xf7\xf0\x17\x0c\xb5\x75\x88\x77\x93\x52\x63\x70\xf0\x0b\xc6\x73\x43\x41\xee\xe4\xf0\x71\xec\xc8\xc1\x32\xc4\xdc\xa9\x99\x1d\x31\xb8\xa4\x7e\xdd\x19\x04\x0f\x02\xa8\x1a\xaf\xb3\x48\x9a\x29\x29\x5e\x49\x84\xe0\x94\x11\xd1\x7e\xab")
	);

	ASSERT(
		integer<128>("\x00\x00\x00\x00\x00\x00\x00\x00\xAA\xBB\xCC\xDD\x12\x34\x56\x78")
		<<
		64
		==
		integer<128>("\xAA\xBB\xCC\xDD\x12\x34\x56\x78\x00\x00\x00\x00\x00\x00\x00\x00")
	);

	ASSERT(
		integer<64>(0xe6a4065acc120001)
		*
		integer<64>(0xe6a4065acc120001)
		==
		integer<128>("\xcf\xcb\x24\x83\x4b\x2e\x30\xd6\xc4\x9c\xbd\xf9\x98\x24\x00\x01")
	);


	ASSERT(
		integer<2048>("\xa9\xaa\xf4\xb5\x40\x55\x2a\xed\x22\xae\x23\x48\x3f\x28\x69\xa7\x7f\xb5\x3e\xb2\xad\xac\xc2\x44\x41\xbb\x7a\x5b\x4e\xb5\xd0\x9e\x65\x71\x6f\x63\xae\xde\x63\x65\x5d\x4b\x74\x3b\x13\xa2\xc6\x87\x8f\x5a\x05\x9f\xbc\x39\x09\x53\x89\xef\x2a\xe5\xd7\xfb\xf4\x50\xee\x43\x69\xbf\x67\x26\x9d\x22\xdf\x49\xb8\xe0\x03\x8e\xc0\xd2\x96\xde\x19\x62\xaa\x08\x34\x9a\x68\x09\xcd\xce\x3a\xa8\x1e\x60\xcd\x4c\xe6\x91\x4f\x4a\x17\xa7\xcc\x3e\x9f\x31\x63\x2b\x8e\xbe\x7c\xeb\xaf\x97\xa1\xda\x39\x25\x6c\xa5\xcf\x49\x89\x80\x7a\x2f\x56\xf8\xf2\x04\x03\xf6\x5a\x2c\x20\x6f\x16\xf2\x30\xe4\x7f\x37\x79\xf4\x70\x5f\x6b\x36\xfb\x1a\x75\x8e\x76\x3d\xb3\xb2\xda\xa9\xfb\x68\x94\xd2\x13\x14\x38\xf4\x69\xf2\x5e\x49\x90\xb0\x94\x7d\xd9\xf7\x99\xcc\xa0\xaa\x91\x98\xc3\xf9\x03\x07\x00\x31\xc5\x51\xf4\xd1\x65\x5e\x36\x3b\x64\xdc\x2e\x7a\x2e\x10\x0b\x5b\x37\x91\xcc\x0f\x23\x20\x75\xca\xe9\x44\xe1\x7a\xc9\x56\x91\x38\xc1\xb7\x81\x9d\x9a\x2b\xb7\x1b\x97\xd3\x43\x67\xd6\x10\x4c\xc1\x03\x3f\x53\x20\x36\x43\x01\x5a\xe6\x20\x34\xb4\x87\xd6\x13\x60\xb9\x23")
		*
		integer<2048>("\xde\xcf\xb6\xfc\x3d\x33\xe9\x55\xfd\xac\x90\xe8\x88\x17\xb0\x03\xa1\x6b\x9a\xab\x72\x70\x79\x32\xa2\xa0\x8c\xbb\x33\x6f\xb0\x76\x96\x2e\xc4\xe9\x2e\xd8\x8f\x92\xc0\x2d\x4d\x41\x0f\xde\x45\x1b\x25\x3c\xbe\x37\x6b\x45\x82\x21\xe6\x4d\xb1\x23\x81\x82\xb6\x81\x62\xb7\x30\xf4\x60\x4b\xc7\xf7\xf0\x17\x0c\xb5\x75\x88\x77\x93\x52\x63\x70\xf0\x0b\xc6\x73\x43\x41\xee\xe4\xf0\x71\xec\xc8\xc1\x32\xc4\xdc\xa9\x99\x1d\x31\xb8\xa4\x7e\xdd\x19\x04\x0f\x02\xa8\x1a\xaf\xb3\x48\x9a\x29\x29\x5e\x49\x84\xe0\x94\x11\xd1\x7e\xab\xb2\xc0\x44\x7e\xa1\x1b\x5e\x9d\x0d\x1a\xf9\x02\x9a\x2e\x53\x03\x2d\x48\x96\x7c\x2c\xa6\xd7\xac\xf1\xed\x2b\x18\xbb\x01\xcb\x13\xb9\xac\xa6\xee\x55\x00\x37\x7c\x69\x61\x62\x89\x01\x54\x77\x9f\x07\x5d\x26\x34\x3a\xa9\x49\xa5\xaf\xf2\x5e\x06\x51\xb7\x1c\xe0\xde\xda\x5c\x0b\x9f\x98\xc2\x15\xfd\xba\xd8\xa9\x99\x00\xab\xa4\x8e\x4a\x16\x9d\x66\x2a\xe8\x56\x64\xb2\xb6\xc0\x93\xaf\x4d\x38\xa0\x16\x5c\xe4\xbd\x62\xc2\x46\x6b\xc9\x5a\x59\x4a\x72\x58\xfd\xb2\xcc\x36\x87\x30\x85\xe8\xa1\x04\x5b\xe0\x17\x9b\xd0\xec\x9b")
		==
		integer<4096>("\x93\xab\xea\xb7\xc3\x2a\xc2\x42\xc1\x39\x8c\x28\xde\xac\x53\xd3\x75\x11\x3a\x3f\x4a\xc5\xea\x72\x13\x27\x46\x83\xe0\xa2\x0d\xcb\x13\x38\xa8\xfb\x17\x9f\x08\x60\x65\x6a\x9b\x62\x20\x26\x77\x86\xe5\xb0\x0a\x05\x18\x82\xfc\x30\xf2\xb0\x63\x44\xfb\x39\x31\x75\xbf\xa1\x90\x77\xda\xed\x0b\x47\xd8\x2a\xde\x97\x34\x8f\x54\xcd\xfd\x4b\x7a\x1f\xc1\xa1\x12\x26\xc7\xb2\x93\xd1\x04\xd3\xf4\x2b\x2d\x78\x2d\x89\xcd\x1c\x71\x4b\x03\xd7\x9d\xd5\xd0\xb7\xe5\x00\x96\x41\x0e\xba\x5f\x8f\xde\xe0\xa6\xd5\x4f\x49\xa1\x8b\x8b\x81\x4c\x98\xd1\x8a\xdf\xa6\x43\xb9\x59\x55\x2f\xea\x65\x5c\xbb\xce\x8e\x05\x33\x5a\x3a\x09\xb0\x95\x3d\x67\x75\x99\x2c\x1d\x49\xfa\x31\xa9\x7e\x74\x24\x6f\x21\xb9\x32\x08\x07\x5d\x91\x5a\xfa\x68\x1d\x85\xde\xc0\xcc\xe2\x1f\x8e\x1f\x3e\x8c\x9c\x07\xfb\xd2\x24\xff\xd6\x28\x3c\x46\xe7\x2c\xa7\x92\xd4\xd6\xfe\x59\xbb\x22\xc4\x19\x4a\x8c\xdf\x1b\xad\x15\xf3\xbe\x4e\x2d\xe8\x32\xdf\xca\x12\xca\x1e\x9c\xd0\x5e\xf8\xc1\x67\x96\x2d\x32\xe7\x59\xc0\x91\x43\xb0\x98\x85\x44\x94\x80\xff\xd8\xae\xf4\x92\x3a\x81\xcd\x0e\x08\xe3\xaf\x10\xec\x6d\x6e\x2b\x1f\x4b\xa1\x17\x2f\xdb\xad\x4f\x15\x37\x48\xbf\x71\xd9\xa7\x68\x97\xf9\xee\xcd\x78\xb7\xff\x3c\xeb\x54\x73\x9e\x8b\xcd\x34\x1e\xa4\x3a\xae\x30\x1e\xdb\x65\xce\x36\xfa\xe0\xe0\x43\x7e\xc1\xdf\xac\xac\x5e\x89\x98\x91\x8e\x13\x2b\xc3\x28\x72\xbd\x49\x53\x7b\x79\x9c\x20\x9f\x09\x0c\xe4\xa3\x82\x1c\x0b\xf4\x50\xa1\xfe\xef\x82\xfd\x36\x89\xf2\xcb\x95\x76\x5a\xb8\xa0\x18\xb4\xdc\x31\x49\xfe\x8b\xfc\x6d\x35\xa2\x95\x3e\x99\x05\x68\x6d\xa9\x91\xc4\xb9\x81\x29\x41\x54\x4f\xb7\xae\x42\x14\x47\xde\x22\x0c\xfb\xee\x73\x68\xba\x49\x28\xec\x74\x99\x2b\x15\xaf\x1c\xce\x6f\xff\xda\x31\x5d\x48\xeb\x20\xb6\x89\x48\xdb\x4a\xb0\x7e\x58\xfc\xe8\xc1\xec\xd4\x74\x4f\x21\x5c\x6a\x51\x62\x95\x01\x22\x94\x43\x2d\xde\x24\x3d\xee\xe9\x5a\x81\x6d\xc6\xf5\x2f\xa0\xac\x0d\x03\x93\xf4\xa4\xb8\x14\xc0\xd2\xf4\x64\x06\x49\x88\x0e\x6b\xa2\xd6\x1e\xfd\xd5\x47\x6c\x5d\x01\x7b\xfe\x81\x91\x2a\x56\x14\xbe\xe2\xa5\xb5\x3b\x2e\x64\x6f\xf9\x46\x20\xeb\x6b\xc3\x99\x06\xd2\xee\x03\x88\x39\x7d\x0d\x53\x29\x4e\x83\xac\x5c\x31")
	);

	ASSERT(
		integer<256>(0xe6a4065acc120001)
		.multiplyKaratsuba(
			integer<256>(0xe6a4065acc120001)
		)
		==
		integer<128>("\xcf\xcb\x24\x83\x4b\x2e\x30\xd6\xc4\x9c\xbd\xf9\x98\x24\x00\x01")
	);

	ASSERT(
		integer<2048>("\xa9\xaa\xf4\xb5\x40\x55\x2a\xed\x22\xae\x23\x48\x3f\x28\x69\xa7\x7f\xb5\x3e\xb2\xad\xac\xc2\x44\x41\xbb\x7a\x5b\x4e\xb5\xd0\x9e\x65\x71\x6f\x63\xae\xde\x63\x65\x5d\x4b\x74\x3b\x13\xa2\xc6\x87\x8f\x5a\x05\x9f\xbc\x39\x09\x53\x89\xef\x2a\xe5\xd7\xfb\xf4\x50\xee\x43\x69\xbf\x67\x26\x9d\x22\xdf\x49\xb8\xe0\x03\x8e\xc0\xd2\x96\xde\x19\x62\xaa\x08\x34\x9a\x68\x09\xcd\xce\x3a\xa8\x1e\x60\xcd\x4c\xe6\x91\x4f\x4a\x17\xa7\xcc\x3e\x9f\x31\x63\x2b\x8e\xbe\x7c\xeb\xaf\x97\xa1\xda\x39\x25\x6c\xa5\xcf\x49\x89\x80\x7a\x2f\x56\xf8\xf2\x04\x03\xf6\x5a\x2c\x20\x6f\x16\xf2\x30\xe4\x7f\x37\x79\xf4\x70\x5f\x6b\x36\xfb\x1a\x75\x8e\x76\x3d\xb3\xb2\xda\xa9\xfb\x68\x94\xd2\x13\x14\x38\xf4\x69\xf2\x5e\x49\x90\xb0\x94\x7d\xd9\xf7\x99\xcc\xa0\xaa\x91\x98\xc3\xf9\x03\x07\x00\x31\xc5\x51\xf4\xd1\x65\x5e\x36\x3b\x64\xdc\x2e\x7a\x2e\x10\x0b\x5b\x37\x91\xcc\x0f\x23\x20\x75\xca\xe9\x44\xe1\x7a\xc9\x56\x91\x38\xc1\xb7\x81\x9d\x9a\x2b\xb7\x1b\x97\xd3\x43\x67\xd6\x10\x4c\xc1\x03\x3f\x53\x20\x36\x43\x01\x5a\xe6\x20\x34\xb4\x87\xd6\x13\x60\xb9\x23")
		.multiplyKaratsuba(
			integer<2048>("\xde\xcf\xb6\xfc\x3d\x33\xe9\x55\xfd\xac\x90\xe8\x88\x17\xb0\x03\xa1\x6b\x9a\xab\x72\x70\x79\x32\xa2\xa0\x8c\xbb\x33\x6f\xb0\x76\x96\x2e\xc4\xe9\x2e\xd8\x8f\x92\xc0\x2d\x4d\x41\x0f\xde\x45\x1b\x25\x3c\xbe\x37\x6b\x45\x82\x21\xe6\x4d\xb1\x23\x81\x82\xb6\x81\x62\xb7\x30\xf4\x60\x4b\xc7\xf7\xf0\x17\x0c\xb5\x75\x88\x77\x93\x52\x63\x70\xf0\x0b\xc6\x73\x43\x41\xee\xe4\xf0\x71\xec\xc8\xc1\x32\xc4\xdc\xa9\x99\x1d\x31\xb8\xa4\x7e\xdd\x19\x04\x0f\x02\xa8\x1a\xaf\xb3\x48\x9a\x29\x29\x5e\x49\x84\xe0\x94\x11\xd1\x7e\xab\xb2\xc0\x44\x7e\xa1\x1b\x5e\x9d\x0d\x1a\xf9\x02\x9a\x2e\x53\x03\x2d\x48\x96\x7c\x2c\xa6\xd7\xac\xf1\xed\x2b\x18\xbb\x01\xcb\x13\xb9\xac\xa6\xee\x55\x00\x37\x7c\x69\x61\x62\x89\x01\x54\x77\x9f\x07\x5d\x26\x34\x3a\xa9\x49\xa5\xaf\xf2\x5e\x06\x51\xb7\x1c\xe0\xde\xda\x5c\x0b\x9f\x98\xc2\x15\xfd\xba\xd8\xa9\x99\x00\xab\xa4\x8e\x4a\x16\x9d\x66\x2a\xe8\x56\x64\xb2\xb6\xc0\x93\xaf\x4d\x38\xa0\x16\x5c\xe4\xbd\x62\xc2\x46\x6b\xc9\x5a\x59\x4a\x72\x58\xfd\xb2\xcc\x36\x87\x30\x85\xe8\xa1\x04\x5b\xe0\x17\x9b\xd0\xec\x9b")
		)
		==
		integer<4096>("\x93\xab\xea\xb7\xc3\x2a\xc2\x42\xc1\x39\x8c\x28\xde\xac\x53\xd3\x75\x11\x3a\x3f\x4a\xc5\xea\x72\x13\x27\x46\x83\xe0\xa2\x0d\xcb\x13\x38\xa8\xfb\x17\x9f\x08\x60\x65\x6a\x9b\x62\x20\x26\x77\x86\xe5\xb0\x0a\x05\x18\x82\xfc\x30\xf2\xb0\x63\x44\xfb\x39\x31\x75\xbf\xa1\x90\x77\xda\xed\x0b\x47\xd8\x2a\xde\x97\x34\x8f\x54\xcd\xfd\x4b\x7a\x1f\xc1\xa1\x12\x26\xc7\xb2\x93\xd1\x04\xd3\xf4\x2b\x2d\x78\x2d\x89\xcd\x1c\x71\x4b\x03\xd7\x9d\xd5\xd0\xb7\xe5\x00\x96\x41\x0e\xba\x5f\x8f\xde\xe0\xa6\xd5\x4f\x49\xa1\x8b\x8b\x81\x4c\x98\xd1\x8a\xdf\xa6\x43\xb9\x59\x55\x2f\xea\x65\x5c\xbb\xce\x8e\x05\x33\x5a\x3a\x09\xb0\x95\x3d\x67\x75\x99\x2c\x1d\x49\xfa\x31\xa9\x7e\x74\x24\x6f\x21\xb9\x32\x08\x07\x5d\x91\x5a\xfa\x68\x1d\x85\xde\xc0\xcc\xe2\x1f\x8e\x1f\x3e\x8c\x9c\x07\xfb\xd2\x24\xff\xd6\x28\x3c\x46\xe7\x2c\xa7\x92\xd4\xd6\xfe\x59\xbb\x22\xc4\x19\x4a\x8c\xdf\x1b\xad\x15\xf3\xbe\x4e\x2d\xe8\x32\xdf\xca\x12\xca\x1e\x9c\xd0\x5e\xf8\xc1\x67\x96\x2d\x32\xe7\x59\xc0\x91\x43\xb0\x98\x85\x44\x94\x80\xff\xd8\xae\xf4\x92\x3a\x81\xcd\x0e\x08\xe3\xaf\x10\xec\x6d\x6e\x2b\x1f\x4b\xa1\x17\x2f\xdb\xad\x4f\x15\x37\x48\xbf\x71\xd9\xa7\x68\x97\xf9\xee\xcd\x78\xb7\xff\x3c\xeb\x54\x73\x9e\x8b\xcd\x34\x1e\xa4\x3a\xae\x30\x1e\xdb\x65\xce\x36\xfa\xe0\xe0\x43\x7e\xc1\xdf\xac\xac\x5e\x89\x98\x91\x8e\x13\x2b\xc3\x28\x72\xbd\x49\x53\x7b\x79\x9c\x20\x9f\x09\x0c\xe4\xa3\x82\x1c\x0b\xf4\x50\xa1\xfe\xef\x82\xfd\x36\x89\xf2\xcb\x95\x76\x5a\xb8\xa0\x18\xb4\xdc\x31\x49\xfe\x8b\xfc\x6d\x35\xa2\x95\x3e\x99\x05\x68\x6d\xa9\x91\xc4\xb9\x81\x29\x41\x54\x4f\xb7\xae\x42\x14\x47\xde\x22\x0c\xfb\xee\x73\x68\xba\x49\x28\xec\x74\x99\x2b\x15\xaf\x1c\xce\x6f\xff\xda\x31\x5d\x48\xeb\x20\xb6\x89\x48\xdb\x4a\xb0\x7e\x58\xfc\xe8\xc1\xec\xd4\x74\x4f\x21\x5c\x6a\x51\x62\x95\x01\x22\x94\x43\x2d\xde\x24\x3d\xee\xe9\x5a\x81\x6d\xc6\xf5\x2f\xa0\xac\x0d\x03\x93\xf4\xa4\xb8\x14\xc0\xd2\xf4\x64\x06\x49\x88\x0e\x6b\xa2\xd6\x1e\xfd\xd5\x47\x6c\x5d\x01\x7b\xfe\x81\x91\x2a\x56\x14\xbe\xe2\xa5\xb5\x3b\x2e\x64\x6f\xf9\x46\x20\xeb\x6b\xc3\x99\x06\xd2\xee\x03\x88\x39\x7d\x0d\x53\x29\x4e\x83\xac\x5c\x31")
	);


	ASSERT(
		powmod(integer<128>((word)0x12345678aabbccdd), 0x100, integer<128>(0xabcdef0017569217))
		==
		integer<128>("\x00\x00\x00\x00\x00\x00\x00\x00\x39\x1d\xcf\x4e\x25\xf5\x3b\x1d")
	);
}