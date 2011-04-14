/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface NSObject (MRMarimbaViewPlayback)
- (id)_currentEffectContainer;	// 0x31496bd1
- (id)_effectContainerForTime:(double)time;	// 0x31496dc5
- (id)_firstEffectContainer;	// 0x31496d65
- (int)_mainLayerIndex;	// 0x31496f05
- (id)currentSlide;	// 0x314972a1
- (id)currentSlides;	// 0x314970d5
- (id)displayedEffectContainers;	// 0x314964c5
- (void)gotoNextSlide;	// 0x31497441
- (void)gotoPreviousSlide;	// 0x314978dd
- (void)gotoSlide:(id)slide;	// 0x31497c41
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x31496521
- (void)moveToNextEffectContainer;	// 0x31496701
- (void)moveToPreviousEffectContainer;	// 0x314967d9
- (void)moveToSubtitleForSlide:(id)slide;	// 0x31496a3d
- (void)moveToTitleSlide;	// 0x314968a9
- (double)relativeTime;	// 0x31496379
- (double)relativeTimeForBackgroundAudio;	// 0x314963c9
- (double)relativeTimeForLayer:(id)layer;	// 0x31496425
- (void)watcherThread:(id)thread;	// 0x31496fbd
@end

@interface NSObject (WithResultSelector)
- (double)performWithDoubleResultSelector:(SEL)doubleResultSelector onThread:(id)thread withObject:(id)object;	// 0x31513175
@end

