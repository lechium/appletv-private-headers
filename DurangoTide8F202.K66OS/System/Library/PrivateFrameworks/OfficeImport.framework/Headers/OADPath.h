/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADPath : NSObject {
@private
	CGSize mSize;	// 4 = 0x4
	NSMutableArray *mElements;	// 12 = 0xc
	int mFillMode;	// 16 = 0x10
	BOOL mStroked;	// 20 = 0x14
}
@property(assign) int fillMode;	// G=0x31ab5ad1; S=0x319f9631; converted property
@property(assign) CGSize size;	// G=0x31ab5ab9; S=0x31a5c6a5; converted property
@property(assign) BOOL stroked;	// G=0x31981675; S=0x319f9641; converted property
- (id)init;	// 0x3195b4e1
- (void)addElement:(id)element;	// 0x3195b615
- (void)dealloc;	// 0x3195b675
- (id)elementAtIndex:(unsigned)index;	// 0x31981ea9
- (unsigned)elementCount;	// 0x3195b635
// converted property getter: - (int)fillMode;	// 0x31ab5ad1
// converted property setter: - (void)setFillMode:(int)mode;	// 0x319f9631
// converted property setter: - (void)setSize:(CGSize)size;	// 0x31a5c6a5
// converted property setter: - (void)setStroked:(BOOL)stroked;	// 0x319f9641
// converted property getter: - (CGSize)size;	// 0x31ab5ab9
// converted property getter: - (BOOL)stroked;	// 0x31981675
@end

