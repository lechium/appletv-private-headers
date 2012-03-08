/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGradientFillStop : NSObject <NSCopying> {
@private
	OADColor *mColor;	// 4 = 0x4
	float mPosition;	// 8 = 0x8
}
- (id)initWithColor:(id)color position:(float)position;	// 0x32800b59
- (id)color;	// 0x32802689
- (id)copyWithZone:(NSZone *)zone;	// 0x328f90f9
- (void)dealloc;	// 0x32804611
- (unsigned)hash;	// 0x329d4f19
- (BOOL)isEqual:(id)equal;	// 0x32930369
- (float)position;	// 0x32930439
- (void)setStyleColor:(id)color;	// 0x328f92a9
@end

