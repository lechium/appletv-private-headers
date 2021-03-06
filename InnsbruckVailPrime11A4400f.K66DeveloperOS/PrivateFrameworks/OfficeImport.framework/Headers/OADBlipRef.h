/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADBlip, NSMutableArray, NSString;

@interface OADBlipRef : NSObject <NSCopying> {
	long mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x3171e209; S=0x3174dee1; converted property
@property(retain) id effects;	// G=0x31821319; S=0x31821329; converted property
@property(assign) long index;	// G=0x3171e219; S=0x318ebd29; converted property
@property(retain) id name;	// G=0x3181c6f9; S=0x318ebd39; converted property
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x3181c67d
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x3181c6a1
+ (int)blipTypeForContentType:(id)contentType;	// 0x3181c3f1
+ (int)blipTypeForExtension:(id)extension;	// 0x318ebd99
+ (int)blipTypeForImageData:(id)imageData;	// 0x318ebf91
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x318ec239
- (id)init;	// 0x318ebd25
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x3171d019
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x3171d03d
- (void)addEffect:(id)effect;	// 0x3174d941
// converted property getter: - (id)blip;	// 0x3171e209
- (id)copyWithZone:(NSZone *)zone;	// 0x3187db09
- (void)dealloc;	// 0x3171fe0d
- (id)effectAtIndex:(unsigned)index;	// 0x31779065
- (unsigned)effectCount;	// 0x31779045
// converted property getter: - (id)effects;	// 0x31821319
- (unsigned)hash;	// 0x31779189
// converted property getter: - (long)index;	// 0x3171e219
- (BOOL)isEqual:(id)equal;	// 0x31779a71
- (BOOL)isNull;	// 0x318ec2d1
// converted property getter: - (id)name;	// 0x3181c6f9
- (void)removeEffectAtIndex:(unsigned)index;	// 0x318ebd79
// converted property setter: - (void)setBlip:(id)blip;	// 0x3174dee1
// converted property setter: - (void)setEffects:(id)effects;	// 0x31821329
// converted property setter: - (void)setIndex:(long)index;	// 0x318ebd29
// converted property setter: - (void)setName:(id)name;	// 0x318ebd39
@end

