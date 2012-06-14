/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CPCopying.h"

@class CPPage, NSMutableArray, CPDocument;

@interface CPObject : NSObject <NSCopying, CPCopying> {
	CPObject *parent;	// 4 = 0x4
	NSMutableArray *children;	// 8 = 0x8
	CPDocument *document;	// 12 = 0xc
	CPPage *page;	// 16 = 0x10
	long zOrder;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *children;	// G=0x33a2d975; converted property
@property(retain) CPDocument *document;	// G=0x33a2df79; S=0x33a2def5; converted property
@property(retain) CPPage *page;	// G=0x33a2e1f1; S=0x33a2e1e1; converted property
@property(retain) CPObject *parent;	// G=0x33a2c6f1; S=0x33a2c6e1; converted property
@property(assign) long zOrder;	// G=0x33a2df89; S=0x33a2e08d; converted property
- (id)init;	// 0x33a2c03d
- (id)initSuper;	// 0x33a2c0c1
- (void)accept:(id)accept;	// 0x33a2dea5
- (void)add:(id)add;	// 0x33a2ca79
- (void)add:(id)add atIndex:(unsigned)index;	// 0x33a2cc15
- (void)addChildren:(id)children;	// 0x33a2ce4d
- (void)addChildrenOf:(id)of;	// 0x33a2cf71
- (id)ancestorOfClass:(Class)aClass;	// 0x33a2d3c5
- (id)childAtIndex:(unsigned)index;	// 0x33a2c7a9
// converted property getter: - (id)children;	// 0x33a2d975
- (id)childrenNotOfClass:(Class)aClass;	// 0x33a2d56d
- (id)childrenOfClass:(Class)aClass;	// 0x33a2d4b1
- (void)childrenOfClass:(Class)aClass into:(id)into;	// 0x33a2d419
- (void)clearCachedInfo;	// 0x33a2e09d
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x33a2c3e1
- (id)copyWithZone:(NSZone *)zone;	// 0x33a2c24d
- (id)copyWithoutChildren;	// 0x33a2c3b1
- (unsigned)count;	// 0x33a2c701
- (unsigned)countOfClass:(Class)aClass;	// 0x33a2c721
- (unsigned)countOfFirstDescendantsOfClass:(Class)aClass;	// 0x33a2ddcd
- (void)dealloc;	// 0x33a2c0ed
- (int)depth;	// 0x33a2e269
- (id)descendantsOfClass:(Class)aClass;	// 0x33a2db31
- (id)descendantsOfClass:(Class)aClass deep:(BOOL)deep;	// 0x33a2d985
- (id)descendantsOfClass:(Class)aClass omitTraversing:(Class)traversing;	// 0x33a2db59
- (void)descendantsOfClass:(Class)aClass to:(id)to;	// 0x33a2da8d
- (void)disposeDescendants;	// 0x33a2c199
// converted property getter: - (id)document;	// 0x33a2df79
- (id)firstChild;	// 0x33a2c885
- (id)firstDescendantOfClass:(Class)aClass;	// 0x33a2dc95
- (id)firstDescendantsOfClass:(Class)aClass;	// 0x33a2e0c1
- (id)firstSibling;	// 0x33a2ca29
- (unsigned)indexOf:(id)of;	// 0x33a2dea9
- (BOOL)isEqual:(id)equal;	// 0x33a2dec9
- (id)lastChild;	// 0x33a2c8c9
- (id)lastDescendantOfClass:(Class)aClass;	// 0x33a2dd39
- (id)lastSibling;	// 0x33a2c9dd
- (void)map:(SEL)map target:(id)target;	// 0x33a2d889
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass;	// 0x33a2d6e5
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass last:(BOOL)last;	// 0x33a2d649
- (void)map:(SEL)map target:(id)target last:(BOOL)last;	// 0x33a2d8f5
- (void)mapSafely:(SEL)safely target:(id)target childrenOfClass:(Class)aClass;	// 0x33a2d769
- (id)newTakeChildren;	// 0x33a2c4e9
- (id)newTakeChildrenAmong:(id)among;	// 0x33a2c5a1
- (id)nextSibling;	// 0x33a2c901
// converted property getter: - (id)page;	// 0x33a2e1f1
// converted property getter: - (id)parent;	// 0x33a2c6f1
- (void)performSelector:(SEL)selector;	// 0x33a2d629
- (id)previousSibling;	// 0x33a2c979
- (void)promoteChildren;	// 0x33a2d305
- (void)recomputeZOrder;	// 0x33a2df99
- (void)remove;	// 0x33a2d1b5
- (void)remove:(id)remove;	// 0x33a2d035
- (void)removeAll;	// 0x33a2d2cd
- (void)removeFirstChild;	// 0x33a2d109
- (void)removeLastChild;	// 0x33a2d161
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33a2d1dd
// converted property setter: - (void)setDocument:(id)document;	// 0x33a2def5
// converted property setter: - (void)setPage:(id)page;	// 0x33a2e1e1
// converted property setter: - (void)setParent:(id)parent;	// 0x33a2c6e1
// converted property setter: - (void)setZOrder:(long)order;	// 0x33a2e08d
- (id)shallowDescendantsOfClass:(Class)aClass;	// 0x33a2db45
- (void)updateZOrder:(long)order;	// 0x33a2e04d
// converted property getter: - (long)zOrder;	// 0x33a2df89
@end
