/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADPath : NSObject {
@private
	CGSize mSize;	// 4 = 0x4
	NSMutableArray *mElements;	// 12 = 0xc
	int mFillMode;	// 16 = 0x10
	BOOL mStroked;	// 20 = 0x14
}
@property(assign) int fillMode;	// G=0x34e22f19; S=0x34ccb4cd; converted property
@property(assign) CGSize size;	// G=0x34e22f01; S=0x34d38e99; converted property
@property(assign) BOOL stroked;	// G=0x34cc809d; S=0x34ccb4dd; converted property
- (id)init;	// 0x34c49801
- (void)addElement:(id)element;	// 0x34c4991d
- (void)dealloc;	// 0x34c49985
- (id)elementAtIndex:(unsigned)index;	// 0x34cc8945
- (unsigned)elementCount;	// 0x34c49941
// converted property getter: - (int)fillMode;	// 0x34e22f19
// converted property setter: - (void)setFillMode:(int)mode;	// 0x34ccb4cd
// converted property setter: - (void)setSize:(CGSize)size;	// 0x34d38e99
// converted property setter: - (void)setStroked:(BOOL)stroked;	// 0x34ccb4dd
// converted property getter: - (CGSize)size;	// 0x34e22f01
// converted property getter: - (BOOL)stroked;	// 0x34cc809d
@end

