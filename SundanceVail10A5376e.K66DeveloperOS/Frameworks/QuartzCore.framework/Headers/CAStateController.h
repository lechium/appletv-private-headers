/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CALayer;
@protocol CAStateControllerDelegate;

@interface CAStateController : NSObject {
	CAStateControllerData *_data;	// 4 = 0x4
}
@property(assign) NSObject<CAStateControllerDelegate> *delegate;	// G=0x33cdf0b5; S=0x33cdf0c9; 
@property(readonly, assign) CALayer *layer;	// G=0x33cdf0a1; 
- (id)initWithLayer:(id)layer;	// 0x33cdef59
- (void)_addAnimation:(id)animation forKey:(id)key target:(id)target undo:(id)undo;	// 0x33ce0275
- (void)_applyTransition:(id)transition layer:(id)layer undo:(id)undo speed:(float)speed;	// 0x33ce0395
- (void)_applyTransitionElement:(id)element layer:(id)layer undo:(id)undo speed:(float)speed;	// 0x33ce0871
- (void)_nextStateTimer:(id)timer;	// 0x33ce01bd
- (void)_removeTransition:(id)transition layer:(id)layer;	// 0x33ce083d
- (void)cancelTimers;	// 0x33ce0141
- (void)dealloc;	// 0x33cdefcd
// declared property getter: - (id)delegate;	// 0x33cdf0b5
// declared property getter: - (id)layer;	// 0x33cdf0a1
- (id)removeAllStateChanges;	// 0x33cdff2d
- (void)restoreStateChanges:(id)changes;	// 0x33ce0069
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33cdf0c9
- (void)setInitialStatesOfLayer:(id)layer;	// 0x33cdff19
- (void)setInitialStatesOfLayer:(id)layer transitionSpeed:(float)speed;	// 0x33cdfd41
- (void)setState:(id)state ofLayer:(id)layer;	// 0x33cdfd1d
- (void)setState:(id)state ofLayer:(id)layer transitionSpeed:(float)speed;	// 0x33cdf121
- (id)stateOfLayer:(id)layer;	// 0x33cdf0dd
@end
