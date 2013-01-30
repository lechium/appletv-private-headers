/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class NSString, DOMNode;

@interface DOMRange : DOMObject {
}
@property(readonly, assign) BOOL collapsed;	// G=0x35e90ed1; 
@property(readonly, assign) DOMNode *commonAncestorContainer;	// G=0x3601d6e9; 
@property(readonly, assign) DOMNode *endContainer;	// G=0x35f00b65; 
@property(readonly, assign) int endOffset;	// G=0x35f00c81; 
@property(readonly, assign) DOMNode *startContainer;	// G=0x35ec2d11; 
@property(readonly, assign) int startOffset;	// G=0x35f00a51; 
@property(readonly, assign) NSString *text;	// G=0x35ed4c1d; 
- (id)_text;	// 0x35fa6345
- (CGRect)boundingBox;	// 0x35fa5c85
- (id)cloneContents;	// 0x3601e215
- (id)cloneRange;	// 0x3601e689
- (void)collapse:(BOOL)collapse;	// 0x35f0289d
// declared property getter: - (BOOL)collapsed;	// 0x35e90ed1
// declared property getter: - (id)commonAncestorContainer;	// 0x3601d6e9
- (short)compareBoundaryPoints:(unsigned short)points :(id)arg2;	// 0x3601de6d
- (short)compareBoundaryPoints:(unsigned short)points sourceRange:(id)range;	// 0x35ec54c9
- (short)compareNode:(id)node;	// 0x3601ed55
- (short)comparePoint:(id)point offset:(int)offset;	// 0x3601ee79
- (id)createContextualFragment:(id)fragment;	// 0x3601ea15
- (void)dealloc;	// 0x35e9d329
- (void)deleteContents;	// 0x3601df91
- (id)description;	// 0x35fa6291
- (void)detach;	// 0x35f00f19
// declared property getter: - (id)endContainer;	// 0x35f00b65
// declared property getter: - (int)endOffset;	// 0x35f00c81
- (void)expand:(id)expand;	// 0x3601f0c9
- (void)extend:(unsigned long)extend inDirection:(int)direction;	// 0x36026ded
- (id)extractContents;	// 0x3601e0a1
- (void)finalize;	// 0x3601d5e5
- (id)firstNode;	// 0x3602720d
- (void)insertNode:(id)node;	// 0x3601e389
- (BOOL)intersectsNode:(id)node;	// 0x3601ec31
- (BOOL)isPointInRange:(id)range offset:(int)offset;	// 0x3601efa1
- (id)lineBoxRects;	// 0x35fa5e91
- (void)move:(unsigned long)move inDirection:(int)direction;	// 0x360269ad
- (void)selectNode:(id)node;	// 0x35f007b5
- (void)selectNodeContents:(id)contents;	// 0x3601dd4d
- (void)setEnd:(id)end :(int)arg2;	// 0x3601d989
- (void)setEnd:(id)end offset:(int)offset;	// 0x35f00d95
- (void)setEndAfter:(id)after;	// 0x35ed4a35
- (void)setEndBefore:(id)before;	// 0x3601dc2d
- (void)setStart:(id)start :(int)arg2;	// 0x3601d805
- (void)setStart:(id)start offset:(int)offset;	// 0x35ed48b1
- (void)setStartAfter:(id)after;	// 0x3601db0d
- (void)setStartBefore:(id)before;	// 0x35f0277d
// declared property getter: - (id)startContainer;	// 0x35ec2d11
// declared property getter: - (int)startOffset;	// 0x35f00a51
- (void)surroundContents:(id)contents;	// 0x3601e509
// declared property getter: - (id)text;	// 0x35ed4c1d
- (id)textRects;	// 0x35fa5cb9
- (id)toString;	// 0x3601e849
@end
