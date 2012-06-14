/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
@private
	WebTextIteratorPrivate *_private;	// 4 = 0x4
}
- (id)initWithRange:(id)range;	// 0x3507ec85
- (void)advance;	// 0x3507eddd
- (BOOL)atEnd;	// 0x3507edfd
- (id)currentNode;	// 0x3507efc9
- (id)currentRange;	// 0x3507ee2d
- (id)currentText;	// 0x3507eff5
- (unsigned)currentTextLength;	// 0x3507efa9
- (const unsigned short *)currentTextPointer;	// 0x3507ef89
- (void)dealloc;	// 0x3507ec39
@end

