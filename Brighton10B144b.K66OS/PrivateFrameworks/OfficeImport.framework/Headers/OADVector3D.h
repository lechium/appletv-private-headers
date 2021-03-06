/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADVector3D : NSObject <NSCopying> {
	float mDx;	// 4 = 0x4
	float mDy;	// 8 = 0x8
	float mDz;	// 12 = 0xc
}
- (id)initWithDx:(float)dx dy:(float)dy dz:(float)dz;	// 0x34a4628d
- (id)copyWithZone:(NSZone *)zone;	// 0x34a46335
- (float)dx;	// 0x34a46305
- (float)dy;	// 0x34a46315
- (float)dz;	// 0x34a46325
- (unsigned)hash;	// 0x34a463ad
- (BOOL)isEqual:(id)equal;	// 0x34a46401
@end

