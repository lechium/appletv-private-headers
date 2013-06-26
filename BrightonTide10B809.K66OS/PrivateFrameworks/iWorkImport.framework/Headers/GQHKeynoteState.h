/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"


@interface GQHKeynoteState : GQHState {
	int mCurrentSlide;	// 108 = 0x6c
	CGSize mSlideSize;	// 112 = 0x70
	int mProgressiveIndex;	// 120 = 0x78
}
@property(assign) int progressiveIndex;	// G=0x368d5995; S=0x368d59a5; converted property
@property(assign) CGSize slideSize;	// G=0x368d595d; S=0x368d5975; converted property
- (id).cxx_construct;	// 0x368d59f5
- (int)currentSlide;	// 0x368d594d
- (void)incrementCurrentSlide;	// 0x368d5939
// converted property getter: - (int)progressiveIndex;	// 0x368d5995
// converted property setter: - (void)setProgressiveIndex:(int)index;	// 0x368d59a5
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x368d5975
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x368d5989
- (BOOL)shouldStreamContent;	// 0x368d59b5
// converted property getter: - (CGSize)slideSize;	// 0x368d595d
@end
