/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
	id _touchTarget;	// 56 = 0x38
	SEL _touchAction;	// 60 = 0x3c
	unsigned _passedHitTest : 1;	// 64 = 0x40
	unsigned _defaultPrevented : 1;	// 64 = 0x40
	unsigned _inJavaScriptGesture : 1;	// 64 = 0x40
	float _originalGestureDistance;	// 68 = 0x44
	float _originalGestureAngle;	// 72 = 0x48
	int _type;	// 76 = 0x4c
	CGPoint _locationInWindow;	// 80 = 0x50
	NSMutableArray *_touchLocations;	// 88 = 0x58
	NSMutableArray *_touchIdentifiers;	// 92 = 0x5c
	NSMutableArray *_touchPhases;	// 96 = 0x60
	float _scale;	// 100 = 0x64
	float _rotation;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented;	// G=0x31f16961; S=0x31f16975; @synthesize=_defaultPrevented
@property(readonly, assign, nonatomic) BOOL inJavaScriptGesture;	// G=0x31f169ed; @synthesize=_inJavaScriptGesture
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x31f169a5; @synthesize=_locationInWindow
@property(readonly, assign, nonatomic) float rotation;	// G=0x31f16a11; @synthesize=_rotation
@property(readonly, assign, nonatomic) float scale;	// G=0x31f16a01; @synthesize=_scale
@property(retain, nonatomic) NSMutableArray *touchIdentifiers;	// G=0x31f169cd; S=0x31c88ead; @synthesize=_touchIdentifiers
@property(retain, nonatomic) NSMutableArray *touchLocations;	// G=0x31f169bd; S=0x31c88e9d; @synthesize=_touchLocations
@property(retain, nonatomic) NSMutableArray *touchPhases;	// G=0x31f169dd; S=0x31c88ebd; @synthesize=_touchPhases
@property(readonly, assign, nonatomic) int type;	// G=0x31f16995; @synthesize=_type
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31c88c1d
- (unsigned)_getNextTouchIdentifier;	// 0x31f161e5
- (BOOL)_hitTestTouches:(id)touches;	// 0x31d470ad
- (id)_identifiersDescription;	// 0x31f15df1
- (id)_locationsDescription;	// 0x31f15c81
- (id)_phaseDescription:(int)description;	// 0x31f15f1d
- (id)_phasesDescription;	// 0x31f15f75
- (void)_processTouches:(id)touches withEvent:(id)event type:(int)type;	// 0x31f166a9
- (void)_recordTouches:(id)touches type:(int)type;	// 0x31f16241
- (void)_reset;	// 0x31d47321
- (void)_resetGestureRecognizer;	// 0x31d472dd
- (id)_typeDescription;	// 0x31f15c25
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x31f168a5
- (void)dealloc;	// 0x31f15bb9
- (id)description;	// 0x31f160b1
// declared property getter: - (BOOL)inJavaScriptGesture;	// 0x31f169ed
// declared property getter: - (BOOL)isDefaultPrevented;	// 0x31f16961
// declared property getter: - (CGPoint)locationInWindow;	// 0x31f169a5
// declared property getter: - (float)rotation;	// 0x31f16a11
// declared property getter: - (float)scale;	// 0x31f16a01
// declared property setter: - (void)setDefaultPrevented:(BOOL)prevented;	// 0x31f16975
// declared property setter: - (void)setTouchIdentifiers:(id)identifiers;	// 0x31c88ead
// declared property setter: - (void)setTouchLocations:(id)locations;	// 0x31c88e9d
// declared property setter: - (void)setTouchPhases:(id)phases;	// 0x31c88ebd
// declared property getter: - (id)touchIdentifiers;	// 0x31f169cd
// declared property getter: - (id)touchLocations;	// 0x31f169bd
// declared property getter: - (id)touchPhases;	// 0x31f169dd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31d46fe9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31f16925
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31f168e9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31f168ad
// declared property getter: - (int)type;	// 0x31f16995
@end

