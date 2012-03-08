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
+ (id)colorReferenceWithColor:(id)color resources:(id)resources;	// 0x3290cb99
+ (id)colorReferenceWithColorIndex:(unsigned)colorIndex resources:(id)resources;	// 0x3280ffb5
+ (id)colorReferenceWithResources:(id)resources;	// 0x328100b9
+ (id)colorReferenceWithSystemColorID:(int)systemColorID resources:(id)resources;	// 0x32810091
+ (id)colorReferenceWithXlThemeIndex:(unsigned)xlThemeIndex tint:(double)tint resources:(id)resources;	// 0x328d6c19
- (id)initWithColor:(id)color resources:(id)resources;	// 0x3289bb3d
- (id)initWithResources:(id)resources;	// 0x32810105
- (id)color;	// 0x3282fb65
- (unsigned)colorIndex;	// 0x32981141
- (id)copyWithZone:(NSZone *)zone;	// 0x3289bab9
- (unsigned)hash;	// 0x32981169
- (BOOL)isEqual:(id)equal;	// 0x32813ba5
- (BOOL)isEqualToColorReference:(id)colorReference;	// 0x32813c01
- (bool)isValid;	// 0x329810ed
- (int)systemColorID;	// 0x32981131
- (unsigned)themeIndex;	// 0x3292e791
- (double)tint;	// 0x32981151
@end

