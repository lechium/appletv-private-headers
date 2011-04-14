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
@interface OADColorTransform : NSObject <NSCopying> {
@private
	int mType;	// 4 = 0x4
}
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x3195eef5
+ (id)applyExpTransformWithValue:(float)value toColor:(id)color;	// 0x31a74db1
+ (id)applyHSLTransform:(id)transform toColor:(id)color;	// 0x31a61911
+ (id)applyRGBTransform:(id)transform toColor:(id)color;	// 0x31ab17e1
+ (id)applyTransforms:(id)transforms toColor:(id)color;	// 0x318f7dd1
- (id)initWithType:(int)type;	// 0x3196d8c1
- (id)copyWithZone:(NSZone *)zone;	// 0x31ab1951
- (unsigned)hash;	// 0x31a66ca9
- (BOOL)isEqual:(id)equal;	// 0x31a66cb9
- (int)type;	// 0x3195eed5
@end

