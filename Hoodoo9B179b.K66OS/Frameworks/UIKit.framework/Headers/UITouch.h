/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, UIView, UIWindow;

@interface UITouch : NSObject {
	double _timestamp;	// 4 = 0x4
	int _phase;	// 12 = 0xc
	int _savedPhase;	// 16 = 0x10
	unsigned _tapCount;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	UIView *_view;	// 28 = 0x1c
	UIView *_gestureView;	// 32 = 0x20
	UIView *_warpedIntoView;	// 36 = 0x24
	NSMutableArray *_gestureRecognizers;	// 40 = 0x28
	NSMutableArray *_forwardingRecord;	// 44 = 0x2c
	CGPoint _locationInWindow;	// 48 = 0x30
	CGPoint _previousLocationInWindow;	// 56 = 0x38
	unsigned char _pathIndex;	// 64 = 0x40
	unsigned char _pathIdentity;	// 65 = 0x41
	float _pathMajorRadius;	// 68 = 0x44
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _touchFlags;	// 72 = 0x48
@private
	BOOL _eaten;	// 73 = 0x49
}
@property(assign, nonatomic, getter=_isEaten, setter=_setEaten:) BOOL _eaten;	// G=0x32ed33bd; S=0x330ef0d5; @synthesize
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// G=0x32ed63dd; S=0x32ed339d; @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// G=0x32fc9fdd; S=0x32ed338d; @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// G=0x32fc9fed; S=0x32ed33ad; @synthesize
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x32ed7789; 
@property(retain, nonatomic) UIView *gestureView;	// G=0x32ed3cf9; S=0x32ed3415; 
@property(assign) BOOL isDelayed;	// G=0x32ed4d9d; S=0x32fbb3f5; converted property
@property(assign, nonatomic) BOOL isTap;	// G=0x32ed63ed; S=0x32ed3861; 
@property(readonly, assign, nonatomic) int phase;	// G=0x32ed3969; 
@property(assign, nonatomic) int phase;	// S=0x32ed31e9; 
@property(assign, nonatomic) BOOL sentTouchesEnded;	// G=0x32ed6401; S=0x32fe631d; 
@property(readonly, assign, nonatomic) unsigned tapCount;	// G=0x32ed6109; 
@property(assign, nonatomic) unsigned tapCount;	// S=0x32ed3881; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x32fc98fd; 
@property(assign, nonatomic) double timestamp;	// S=0x32ed31d5; 
@property(retain, nonatomic) UIView *view;	// S=0x32ed33d1; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x32ed3c49; 
@property(retain, nonatomic) UIView *warpedIntoView;	// G=0x32ed3459; S=0x32f98ad9; 
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x32ed37d9; 
@property(retain, nonatomic) UIWindow *window;	// S=0x32ed31f9; 
+ (id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;	// 0x330ef0e5
- (void)_addGestureRecognizer:(id)recognizer;	// 0x32fb8191
- (void)_clearGestureRecognizers;	// 0x330ef3f1
- (int)_compareIndex:(id)index;	// 0x330ef459
- (float)_distanceFrom:(id)from inView:(id)view;	// 0x3322e761
- (id)_forwardingRecord;	// 0x32ed539d
- (id)_gestureRecognizers;	// 0x32ed494d
// declared property getter: - (BOOL)_isEaten;	// 0x32ed33bd
- (BOOL)_isFirstTouchForView;	// 0x32ed5a51
- (void)_loadStateFromTouch:(id)touch;	// 0x32fbb2f1
- (CGPoint)_locationInWindow:(id)window;	// 0x32fb91b9
// declared property getter: - (unsigned char)_pathIdentity;	// 0x32ed63dd
// declared property getter: - (unsigned char)_pathIndex;	// 0x32fc9fdd
// declared property getter: - (float)_pathMajorRadius;	// 0x32fc9fed
- (id)_phaseDescription;	// 0x330ef221
- (void)_popPhase;	// 0x330ef439
- (CGPoint)_previousLocationInWindow:(id)window;	// 0x33036fdd
- (void)_pushPhase:(int)phase;	// 0x330ef411
- (void)_removeGestureRecognizer:(id)recognizer;	// 0x32fbbe81
// declared property setter: - (void)_setEaten:(BOOL)eaten;	// 0x330ef0d5
- (void)_setIsFirstTouchForView:(BOOL)view;	// 0x32ed3891
- (void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;	// 0x32ed3479
// declared property setter: - (void)_setPathIdentity:(unsigned char)identity;	// 0x32ed339d
// declared property setter: - (void)_setPathIndex:(unsigned char)index;	// 0x32ed338d
// declared property setter: - (void)_setPathMajorRadius:(float)radius;	// 0x32ed33ad
- (BOOL)_wantsForwardingFromResponder:(id)responder toNextResponder:(id)nextResponder withEvent:(id)event;	// 0x32fd9289
- (void)dealloc;	// 0x32ed7859
- (id)description;	// 0x330ef285
// declared property getter: - (id)gestureRecognizers;	// 0x32ed7789
// declared property getter: - (id)gestureView;	// 0x32ed3cf9
- (int)info;	// 0x330eefbd
// converted property getter: - (BOOL)isDelayed;	// 0x32ed4d9d
// declared property getter: - (BOOL)isTap;	// 0x32ed63ed
- (CGPoint)locationInView:(id)view;	// 0x32ed4e09
// declared property getter: - (int)phase;	// 0x32ed3969
- (CGPoint)previousLocationInView:(id)view;	// 0x330eefc1
// declared property getter: - (BOOL)sentTouchesEnded;	// 0x32ed6401
// declared property setter: - (void)setGestureView:(id)view;	// 0x32ed3415
// converted property setter: - (void)setIsDelayed:(BOOL)delayed;	// 0x32fbb3f5
// declared property setter: - (void)setIsTap:(BOOL)tap;	// 0x32ed3861
// declared property setter: - (void)setPhase:(int)phase;	// 0x32ed31e9
// declared property setter: - (void)setSentTouchesEnded:(BOOL)ended;	// 0x32fe631d
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x32ed3881
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x32ed31d5
// declared property setter: - (void)setView:(id)view;	// 0x32ed33d1
// declared property setter: - (void)setWarpedIntoView:(id)view;	// 0x32f98ad9
// declared property setter: - (void)setWindow:(id)window;	// 0x32ed31f9
// declared property getter: - (unsigned)tapCount;	// 0x32ed6109
// declared property getter: - (double)timestamp;	// 0x32fc98fd
// declared property getter: - (id)view;	// 0x32ed3c49
// declared property getter: - (id)warpedIntoView;	// 0x32ed3459
// declared property getter: - (id)window;	// 0x32ed37d9
@end

