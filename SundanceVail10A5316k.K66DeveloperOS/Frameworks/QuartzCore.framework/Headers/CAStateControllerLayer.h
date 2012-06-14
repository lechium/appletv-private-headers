/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library

@class CALayer, CAStateControllerUndo, NSTimer, NSMutableArray, CAState;

__attribute__((visibility("hidden")))
@interface CAStateControllerLayer : NSObject {
@private
	CALayer *_layer;	// 4 = 0x4
	CAState *_currentState;	// 8 = 0x8
	CAStateControllerUndo *_undoStack;	// 12 = 0xc
	NSMutableArray *_transitions;	// 16 = 0x10
	NSTimer *_nextTimer;	// 20 = 0x14
	CAState *_nextState;	// 24 = 0x18
	float _nextSpeed;	// 28 = 0x1c
}
@property(retain, nonatomic) CAState *currentState;	// G=0x32a7ab59; S=0x32a7ab69; @synthesize=_currentState
@property(readonly, assign) CALayer *layer;	// G=0x32a7ab45; @synthesize=_layer
@property(readonly, assign) CAStateControllerUndo *undoStack;	// G=0x32a7ab79; @synthesize=_undoStack
- (id)initWithLayer:(id)layer;	// 0x32a7a8b9
- (void)addTransition:(id)transition;	// 0x32a7a911
// declared property getter: - (id)currentState;	// 0x32a7ab59
- (void)dealloc;	// 0x32a7aa91
- (void)invalidate;	// 0x32a7a99d
// declared property getter: - (id)layer;	// 0x32a7ab45
- (void)removeTransition:(id)transition;	// 0x32a7a97d
// declared property setter: - (void)setCurrentState:(id)state;	// 0x32a7ab69
// declared property getter: - (id)undoStack;	// 0x32a7ab79
@end

