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
@interface PBOutlineBulletKey : NSObject <NSCopying> {
@private
	unsigned long mSlideId;	// 4 = 0x4
	int mTextType;	// 8 = 0x8
	unsigned long mPlaceholderIndex;	// 12 = 0xc
}
- (id)initWithOutlineBullet:(id)outlineBullet;	// 0x31159abd
- (id)initWithSlideId:(unsigned long)slideId textType:(int)type placeholderIndex:(unsigned long)index;	// 0x31159b25
- (id)copyWithZone:(NSZone *)zone;	// 0x31159bb9
- (unsigned)hash;	// 0x31159b85
- (BOOL)isEqual:(id)equal;	// 0x3115a2bd
@end

