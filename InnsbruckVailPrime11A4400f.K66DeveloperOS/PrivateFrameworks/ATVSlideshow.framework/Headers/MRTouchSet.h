/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class NSMutableSet, NSMutableDictionary, NSSet;

@interface MRTouchSet : NSObject {
	NSMutableSet *_touches;	// 4 = 0x4
	NSMutableDictionary *_touchesForUITouches;	// 8 = 0x8
}
@property(readonly, assign) CGPoint centroid;	// G=0x2fd72b9d; 
@property(readonly, assign) BOOL isActive;	// G=0x2fd7302d; 
@property(readonly, assign) float rotation;	// G=0x2fd72ea1; 
@property(readonly, assign) float scale;	// G=0x2fd72d15; 
@property(readonly, assign) NSSet *touches;	// G=0x2fd73205; @synthesize=_touches
- (id)initWithTouch:(id)touch;	// 0x2fd7288d
- (id)initWithTouches:(id)touches;	// 0x2fd72901
- (id)initWithUITouches:(id)uitouches inView:(id)view;	// 0x2fd72b0d
- (void)addTouch:(id)touch;	// 0x2fd729e9
- (void)cancelAllTouches;	// 0x2fd72a49
// declared property getter: - (CGPoint)centroid;	// 0x2fd72b9d
- (void)dealloc;	// 0x2fd72971
- (id)description;	// 0x2fd730f9
// declared property getter: - (BOOL)isActive;	// 0x2fd7302d
- (void)removeAllTouches;	// 0x2fd72a29
- (void)removeTouch:(id)touch;	// 0x2fd72a09
// declared property getter: - (float)rotation;	// 0x2fd72ea1
// declared property getter: - (float)scale;	// 0x2fd72d15
// declared property getter: - (id)touches;	// 0x2fd73205
- (void)updateWithUITouches:(id)uitouches inView:(id)view;	// 0x2fd72b99
@end
