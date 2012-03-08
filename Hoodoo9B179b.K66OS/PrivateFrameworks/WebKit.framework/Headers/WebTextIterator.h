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
- (id)initWithRange:(id)range;	// 0x3457be59
- (void)advance;	// 0x3457be39
- (BOOL)atEnd;	// 0x3457bb9d
- (id)currentNode;	// 0x3457bffd
- (id)currentRange;	// 0x3457bd2d
- (id)currentText;	// 0x3457bca1
- (unsigned)currentTextLength;	// 0x3457bbe5
- (const unsigned short *)currentTextPointer;	// 0x3457bbc5
- (void)dealloc;	// 0x3457bce1
@end

