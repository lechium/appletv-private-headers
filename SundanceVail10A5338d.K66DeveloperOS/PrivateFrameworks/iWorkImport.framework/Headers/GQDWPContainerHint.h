/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDWPContainerHint : NSObject {
	long mPageIndex;	// 4 = 0x4
	long mCIndex;	// 8 = 0x8
	long mSIndex;	// 12 = 0xc
	long mLIndex;	// 16 = 0x10
	long mAnchorLocation;	// 20 = 0x14
	double mAttachmentPosition;	// 24 = 0x18
	CGRect mFrame;	// 32 = 0x20
}
- (id)initWithPageIndex:(long)pageIndex cIndex:(long)index sIndex:(long)index3 lIndex:(long)index4 anchorLocation:(long)location frame:(CGRect)frame;	// 0x350bda01
- (id).cxx_construct;	// 0x350bdb5d
- (long)anchorLocation;	// 0x350bdb11
- (double)attachmentPosition;	// 0x350bdb21
- (long)cIndex;	// 0x350bdae1
- (CGRect)frame;	// 0x350bdb39
- (long)lIndex;	// 0x350bdb01
- (long)pageIndex;	// 0x350bdad1
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x350bdb61
- (long)sIndex;	// 0x350bdaf1
@end
