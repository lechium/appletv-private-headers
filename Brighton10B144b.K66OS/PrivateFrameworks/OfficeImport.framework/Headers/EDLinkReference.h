/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface EDLinkReference : NSObject {
	unsigned mLinkIndex;	// 4 = 0x4
	unsigned mFirstSheetIndex;	// 8 = 0x8
	unsigned mLastSheetIndex;	// 12 = 0xc
}
@property(assign) unsigned firstSheetIndex;	// G=0x34978b91; S=0x34a2a895; converted property
@property(assign) unsigned lastSheetIndex;	// G=0x34978ba1; S=0x34a2a8a5; converted property
@property(assign) unsigned linkIndex;	// G=0x348cf71d; S=0x34a2a8b5; converted property
+ (id)linkReferenceWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x3489de91
- (id)init;	// 0x34a2a839
- (id)initWithLinkIndex:(unsigned)linkIndex firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x3489dee9
// converted property getter: - (unsigned)firstSheetIndex;	// 0x34978b91
- (unsigned)hash;	// 0x34a2a8c5
- (BOOL)isEqual:(id)equal;	// 0x3499f295
- (BOOL)isEqualToLinkReference:(id)linkReference;	// 0x3499f2f1
// converted property getter: - (unsigned)lastSheetIndex;	// 0x34978ba1
// converted property getter: - (unsigned)linkIndex;	// 0x348cf71d
// converted property setter: - (void)setFirstSheetIndex:(unsigned)index;	// 0x34a2a895
// converted property setter: - (void)setLastSheetIndex:(unsigned)index;	// 0x34a2a8a5
// converted property setter: - (void)setLinkIndex:(unsigned)index;	// 0x34a2a8b5
@end
