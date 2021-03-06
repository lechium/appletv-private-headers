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
@property(readonly, retain) NSMutableArray *children;	// G=0x30792b59; converted property
@property(retain) CPDocument *document;	// G=0x30792b6d; S=0x30792f39; converted property
@property(retain) CPPage *page;	// G=0x30792c71; S=0x30792b9d; converted property
@property(retain) CPObject *parent;	// G=0x30792b49; S=0x30792b39; converted property
@property(assign) long zOrder;	// G=0x30792b7d; S=0x30792b8d; converted property
- (id)init;	// 0x30794d5d
- (void)accept:(id)accept;	// 0x30792b69
- (void)add:(id)add;	// 0x30794265
- (void)add:(id)add atIndex:(unsigned)index;	// 0x30794011
- (void)addChildren:(id)children;	// 0x30793f01
- (void)addChildrenOf:(id)of;	// 0x30793e41
- (id)ancestorOfClass:(Class)aClass;	// 0x30793a35
- (id)childAtIndex:(unsigned)index;	// 0x307945f9
// converted property getter: - (id)children;	// 0x30792b59
- (id)childrenNotOfClass:(Class)aClass;	// 0x3079383d
- (id)childrenOfClass:(Class)aClass;	// 0x307938f1
- (void)childrenOfClass:(Class)aClass into:(id)into;	// 0x307939a5
- (void)clearCachedInfo;	// 0x30792e0d
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x30794979
- (id)copyWithZone:(NSZone *)zone;	// 0x30794aa9
- (id)copyWithoutChildren;	// 0x30794a79
- (unsigned)count;	// 0x30794765
- (unsigned)countOfClass:(Class)aClass;	// 0x307946dd
- (unsigned)countOfFirstDescendantsOfClass:(Class)aClass;	// 0x30792fdd
- (void)dealloc;	// 0x30794cb5
- (int)depth;	// 0x30792bd9
- (id)descendantsOfClass:(Class)aClass;	// 0x3079332d
- (id)descendantsOfClass:(Class)aClass deep:(BOOL)deep;	// 0x307933d5
- (id)descendantsOfClass:(Class)aClass omitTraversing:(Class)traversing;	// 0x307931dd
- (void)descendantsOfClass:(Class)aClass to:(id)to;	// 0x30793341
- (void)disposeDescendants;	// 0x30794c0d
// converted property getter: - (id)document;	// 0x30792b6d
- (id)firstChild;	// 0x307945b5
- (id)firstDescendantOfClass:(Class)aClass;	// 0x30793149
- (id)firstDescendantsOfClass:(Class)aClass;	// 0x30792cf1
- (id)firstSibling;	// 0x30794409
- (unsigned)indexOf:(id)of;	// 0x30792fb9
- (BOOL)isEqual:(id)equal;	// 0x30792bad
- (id)lastChild;	// 0x3079457d
- (id)lastDescendantOfClass:(Class)aClass;	// 0x307930b5
- (id)lastSibling;	// 0x30794459
- (void)map:(SEL)map target:(id)target;	// 0x30793569
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass;	// 0x307936f1
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass last:(BOOL)last;	// 0x30793779
- (void)map:(SEL)map target:(id)target last:(BOOL)last;	// 0x307934e1
- (void)mapSafely:(SEL)safely target:(id)target childrenOfClass:(Class)aClass;	// 0x307935d9
- (id)nextSibling;	// 0x30794505
// converted property getter: - (id)page;	// 0x30792c71
// converted property getter: - (id)parent;	// 0x30792b49
- (void)performSelector:(SEL)selector;	// 0x30793819
- (id)previousSibling;	// 0x307944a5
- (void)promoteChildren;	// 0x30793a8d
- (void)recomputeZOrder;	// 0x30792e85
- (void)remove;	// 0x30793c8d
- (void)remove:(id)remove;	// 0x30793d69
- (void)removeAll;	// 0x30793b51
- (void)removeFirstChild;	// 0x30793d11
- (void)removeLastChild;	// 0x30793cbd
- (void)removeObjectAtIndex:(unsigned)index;	// 0x30793b89
// converted property setter: - (void)setDocument:(id)document;	// 0x30792f39
// converted property setter: - (void)setPage:(id)page;	// 0x30792b9d
// converted property setter: - (void)setParent:(id)parent;	// 0x30792b39
// converted property setter: - (void)setZOrder:(long)order;	// 0x30792b8d
- (id)shallowDescendantsOfClass:(Class)aClass;	// 0x30793319
- (id)takeChildren;	// 0x307948b1
- (id)takeChildrenAmong:(id)among;	// 0x30794785
- (void)updateZOrder:(long)order;	// 0x30792e39
// converted property getter: - (long)zOrder;	// 0x30792b7d
@end

