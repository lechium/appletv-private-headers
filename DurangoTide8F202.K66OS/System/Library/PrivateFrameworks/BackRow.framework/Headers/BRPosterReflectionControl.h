/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRPosterReflectionControl : BRControl {
@private
	BRImage *_image;	// 44 = 0x2c
	float _cornerRadius;	// 48 = 0x30
	float _reflectionHeight;	// 52 = 0x34
}
- (id)initWithImage:(id)image reflectionHeight:(float)height cornerRadius:(float)radius;	// 0x3292413d
- (void)dealloc;	// 0x329240f5
- (void)drawInContext:(CGContextRef)context;	// 0x32927a6d
@end

