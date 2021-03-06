/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, NSMutableDictionary, NSMutableArray, MRTextRenderer, NSArray;

@interface MREffectScrapbook : MREffect {
	NSMutableDictionary *mFrameProviders;	// 116 = 0x74
	NSMutableDictionary *mSprites;	// 120 = 0x78
	BOOL mIsLoaded;	// 124 = 0x7c
	BOOL mTitleAspectRatio;	// 125 = 0x7d
	NSArray *mLayouts;	// 128 = 0x80
	MRTextRenderer *mTextRenderer0;	// 132 = 0x84
	MRImage *mTextImage0;	// 136 = 0x88
	NSMutableArray *mRectsToSubtract;	// 140 = 0x8c
	BOOL mIsMovieOnly;	// 144 = 0x90
	CGSize mTextSize;	// 148 = 0x94
	float mLocalMatrix[16];	// 156 = 0x9c
}
+ (void)initialize;	// 0x325b0719
- (id)initWithEffectID:(id)effectID;	// 0x325b37c9
- (void)_cleanup;	// 0x325b3899
- (void)_drawBlendedFrame:(id)frame info:(id)info index:(int)index rect:(CGRect)rect zIndex:(int)index5 zRotation:(float)rotation subtract:(id)subtract time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b7ccd
- (void)_drawBreakFrame:(id)frame index:(int)index rect:(CGRect)rect rotation:(float)rotation forcedAspectRatio:(float)ratio layout:(id)layout offset:(CGSize)offset time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b8b09
- (void)_drawBreakFrameInRect:(CGRect)rect frameWidth:(float)width time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325ba3b1
- (void)_drawBreakTwoPartFrame:(id)frame index:(int)index rect:(CGRect)rect rotation:(float)rotation forcedAspectRatio:(float)ratio time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b84f1
- (void)_drawFrame:(id)frame info:(id)info index:(int)index rect:(CGRect)rect zIndex:(int)index5 zRotation:(float)rotation subtract:(id)subtract time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b741d
- (void)_drawFrame:(id)frame info:(id)info rect:(CGRect)rect stretch:(BOOL)stretch zIndex:(int)index zRotation:(float)rotation subtract:(id)subtract key:(id)key time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b66f1
- (void)_drawLandscapePanoBackgroundInRect:(CGRect)rect paperType:(id)type subtract:(id)subtract inTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b91f5
- (void)_drawMask:(id)mask index:(int)index rect:(CGRect)rect zIndex:(int)index4 zRotation:(float)rotation subtract:(id)subtract time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b6e29
- (void)_drawPortraitPanoBackgroundInRect:(CGRect)rect flippedRect:(CGRect)rect2 paperType:(id)type subtract:(id)subtract inTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b9a7d
- (void)_drawTextWithInfo:(id)info rect:(CGRect)rect zIndex:(int)index zRotation:(float)rotation time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b63dd
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325ba905
- (int)_maxLinesForTextElement:(id)textElement;	// 0x325bae01
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x325badc9
- (void)_unload;	// 0x325bae05
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x325b6031
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x325b6361
- (BOOL)isAlphaFriendly;	// 0x325b3c85
- (BOOL)isLoadedForTime:(double)time;	// 0x325b3a19
- (BOOL)isOpaque;	// 0x325b3c89
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b3e51
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325b51e9
- (void)setPixelSize:(CGSize)size;	// 0x325b3b29
@end

