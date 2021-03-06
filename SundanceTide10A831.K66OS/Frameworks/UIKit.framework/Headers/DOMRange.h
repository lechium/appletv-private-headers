/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebSelectionBlock.h"
#import <DOMRange.h> // Unknown library


@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x31ec9ad1
- (id)asDomRange;	// 0x31ec9ae1
- (CGRect)boundingRect;	// 0x31ec95a9
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x31ec971d
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x31ec9bf1
- (BOOL)containsBlock:(id)block;	// 0x31ec99ad
- (BOOL)containsRange:(id)range;	// 0x31ec9ae5
- (id)enclosingDocument;	// 0x31ec9bf9
- (BOOL)isSameBlock:(id)block;	// 0x31ec990d
- (id)largerParent;	// 0x31ec98e5
- (id)parentBlock;	// 0x31ec98a1
- (id)rangeOfContents;	// 0x31ec9bf5
- (BOOL)rendersAsBlock;	// 0x31ec9aa5
- (BOOL)selectable;	// 0x31ec9aa9
- (BOOL)strictlyContainsBlock:(id)block;	// 0x31ec9a29
- (void)unionWithRange:(id)range;	// 0x31ec9469
- (id)webFrame;	// 0x31ec9581
@end

