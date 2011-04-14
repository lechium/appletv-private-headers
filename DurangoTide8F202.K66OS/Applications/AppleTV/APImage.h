/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface APImage : XXUnknownSuperclass {
	CGImageRef _image;	// 4 = 0x4
	void *_ioSurface;	// 8 = 0x8
	int _imageOrientation;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x3e511; 
@property(readonly, assign) void *ioSurface;	// G=0x3e521; converted property
@property(readonly, assign, nonatomic) id layerContents;	// G=0x3e4e1; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x3eb79; 
- (id)initWithContentsOfFile:(id)file;	// 0x3f3f9
- (id)initWithData:(id)data;	// 0x3f51d
- (CGImageRef)CGImage;	// 0x3e531
- (void)_setCGImage:(CGImageRef)image;	// 0x3ebc9
- (void)_setIOSurface:(void *)surface;	// 0x3ec1d
- (void)_setImageOrientation:(int)orientation;	// 0x3e501
- (CGSize)_unadjustedContentSize;	// 0x3f829
- (CGAffineTransform)contentsTransformForLayer:(id)layer;	// 0x3f575
- (void)dealloc;	// 0x3eb29
// declared property getter: - (int)imageOrientation;	// 0x3e511
// converted property getter: - (void *)ioSurface;	// 0x3e521
// declared property getter: - (id)layerContents;	// 0x3e4e1
// declared property getter: - (CGSize)size;	// 0x3eb79
@end

