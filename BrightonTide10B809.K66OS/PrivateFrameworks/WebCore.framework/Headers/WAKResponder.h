/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library


@interface WAKResponder : NSObject {
}
- (void)_forwardEvent:(id)event;	// 0x3648edc1
- (BOOL)acceptsFirstResponder;	// 0x3648eeb1
- (BOOL)becomeFirstResponder;	// 0x3648eeb5
- (void)deleteBackward:(id)backward;	// 0x3648ee65
- (void)deleteForward:(id)forward;	// 0x3648ee69
- (void)handleEvent:(id)event;	// 0x3648edbd
- (void)insertParagraphSeparator:(id)separator;	// 0x3648ee6d
- (void)insertText:(id)text;	// 0x3648ee61
- (void)keyDown:(id)down;	// 0x3648ee2d
- (void)keyUp:(id)up;	// 0x3648ee3d
- (void)mouseDown:(id)down;	// 0x3648eea1
- (void)mouseEntered:(id)entered;	// 0x3648edfd
- (void)mouseExited:(id)exited;	// 0x3648ee0d
- (void)mouseMoved:(id)moved;	// 0x3648ee1d
- (void)mouseUp:(id)up;	// 0x3648ee91
- (void)moveDown:(id)down;	// 0x3648ee71
- (void)moveDownAndModifySelection:(id)selection;	// 0x3648ee75
- (void)moveLeft:(id)left;	// 0x3648ee79
- (void)moveLeftAndModifySelection:(id)selection;	// 0x3648ee7d
- (void)moveRight:(id)right;	// 0x3648ee81
- (void)moveRightAndModifySelection:(id)selection;	// 0x3648ee85
- (void)moveUp:(id)up;	// 0x3648ee89
- (void)moveUpAndModifySelection:(id)selection;	// 0x3648ee8d
- (id)nextResponder;	// 0x3648ee5d
- (BOOL)resignFirstResponder;	// 0x35e3ec01
- (void)scrollWheel:(id)wheel;	// 0x3648eded
- (void)touch:(id)touch;	// 0x3648ee4d
- (BOOL)tryToPerform:(SEL)perform with:(id)with;	// 0x35ea8e75
@end
