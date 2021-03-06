/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "ImageRowReading.h"
#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject <ImageRowReading> {
	unsigned long height;	// 4 = 0x4
	unsigned long width;	// 8 = 0x8
	unsigned long bpr;	// 12 = 0xc
	void *data;	// 16 = 0x10
	short red;	// 20 = 0x14
	short green;	// 22 = 0x16
	short blue;	// 24 = 0x18
	short alpha;	// 26 = 0x1a
	CGColorSpaceRef cs;	// 28 = 0x1c
}
@property(readonly, assign) short alpha;	// G=0x2d708cd5; converted property
@property(readonly, assign) short blue;	// G=0x2d708cc5; converted property
@property(readonly, assign) short green;	// G=0x2d708cb5; converted property
@property(readonly, assign) unsigned long height;	// G=0x2d708c95; converted property
@property(readonly, assign) short red;	// G=0x2d708ca5; converted property
@property(readonly, assign) unsigned long width;	// G=0x2d708c85; converted property
+ (id)forImage:(id)image downscaleToMax:(unsigned)max;	// 0x2d708425
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace;	// 0x2d708465
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace usingContext:(id)context;	// 0x2d7084b9
+ (id)forImage:(id)image usingContext:(id)context;	// 0x2d7089bd
+ (id)forImage:(id)image usingContext:(id)context colorspace:(CGColorSpaceRef)colorspace;	// 0x2d7089fd
+ (id)fromImage:(CGImageRef)image;	// 0x2d708071
+ (id)fromImageFile:(id)imageFile;	// 0x2d707fc5
+ (id)withDictionary:(id)dictionary;	// 0x2d7087c1
- (id)init;	// 0x2d708bc1
- (void)_dumpImage:(id)image colorspace:(CGColorSpaceRef)colorspace;	// 0x2d708205
// converted property getter: - (short)alpha;	// 0x2d708cd5
// converted property getter: - (short)blue;	// 0x2d708cc5
- (unsigned)bytesPerPixel;	// 0x2d708d0d
- (void)dealloc;	// 0x2d708c29
- (void)dumpImage:(id)image;	// 0x2d7083a1
- (void)dumpImageAsDeviceRGB:(id)rgb;	// 0x2d7083f5
- (void)dumpImageAsDict:(id)dict;	// 0x2d7085e5
// converted property getter: - (short)green;	// 0x2d708cb5
// converted property getter: - (unsigned long)height;	// 0x2d708c95
// converted property getter: - (short)red;	// 0x2d708ca5
- (const char *)rowAtIndex:(unsigned)index;	// 0x2d708ce5
// converted property getter: - (unsigned long)width;	// 0x2d708c85
@end

