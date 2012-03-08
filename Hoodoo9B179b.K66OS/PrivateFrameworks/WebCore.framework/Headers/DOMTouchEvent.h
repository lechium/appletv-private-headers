/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class DOMTouchList;

__attribute__((visibility("hidden")))
@interface DOMTouchEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x3377f349; 
@property(readonly, retain) DOMTouchList *changedTouches;	// G=0x3377f529; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x3377f2e1; 
@property(readonly, assign) BOOL metaKey;	// G=0x3377f37d; 
@property(readonly, assign) float rotation;	// G=0x3377f2b1; 
@property(readonly, assign) float scale;	// G=0x3377f285; 
@property(readonly, assign) BOOL shiftKey;	// G=0x3377f315; 
@property(readonly, retain) DOMTouchList *targetTouches;	// G=0x3377f46d; 
@property(readonly, retain) DOMTouchList *touches;	// G=0x3377f3b1; 
- (void)initTouchEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 touches:(id)touches targetTouches:(id)touches15 changedTouches:(id)touches16 scale:(float)scale rotation:(float)rotation;	// 0x3377f5e5
// declared property getter: - (BOOL)altKey;	// 0x3377f349
// declared property getter: - (id)changedTouches;	// 0x3377f529
// declared property getter: - (BOOL)ctrlKey;	// 0x3377f2e1
// declared property getter: - (BOOL)metaKey;	// 0x3377f37d
// declared property getter: - (float)rotation;	// 0x3377f2b1
// declared property getter: - (float)scale;	// 0x3377f285
// declared property getter: - (BOOL)shiftKey;	// 0x3377f315
// declared property getter: - (id)targetTouches;	// 0x3377f46d
// declared property getter: - (id)touches;	// 0x3377f3b1
@end

