/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADEffect : NSObject <NSCopying> {
	int mType;	// 4 = 0x4
}
- (id)initWithType:(int)type;	// 0x34800079
- (id)copyWithZone:(NSZone *)zone;	// 0x34a4ca39
- (unsigned)hash;	// 0x34a4ca3d
- (BOOL)isEqual:(id)equal;	// 0x349974ad
- (void)setStyleColor:(id)color;	// 0x349b1f15
- (int)type;	// 0x34997519
@end
