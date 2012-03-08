/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRImage, NSString;

@interface MRPictureFrameRenderable : NSObject {
	MRImage *image;	// 4 = 0x4
	MRCroppingSprite *sprite;	// 8 = 0x8
	CGRect rect;	// 12 = 0xc
	NSString *where;	// 28 = 0x1c
	BOOL ignoreBlend;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL ignoreBlend;	// G=0x34abb53d; S=0x34abb54d; @synthesize
@property(retain, nonatomic) MRImage *image;	// G=0x34abb461; S=0x34abb471; @synthesize
@property(assign, nonatomic) CGRect rect;	// G=0x34abb4c9; S=0x34abb4ed; @synthesize
@property(retain, nonatomic) MRCroppingSprite *sprite;	// G=0x34abb495; S=0x34abb4a5; @synthesize
@property(copy, nonatomic) NSString *where;	// G=0x34abb509; S=0x34abb519; @synthesize
- (void)dealloc;	// 0x34abb3cd
// declared property getter: - (BOOL)ignoreBlend;	// 0x34abb53d
// declared property getter: - (id)image;	// 0x34abb461
// declared property getter: - (CGRect)rect;	// 0x34abb4c9
// declared property setter: - (void)setIgnoreBlend:(BOOL)blend;	// 0x34abb54d
// declared property setter: - (void)setImage:(id)image;	// 0x34abb471
// declared property setter: - (void)setRect:(CGRect)rect;	// 0x34abb4ed
// declared property setter: - (void)setSprite:(id)sprite;	// 0x34abb4a5
// declared property setter: - (void)setWhere:(id)where;	// 0x34abb519
// declared property getter: - (id)sprite;	// 0x34abb495
// declared property getter: - (id)where;	// 0x34abb509
@end

