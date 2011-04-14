/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADVector3D : NSObject <NSCopying> {
@private
	float mDx;	// 4 = 0x4
	float mDy;	// 8 = 0x8
	float mDz;	// 12 = 0xc
}
- (id)initWithDx:(float)dx dy:(float)dy dz:(float)dz;	// 0x31aaedbd
- (id)copyWithZone:(NSZone *)zone;	// 0x31aaebdd
- (float)dx;	// 0x31aae6d1
- (float)dy;	// 0x31aae6e1
- (float)dz;	// 0x31aae6f1
- (unsigned)hash;	// 0x31aae701
- (BOOL)isEqual:(id)equal;	// 0x31aaeaf9
@end

