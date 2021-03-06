/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import </libobjc.A.h>
#import "ScreenReaderCore-Structs.h"


__attribute__((visibility("hidden")))
@interface SCRCRawImage : NSObject {
	CGImageRef _imageRef;	// 4 = 0x4
	char *_data;	// 8 = 0x8
	int _width;	// 12 = 0xc
	int _height;	// 16 = 0x10
	int _bytesPerPixel;	// 20 = 0x14
}
@property(assign, nonatomic) int bytesPerPixel;	// G=0x327379a1; S=0x327379b1; @synthesize=_bytesPerPixel
@property(assign, nonatomic) char *data;	// G=0x32737941; S=0x32737951; @synthesize=_data
@property(assign, nonatomic) int height;	// G=0x32737981; S=0x32737991; @synthesize=_height
@property(retain, nonatomic) CGImageRef imageRef;	// G=0x32737921; S=0x32737931; @synthesize=_imageRef
@property(assign, nonatomic) int width;	// G=0x32737961; S=0x32737971; @synthesize=_width
+ (id)rawImageForImage:(CGImageRef)image;	// 0x327377f5
// declared property getter: - (int)bytesPerPixel;	// 0x327379a1
// declared property getter: - (char *)data;	// 0x32737941
- (void)dealloc;	// 0x32737799
// declared property getter: - (int)height;	// 0x32737981
// declared property getter: - (CGImageRef)imageRef;	// 0x32737921
// declared property setter: - (void)setBytesPerPixel:(int)pixel;	// 0x327379b1
// declared property setter: - (void)setData:(char *)data;	// 0x32737951
// declared property setter: - (void)setHeight:(int)height;	// 0x32737991
// declared property setter: - (void)setImageRef:(CGImageRef)ref;	// 0x32737931
// declared property setter: - (void)setWidth:(int)width;	// 0x32737971
// declared property getter: - (int)width;	// 0x32737961
@end

