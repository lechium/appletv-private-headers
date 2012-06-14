/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDColorReference : NSObject <NSCopying> {
@private
	EDResources *mResources;	// 4 = 0x4
	int mSystemColorID;	// 8 = 0x8
	unsigned mColorIndex;	// 12 = 0xc
	unsigned mThemeIndex;	// 16 = 0x10
	double mTint;	// 20 = 0x14
}
+ (id)colorReferenceWithColor:(id)color resources:(id)resources;	// 0x3454cb99
+ (id)colorReferenceWithColorIndex:(unsigned)colorIndex resources:(id)resources;	// 0x3444ffb5
+ (id)colorReferenceWithResources:(id)resources;	// 0x344500b9
+ (id)colorReferenceWithSystemColorID:(int)systemColorID resources:(id)resources;	// 0x34450091
+ (id)colorReferenceWithXlThemeIndex:(unsigned)xlThemeIndex tint:(double)tint resources:(id)resources;	// 0x34516c19
- (id)initWithColor:(id)color resources:(id)resources;	// 0x344dbb3d
- (id)initWithResources:(id)resources;	// 0x34450105
- (id)color;	// 0x3446fb65
- (unsigned)colorIndex;	// 0x345c1141
- (id)copyWithZone:(NSZone *)zone;	// 0x344dbab9
- (unsigned)hash;	// 0x345c1169
- (BOOL)isEqual:(id)equal;	// 0x34453ba5
- (BOOL)isEqualToColorReference:(id)colorReference;	// 0x34453c01
- (bool)isValid;	// 0x345c10ed
- (int)systemColorID;	// 0x345c1131
- (unsigned)themeIndex;	// 0x3456e791
- (double)tint;	// 0x345c1151
@end
