/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRImage;

@interface MRPatchworkPatch : NSObject {
@private
	MRImage *_image;	// 4 = 0x4
@protected
	CGRect rectangle;	// 8 = 0x8
	BOOL needsBlend;	// 24 = 0x18
}
@property(retain, nonatomic) MRImage *image;	// G=0x365021f5; S=0x36502205; @synthesize=_image
@property(assign, nonatomic) BOOL needsBlend;	// G=0x36502269; S=0x36502279; @synthesize
@property(assign, nonatomic) CGRect rectangle;	// G=0x36502229; S=0x3650224d; @synthesize
- (id)initWithImage:(id)image rectangle:(CGRect)rectangle needsBlend:(BOOL)blend;	// 0x3650210d
- (void)dealloc;	// 0x365021a5
// declared property getter: - (id)image;	// 0x365021f5
// declared property getter: - (BOOL)needsBlend;	// 0x36502269
// declared property getter: - (CGRect)rectangle;	// 0x36502229
// declared property setter: - (void)setImage:(id)image;	// 0x36502205
// declared property setter: - (void)setNeedsBlend:(BOOL)blend;	// 0x36502279
// declared property setter: - (void)setRectangle:(CGRect)rectangle;	// 0x3650224d
@end

