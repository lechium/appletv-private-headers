/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPContainerHint : NSObject {
@private
	long mPageIndex;	// 4 = 0x4
	long mCIndex;	// 8 = 0x8
	long mSIndex;	// 12 = 0xc
	long mLIndex;	// 16 = 0x10
	long mAnchorLocation;	// 20 = 0x14
	double mAttachmentPosition;	// 24 = 0x18
	CGRect mFrame;	// 32 = 0x20
}
- (id)initWithPageIndex:(long)pageIndex cIndex:(long)index sIndex:(long)index3 lIndex:(long)index4 anchorLocation:(long)location frame:(CGRect)frame;	// 0x34284359
- (long)anchorLocation;	// 0x342842cd
- (double)attachmentPosition;	// 0x342842dd
- (long)cIndex;	// 0x3428429d
- (CGRect)frame;	// 0x342842f5
- (long)lIndex;	// 0x342842bd
- (long)pageIndex;	// 0x3428428d
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x34284439
- (long)sIndex;	// 0x342842ad
@end

