/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class CPDocument, NSMutableArray, CPPage;

@interface CPObject : NSObject <NSCopying> {
	CPObject *parent;	// 4 = 0x4
	NSMutableArray *children;	// 8 = 0x8
	CPDocument *document;	// 12 = 0xc
	CPPage *page;	// 16 = 0x10
	long zOrder;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *children;	// G=0x304c2b59; converted property
@property(retain) CPDocument *document;	// G=0x304c2b6d; S=0x304c2f39; converted property
@property(retain) CPPage *page;	// G=0x304c2c71; S=0x304c2b9d; converted property
@property(retain) CPObject *parent;	// G=0x304c2b49; S=0x304c2b39; converted property
@property(assign) long zOrder;	// G=0x304c2b7d; S=0x304c2b8d; converted property
- (id)init;	// 0x304c4d5d
- (void)accept:(id)accept;	// 0x304c2b69
- (void)add:(id)add;	// 0x304c4265
- (void)add:(id)add atIndex:(unsigned)index;	// 0x304c4011
- (void)addChildren:(id)children;	// 0x304c3f01
- (void)addChildrenOf:(id)of;	// 0x304c3e41
- (id)ancestorOfClass:(Class)aClass;	// 0x304c3a35
- (id)childAtIndex:(unsigned)index;	// 0x304c45f9
// converted property getter: - (id)children;	// 0x304c2b59
- (id)childrenNotOfClass:(Class)aClass;	// 0x304c383d
- (id)childrenOfClass:(Class)aClass;	// 0x304c38f1
- (void)childrenOfClass:(Class)aClass into:(id)into;	// 0x304c39a5
- (void)clearCachedInfo;	// 0x304c2e0d
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x304c4979
- (id)copyWithZone:(NSZone *)zone;	// 0x304c4aa9
- (id)copyWithoutChildren;	// 0x304c4a79
- (unsigned)count;	// 0x304c4765
- (unsigned)countOfClass:(Class)aClass;	// 0x304c46dd
- (unsigned)countOfFirstDescendantsOfClass:(Class)aClass;	// 0x304c2fdd
- (void)dealloc;	// 0x304c4cb5
- (int)depth;	// 0x304c2bd9
- (id)descendantsOfClass:(Class)aClass;	// 0x304c332d
- (id)descendantsOfClass:(Class)aClass deep:(BOOL)deep;	// 0x304c33d5
- (id)descendantsOfClass:(Class)aClass omitTraversing:(Class)traversing;	// 0x304c31dd
- (void)descendantsOfClass:(Class)aClass to:(id)to;	// 0x304c3341
- (void)disposeDescendants;	// 0x304c4c0d
// converted property getter: - (id)document;	// 0x304c2b6d
- (id)firstChild;	// 0x304c45b5
- (id)firstDescendantOfClass:(Class)aClass;	// 0x304c3149
- (id)firstDescendantsOfClass:(Class)aClass;	// 0x304c2cf1
- (id)firstSibling;	// 0x304c4409
- (unsigned)indexOf:(id)of;	// 0x304c2fb9
- (BOOL)isEqual:(id)equal;	// 0x304c2bad
- (id)lastChild;	// 0x304c457d
- (id)lastDescendantOfClass:(Class)aClass;	// 0x304c30b5
- (id)lastSibling;	// 0x304c4459
- (void)map:(SEL)map target:(id)target;	// 0x304c3569
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass;	// 0x304c36f1
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass last:(BOOL)last;	// 0x304c3779
- (void)map:(SEL)map target:(id)target last:(BOOL)last;	// 0x304c34e1
- (void)mapSafely:(SEL)safely target:(id)target childrenOfClass:(Class)aClass;	// 0x304c35d9
- (id)nextSibling;	// 0x304c4505
// converted property getter: - (id)page;	// 0x304c2c71
// converted property getter: - (id)parent;	// 0x304c2b49
- (void)performSelector:(SEL)selector;	// 0x304c3819
- (id)previousSibling;	// 0x304c44a5
- (void)promoteChildren;	// 0x304c3a8d
- (void)recomputeZOrder;	// 0x304c2e85
- (void)remove;	// 0x304c3c8d
- (void)remove:(id)remove;	// 0x304c3d69
- (void)removeAll;	// 0x304c3b51
- (void)removeFirstChild;	// 0x304c3d11
- (void)removeLastChild;	// 0x304c3cbd
- (void)removeObjectAtIndex:(unsigned)index;	// 0x304c3b89
// converted property setter: - (void)setDocument:(id)document;	// 0x304c2f39
// converted property setter: - (void)setPage:(id)page;	// 0x304c2b9d
// converted property setter: - (void)setParent:(id)parent;	// 0x304c2b39
// converted property setter: - (void)setZOrder:(long)order;	// 0x304c2b8d
- (id)shallowDescendantsOfClass:(Class)aClass;	// 0x304c3319
- (id)takeChildren;	// 0x304c48b1
- (id)takeChildrenAmong:(id)among;	// 0x304c4785
- (void)updateZOrder:(long)order;	// 0x304c2e39
// converted property getter: - (long)zOrder;	// 0x304c2b7d
@end

