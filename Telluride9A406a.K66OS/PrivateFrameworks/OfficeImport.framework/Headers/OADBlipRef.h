/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, OADBlip, NSString;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <NSCopying> {
@private
	int mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x328b2379; S=0x32970495; converted property
@property(assign) long index;	// G=0x328e3a6d; S=0x32ab9d91; converted property
@property(retain) id name;	// G=0x329b23ad; S=0x32ab9ead; converted property
+ (int)blipTypeForExtension:(id)extension;	// 0x329b1fc9
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x32aba069
- (id)init;	// 0x329b6c29
- (id)initWithIndex:(long)index name:(id)name;	// 0x328df691
- (void)addEffect:(id)effect;	// 0x328e3f3d
// converted property getter: - (id)blip;	// 0x328b2379
- (id)copyWithZone:(NSZone *)zone;	// 0x32a06325
- (void)dealloc;	// 0x328a9ef9
- (id)effectAtIndex:(unsigned)index;	// 0x32a066a1
- (unsigned)effectCount;	// 0x32a06681
- (id)effects;	// 0x32ab9dcd
- (unsigned)hash;	// 0x32aba1bd
// converted property getter: - (long)index;	// 0x328e3a6d
- (BOOL)isEqual:(id)equal;	// 0x32aba0f5
- (BOOL)isNull;	// 0x32ab9da1
// converted property getter: - (id)name;	// 0x329b23ad
- (void)removeEffectAtIndex:(unsigned)index;	// 0x32ab9ef1
// converted property setter: - (void)setBlip:(id)blip;	// 0x32970495
- (void)setFilename:(id)filename data:(id)data;	// 0x32ab9f15
- (void)setFilenameAndDelayedContext:(id)context context:(id)context2 targetSize:(long)size;	// 0x32aba2d5
// converted property setter: - (void)setIndex:(long)index;	// 0x32ab9d91
// converted property setter: - (void)setName:(id)name;	// 0x32ab9ead
- (void)setPath:(id)path;	// 0x32aba281
@end

