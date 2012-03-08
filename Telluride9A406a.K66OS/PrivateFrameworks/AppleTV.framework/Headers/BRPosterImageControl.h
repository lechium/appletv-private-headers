/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@protocol BRPosterImageDataSource;

__attribute__((visibility("hidden")))
@interface BRPosterImageControl : BRControl {
@private
	id<BRPosterImageDataSource> _imageDataSource;	// 48 = 0x30
	float _cornerRadius;	// 52 = 0x34
	float _posterBorderWidth;	// 56 = 0x38
	CGColorRef _posterBorderColor;	// 60 = 0x3c
}
- (id)initWithImageDataSource:(id)imageDataSource cornerRadius:(float)radius borderWidth:(float)width borderColor:(CGColorRef)color;	// 0x330d4d09
- (void)dealloc;	// 0x330d4d9d
- (void)drawInContext:(CGContextRef)context;	// 0x330d4de1
@end

