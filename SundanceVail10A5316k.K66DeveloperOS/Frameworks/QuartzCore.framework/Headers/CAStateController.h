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
@private
	CAStateControllerData *_data;	// 4 = 0x4
}
@property(assign) NSObject<CAStateControllerDelegate> *delegate;	// G=0x32a78b6d; S=0x32a78b81; 
@property(readonly, assign) CALayer *layer;	// G=0x32a78b59; 
- (id)initWithLayer:(id)layer;	// 0x32a78a11
- (void)_addAnimation:(id)animation forKey:(id)key target:(id)target undo:(id)undo;	// 0x32a79d2d
- (void)_applyTransition:(id)transition layer:(id)layer undo:(id)undo speed:(float)speed;	// 0x32a79e4d
- (void)_applyTransitionElement:(id)element layer:(id)layer undo:(id)undo speed:(float)speed;	// 0x32a7a331
- (void)_nextStateTimer:(id)timer;	// 0x32a79c75
- (void)_removeTransition:(id)transition layer:(id)layer;	// 0x32a7a2fd
- (void)cancelTimers;	// 0x32a79bf9
- (void)dealloc;	// 0x32a78a85
// declared property getter: - (id)delegate;	// 0x32a78b6d
// declared property getter: - (id)layer;	// 0x32a78b59
- (id)removeAllStateChanges;	// 0x32a799e5
- (void)restoreStateChanges:(id)changes;	// 0x32a79b21
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32a78b81
- (void)setInitialStatesOfLayer:(id)layer;	// 0x32a799d1
- (void)setInitialStatesOfLayer:(id)layer transitionSpeed:(float)speed;	// 0x32a797f9
- (void)setState:(id)state ofLayer:(id)layer;	// 0x32a797d5
- (void)setState:(id)state ofLayer:(id)layer transitionSpeed:(float)speed;	// 0x32a78bd9
- (id)stateOfLayer:(id)layer;	// 0x32a78b95
@end

