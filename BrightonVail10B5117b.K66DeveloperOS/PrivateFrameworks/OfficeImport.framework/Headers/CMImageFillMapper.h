/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class OADFill, OADOrientedBounds;

@interface CMImageFillMapper : CMMapper {
	OADFill *mFill;	// 8 = 0x8
	OADOrientedBounds *mBounds;	// 12 = 0xc
}
- (id)initWithOadFill:(id)oadFill bounds:(id)bounds parent:(id)parent;	// 0x34a537e5
- (id)blipAtIndex:(unsigned)index;	// 0x34a55bad
- (id)convertMetafileToPdf:(id)pdf state:(id)state;	// 0x34b33081
- (BOOL)isCropped;	// 0x34a556f1
- (id)mainSubBlip;	// 0x34a55a91
- (void)mapAt:(id)at withState:(id)state;	// 0x34bb9b85
- (id)mapImageFill:(id)fill withState:(id)state;	// 0x34a5593d
- (void)mapImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x34b378f5
- (void)mapNonImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x34a53839
- (CGRect)uncroppedBox;	// 0x34a59b11
@end

