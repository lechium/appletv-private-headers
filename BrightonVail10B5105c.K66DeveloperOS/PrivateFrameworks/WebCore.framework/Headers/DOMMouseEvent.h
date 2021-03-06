/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class DOMNode;
@protocol DOMEventTarget;

@interface DOMMouseEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x36ad71d9; 
@property(readonly, assign) unsigned short button;	// G=0x36ad7241; 
@property(readonly, assign) int clientX;	// G=0x36ad7119; 
@property(readonly, assign) int clientY;	// G=0x36ad7145; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x36ad7171; 
@property(readonly, assign) DOMNode *fromElement;	// G=0x36ad7775; 
@property(readonly, assign) BOOL metaKey;	// G=0x36ad720d; 
@property(readonly, assign) int offsetX;	// G=0x36ad7375; 
@property(readonly, assign) int offsetY;	// G=0x36ad7475; 
@property(readonly, assign) id<DOMEventTarget> relatedTarget;	// G=0x36ad7271; 
@property(readonly, assign) int screenX;	// G=0x36ad70c1; 
@property(readonly, assign) int screenY;	// G=0x36ad70ed; 
@property(readonly, assign) BOOL shiftKey;	// G=0x36ad71a5; 
@property(readonly, assign) DOMNode *toElement;	// G=0x36ad7881; 
@property(readonly, assign) int x;	// G=0x36ad7575; 
@property(readonly, assign) int y;	// G=0x36ad7675; 
- (void)initMouseEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(BOOL)arg10 :(BOOL)arg11 :(BOOL)arg12 :(BOOL)arg13 :(unsigned short)arg14 :(id)arg15;	// 0x36ad7c71
- (void)initMouseEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 button:(unsigned short)button relatedTarget:(id)target;	// 0x36ad798d
// declared property getter: - (BOOL)altKey;	// 0x36ad71d9
// declared property getter: - (unsigned short)button;	// 0x36ad7241
// declared property getter: - (int)clientX;	// 0x36ad7119
// declared property getter: - (int)clientY;	// 0x36ad7145
// declared property getter: - (BOOL)ctrlKey;	// 0x36ad7171
// declared property getter: - (id)fromElement;	// 0x36ad7775
// declared property getter: - (BOOL)metaKey;	// 0x36ad720d
// declared property getter: - (int)offsetX;	// 0x36ad7375
// declared property getter: - (int)offsetY;	// 0x36ad7475
// declared property getter: - (id)relatedTarget;	// 0x36ad7271
// declared property getter: - (int)screenX;	// 0x36ad70c1
// declared property getter: - (int)screenY;	// 0x36ad70ed
// declared property getter: - (BOOL)shiftKey;	// 0x36ad71a5
// declared property getter: - (id)toElement;	// 0x36ad7881
// declared property getter: - (int)x;	// 0x36ad7575
// declared property getter: - (int)y;	// 0x36ad7675
@end

