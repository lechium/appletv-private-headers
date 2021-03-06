/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library


@interface AVFileProcessor : NSObject {
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x33792a01
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x33792a45
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x33792a6d
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x33792a91
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x33792ab5
- (id)rentalInfo:(id)info;	// 0x33792bd5
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x33792d2d
- (id)sinfsFromFilePath:(id)filePath;	// 0x33792d05
@end

