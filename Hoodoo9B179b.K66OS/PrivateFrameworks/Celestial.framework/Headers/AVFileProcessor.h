/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library


@interface AVFileProcessor : NSObject {
@private
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x30eaad6d
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x30eaadb1
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x30eaadd5
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x30eaadf9
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x30eaae1d
- (id)rentalInfo:(id)info;	// 0x30eaaf41
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x30eab099
- (id)sinfsFromFilePath:(id)filePath;	// 0x30eab071
@end

