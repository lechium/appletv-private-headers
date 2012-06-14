/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADPoint3D : NSObject <NSCopying> {
@private
	float mX;	// 4 = 0x4
	float mY;	// 8 = 0x8
	float mZ;	// 12 = 0xc
}
- (id)initWithX:(float)x y:(float)y z:(float)z;	// 0x31249b21
- (id)copyWithZone:(NSZone *)zone;	// 0x31249bc9
- (unsigned)hash;	// 0x31249c41
- (BOOL)isEqual:(id)equal;	// 0x31249c95
- (float)x;	// 0x31249b99
- (float)y;	// 0x31249ba9
- (float)z;	// 0x31249bb9
@end

