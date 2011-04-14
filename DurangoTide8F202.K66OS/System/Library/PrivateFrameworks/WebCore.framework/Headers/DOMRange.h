/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMNode, NSString;

@interface DOMRange : DOMObject {
}
@property(readonly, assign) BOOL collapsed;	// G=0x33ed9445; 
@property(readonly, retain) DOMNode *commonAncestorContainer;	// G=0x33fabf7d; 
@property(readonly, retain) DOMNode *endContainer;	// G=0x33ef80a1; 
@property(readonly, assign) int endOffset;	// G=0x33ef80dd; 
@property(readonly, retain) DOMNode *startContainer;	// G=0x33ef03d5; 
@property(readonly, assign) int startOffset;	// G=0x33ef8069; 
@property(readonly, copy) NSString *text;	// G=0x33efdd81; 
- (id)_text;	// 0x33efdd6d
- (CGRect)boundingBox;	// 0x33f6ea9d
- (id)cloneContents;	// 0x33fab649
- (id)cloneRange;	// 0x33fab27d
- (void)collapse:(BOOL)collapse;	// 0x33fab99d
// declared property getter: - (BOOL)collapsed;	// 0x33ed9445
// declared property getter: - (id)commonAncestorContainer;	// 0x33fabf7d
- (short)compareBoundaryPoints:(unsigned short)points :(id)arg2;	// 0x33fab8d9
- (short)compareBoundaryPoints:(unsigned short)points sourceRange:(id)range;	// 0x33fab91d
- (short)compareNode:(id)node;	// 0x33faaf01
- (short)comparePoint:(id)point offset:(int)offset;	// 0x33faaebd
- (id)createContextualFragment:(id)fragment;	// 0x33faaf81
- (void)dealloc;	// 0x33edc591
- (void)deleteContents;	// 0x33fab8a9
- (id)description;	// 0x33f6d659
- (void)detach;	// 0x33efded9
// declared property getter: - (id)endContainer;	// 0x33ef80a1
// declared property getter: - (int)endOffset;	// 0x33ef80dd
- (void)expand:(id)expand;	// 0x33faad45
- (void)extend:(unsigned long)extend inDirection:(int)direction;	// 0x33faf85d
- (id)extractContents;	// 0x33fab779
- (void)finalize;	// 0x33fabfb9
- (void)insertNode:(id)node;	// 0x33fab505
- (BOOL)intersectsNode:(id)node;	// 0x33faaf41
- (BOOL)isPointInRange:(id)range offset:(int)offset;	// 0x33faae79
- (id)lineBoxRects;	// 0x33f6d645
- (void)move:(unsigned long)move inDirection:(int)direction;	// 0x33faf345
- (void)selectNode:(id)node;	// 0x33ef7de9
- (void)selectNodeContents:(id)contents;	// 0x33fab961
- (void)setEnd:(id)end :(int)arg2;	// 0x33faba4d
- (void)setEnd:(id)end offset:(int)offset;	// 0x33fabb99
- (void)setEndAfter:(id)after;	// 0x33efdd31
- (void)setEndBefore:(id)before;	// 0x33fab9d5
- (void)setStart:(id)start :(int)arg2;	// 0x33fabce5
- (void)setStart:(id)start offset:(int)offset;	// 0x33fabe31
- (void)setStartAfter:(id)after;	// 0x33faba11
- (void)setStartBefore:(id)before;	// 0x33efdcd9
// declared property getter: - (id)startContainer;	// 0x33ef03d5
// declared property getter: - (int)startOffset;	// 0x33ef8069
- (void)surroundContents:(id)contents;	// 0x33fab3c1
// declared property getter: - (id)text;	// 0x33efdd81
- (id)textRects;	// 0x33f6e8f9
- (id)toString;	// 0x33fab131
@end

