/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

__attribute__((visibility("hidden")))
@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x33777f41; 
@property(readonly, retain) id<DOMNodeFilter> filter;	// G=0x337781b5; 
@property(readonly, assign) BOOL pointerBeforeReferenceNode;	// G=0x33777f71; 
@property(readonly, retain) DOMNode *referenceNode;	// G=0x337780f9; 
@property(readonly, retain) DOMNode *root;	// G=0x33778271; 
@property(readonly, assign) unsigned whatToShow;	// G=0x33777f15; 
- (void)dealloc;	// 0x336934cd
- (void)detach;	// 0x33693561
// declared property getter: - (BOOL)expandEntityReferences;	// 0x33777f41
// declared property getter: - (id)filter;	// 0x337781b5
- (void)finalize;	// 0x3377832d
- (id)nextNode;	// 0x336927bd
// declared property getter: - (BOOL)pointerBeforeReferenceNode;	// 0x33777f71
- (id)previousNode;	// 0x33777fa1
// declared property getter: - (id)referenceNode;	// 0x337780f9
// declared property getter: - (id)root;	// 0x33778271
// declared property getter: - (unsigned)whatToShow;	// 0x33777f15
@end

