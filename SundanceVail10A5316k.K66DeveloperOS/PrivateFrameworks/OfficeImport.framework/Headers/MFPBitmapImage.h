/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPImage.h"

@class NSData, TSUImage;

__attribute__((visibility("hidden")))
@interface MFPBitmapImage : MFPImage {
@private
	NSData *mBitmapData;	// 4 = 0x4
	TSUImage *mPhoneBitmapImage;	// 8 = 0x8
	CGSize mPixelSize;	// 12 = 0xc
	CGSize mPointSize;	// 20 = 0x14
}
- (id)initWithBitmapData:(id)bitmapData;	// 0x31302009
- (id).cxx_construct;	// 0x313022ad
- (void)dealloc;	// 0x3130212d
- (void)drawInRect:(CGRect)rect fromRect:(CGRect)rect2 unit:(int)unit effect:(id)effect;	// 0x31302179
- (id)phoneImage;	// 0x3130226d
- (CGSize)pixelSize;	// 0x3130227d
- (CGSize)pointSize;	// 0x31302295
@end

