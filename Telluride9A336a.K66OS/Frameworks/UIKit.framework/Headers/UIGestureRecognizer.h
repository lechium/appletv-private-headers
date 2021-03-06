/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIView, NSMutableArray, UIEvent, NSMutableSet;
@protocol UIGestureRecognizerDelegate;

@interface UIGestureRecognizer : NSObject {
@private
	NSMutableArray *_targets;	// 4 = 0x4
	NSMutableArray *_delayedTouches;	// 8 = 0x8
	UIView *_view;	// 12 = 0xc
	UIEvent *_updateEvent;	// 16 = 0x10
	id<UIGestureRecognizerDelegate> _delegate;	// 20 = 0x14
	NSMutableSet *_failureRequirements;	// 24 = 0x18
	NSMutableSet *_failureDependents;	// 28 = 0x1c
	NSMutableSet *_dynamicFailureRequirements;	// 32 = 0x20
	NSMutableSet *_dynamicFailureDependents;	// 36 = 0x24
	id _failureMap;	// 40 = 0x28
	NSMutableSet *_friends;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned notExclusive : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned delivered : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
	} _gestureFlags;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL cancelsTouchesInView;	// G=0x35373891; S=0x3517b6e9; 
@property(assign, nonatomic) BOOL delaysTouchesBegan;	// G=0x353738a5; S=0x350fc165; 
@property(assign, nonatomic) BOOL delaysTouchesEnded;	// G=0x353738b9; S=0x350fc6cd; 
@property(assign, nonatomic) id<UIGestureRecognizerDelegate> delegate;	// G=0x35222355; S=0x350fbf65; @synthesize=_delegate
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x351417f9; S=0x350fc189; 
@property(assign, getter=isExclusive) BOOL exclusive;	// G=0x351b52e1; S=0x35100f21; converted property
@property(readonly, assign, nonatomic) int state;	// G=0x35141815; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x350fc351; 
+ (BOOL)_touchesBeganWasDelayedForTouch:(id)touch;	// 0x351ba6cd
- (id)init;	// 0x35373529
- (id)initWithCoder:(id)coder;	// 0x3537353d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x350fbcdd
- (id)_activeTouchesForEvent:(id)event;	// 0x351b3ba1
- (void)_addDynamicFailureDependent:(id)dependent;	// 0x353739a9
- (void)_addDynamicFailureRequirement:(id)requirement;	// 0x353739f5
- (void)_addFailureDependent:(id)dependent;	// 0x35141121
- (void)_addFriendGesture:(id)gesture;	// 0x352521a5
- (BOOL)_affectedByGesture:(id)gesture;	// 0x351b52f9
- (void)_appendDescription:(id)description forDependencies:(id)dependencies toString:(id)string atLevel:(int)level;	// 0x35373a95
- (void)_appendDescriptionToString:(id)string atLevel:(int)level includingDependencies:(BOOL)dependencies;	// 0x35373bdd
- (void)_appendSubclassDescription:(id)description;	// 0x35373a91
- (id)_briefDescription;	// 0x35373a41
- (void)_cancelRecognition;	// 0x35373971
- (CGPoint)_centroidOfTouches:(id)touches excludingEnded:(BOOL)ended;	// 0x351b3c91
- (void)_clearDelayedTouches;	// 0x350df1f5
- (void)_clearUpdateTimer;	// 0x3514676d
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x3532a1f5
- (void)_delayTouch:(id)touch forEvent:(id)event;	// 0x351b5485
- (void)_delayTouchesForEvent:(id)event;	// 0x35149539
- (void)_delayedUpdateGesture;	// 0x35148acd
- (BOOL)_delegateCanPreventGestureRecognizer:(id)recognizer;	// 0x351b6c3d
- (BOOL)_delegateShouldReceiveTouch:(id)_delegate;	// 0x351b2779
- (int)_depthFirstViewCompare:(id)compare;	// 0x351b4ee1
- (void)_detach;	// 0x3525eb59
- (float)_distanceBetweenTouches:(id)touches;	// 0x35230a8d
- (void)_enqueueDelayedTouchToSend:(id)send;	// 0x351b6479
- (void)_enqueueDelayedTouchesToSend;	// 0x350df029
- (void)_exclude;	// 0x351b6e3d
- (id)_failureMap;	// 0x351bce05
- (void)_failureRequirementCompleted:(id)completed withEvent:(id)event;	// 0x35146541
- (void)_invalidate;	// 0x353740d9
- (BOOL)_isDirty;	// 0x350dc621
- (BOOL)_isExcludedByGesture:(id)gesture;	// 0x351b50b1
- (BOOL)_isFriendWithGesture:(id)gesture;	// 0x351d9761
- (BOOL)_isRecognized;	// 0x351466a5
- (void)_queryFailureRequirements;	// 0x351488e9
- (void)_queueForResetIfFinished;	// 0x350dc639
- (void)_relatedGestureReleased:(id)released;	// 0x35216ff5
- (void)_removeFailureDependent:(id)dependent;	// 0x3523c7f9
- (BOOL)_requiresGestureRecognizerToFail:(id)fail;	// 0x351b5359
- (void)_resetGestureRecognizer;	// 0x351bcf59
- (void)_resetIfFinished;	// 0x351bce15
- (void)_setDirty;	// 0x351b39ad
- (void)_setFailureMap:(id)map;	// 0x35141825
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x351b5481
- (void)_touchWasCancelled:(id)cancelled;	// 0x351ba795
- (void)_updateGestureStateWithEvent:(id)event afterDelay:(BOOL)delay;	// 0x351466ed
- (void)_updateGestureWithEvent:(id)event;	// 0x35148aed
- (void)addTarget:(id)target action:(SEL)action;	// 0x35373745
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x351b6c39
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x351d9721
// declared property getter: - (BOOL)cancelsTouchesInView;	// 0x35373891
- (void)dealloc;	// 0x350dee61
// declared property getter: - (BOOL)delaysTouchesBegan;	// 0x353738a5
// declared property getter: - (BOOL)delaysTouchesEnded;	// 0x353738b9
// declared property getter: - (id)delegate;	// 0x35222355
- (id)description;	// 0x35374091
- (void)encodeWithCoder:(id)coder;	// 0x35373691
- (void)ignoreTouch:(id)touch forEvent:(id)event;	// 0x351b642d
// declared property getter: - (BOOL)isEnabled;	// 0x351417f9
// converted property getter: - (BOOL)isExclusive;	// 0x351b52e1
- (CGPoint)locationInView:(id)view;	// 0x353740ed
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x35374275
- (unsigned)numberOfTouches;	// 0x3523219d
- (void)removeFailureRequirement:(id)requirement;	// 0x3523c761
- (void)removeTarget:(id)target action:(SEL)action;	// 0x3515ed5d
- (void)requireGestureRecognizerToFail:(id)fail;	// 0x351410a1
- (void)requireOtherGestureToFail:(id)fail;	// 0x35141091
- (void)reset;	// 0x351012fd
// declared property setter: - (void)setCancelsTouchesInView:(BOOL)view;	// 0x3517b6e9
// declared property setter: - (void)setDelaysTouchesBegan:(BOOL)began;	// 0x350fc165
// declared property setter: - (void)setDelaysTouchesEnded:(BOOL)ended;	// 0x350fc6cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x350fbf65
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x350fc189
// converted property setter: - (void)setExclusive:(BOOL)exclusive;	// 0x35100f21
- (void)setState:(int)state;	// 0x351b5dbd
- (void)setView:(id)view;	// 0x350fc361
// declared property getter: - (int)state;	// 0x35141815
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x353738cd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x353738d9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x353738d5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x353738d1
// declared property getter: - (id)view;	// 0x350fc351
@end

