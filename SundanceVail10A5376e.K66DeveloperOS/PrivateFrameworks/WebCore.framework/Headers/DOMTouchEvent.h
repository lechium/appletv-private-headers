/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class DOMTouchList;

@interface DOMTouchEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x31b39f2d; 
@property(readonly, assign) DOMTouchList *changedTouches;	// G=0x31b39d65; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x31b39ec5; 
@property(readonly, assign) BOOL metaKey;	// G=0x31b39f61; 
@property(readonly, assign) float rotation;	// G=0x31b39e95; 
@property(readonly, assign) float scale;	// G=0x31b39e69; 
@property(readonly, assign) BOOL shiftKey;	// G=0x31b39ef9; 
@property(readonly, assign) DOMTouchList *targetTouches;	// G=0x31b39c61; 
@property(readonly, assign) DOMTouchList *touches;	// G=0x31b39b5d; 
- (void)initTouchEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 touches:(id)touches targetTouches:(id)touches15 changedTouches:(id)touches16 scale:(float)scale rotation:(float)rotation;	// 0x31b39f95
// declared property getter: - (BOOL)altKey;	// 0x31b39f2d
// declared property getter: - (id)changedTouches;	// 0x31b39d65
// declared property getter: - (BOOL)ctrlKey;	// 0x31b39ec5
// declared property getter: - (BOOL)metaKey;	// 0x31b39f61
// declared property getter: - (float)rotation;	// 0x31b39e95
// declared property getter: - (float)scale;	// 0x31b39e69
// declared property getter: - (BOOL)shiftKey;	// 0x31b39ef9
// declared property getter: - (id)targetTouches;	// 0x31b39c61
// declared property getter: - (id)touches;	// 0x31b39b5d
@end

