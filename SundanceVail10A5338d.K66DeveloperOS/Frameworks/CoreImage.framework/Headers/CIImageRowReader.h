/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library
#import "ImageRowReading.h"
#import "CoreImage-Structs.h"


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
@property(readonly, assign) short alpha;	// G=0x352fc5b1; converted property
@property(readonly, assign) short blue;	// G=0x352fc5a1; converted property
@property(readonly, assign) short green;	// G=0x352fc591; converted property
@property(readonly, assign) unsigned long height;	// G=0x352fc571; converted property
@property(readonly, assign) short red;	// G=0x352fc581; converted property
@property(readonly, assign) unsigned long width;	// G=0x352fc561; converted property
+ (id)forImage:(id)image downscaleToMax:(unsigned)max;	// 0x352fbd09
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace;	// 0x352fbd49
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace usingContext:(id)context;	// 0x352fbd9d
+ (id)forImage:(id)image usingContext:(id)context;	// 0x352fc299
+ (id)forImage:(id)image usingContext:(id)context colorspace:(CGColorSpaceRef)colorspace;	// 0x352fc2d9
+ (id)fromImage:(CGImageRef)image;	// 0x352fb951
+ (id)fromImageFile:(id)imageFile;	// 0x352fb8a5
+ (id)withDictionary:(id)dictionary;	// 0x352fc0ad
- (id)init;	// 0x352fc49d
- (void)_dumpImage:(id)image colorspace:(CGColorSpaceRef)colorspace;	// 0x352fbae9
// converted property getter: - (short)alpha;	// 0x352fc5b1
// converted property getter: - (short)blue;	// 0x352fc5a1
- (unsigned)bytesPerPixel;	// 0x352fc5e9
- (void)dealloc;	// 0x352fc505
- (void)dumpImage:(id)image;	// 0x352fbc85
- (void)dumpImageAsDeviceRGB:(id)rgb;	// 0x352fbcd9
- (void)dumpImageAsDict:(id)dict;	// 0x352fbed1
// converted property getter: - (short)green;	// 0x352fc591
// converted property getter: - (unsigned long)height;	// 0x352fc571
// converted property getter: - (short)red;	// 0x352fc581
- (const char *)rowAtIndex:(unsigned)index;	// 0x352fc5c1
// converted property getter: - (unsigned long)width;	// 0x352fc561
@end
