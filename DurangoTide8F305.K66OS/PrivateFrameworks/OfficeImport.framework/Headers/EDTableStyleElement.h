/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"

@class EDDifferentialStyle, EDCollection;

__attribute__((visibility("hidden")))
@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {
@private
	EDCollection *mDifferentialStyles;	// 4 = 0x4
	int mType;	// 8 = 0x8
	unsigned mBandSize;	// 12 = 0xc
	EDDifferentialStyle *mDifferentialStyle;	// 16 = 0x10
}
@property(assign) unsigned bandSize;	// G=0x345704f1; S=0x345acbb1; converted property
@property(retain) id differentialStyle;	// G=0x3457109d; S=0x345561a5; converted property
@property(assign) int type;	// G=0x345acba1; S=0x3455614d; converted property
+ (id)tableStyleElementWithResources:(id)resources;	// 0x345acbc1
- (id)initWithResources:(id)resources;	// 0x34555de1
// converted property getter: - (unsigned)bandSize;	// 0x345704f1
- (id)copyWithZone:(NSZone *)zone;	// 0x345acc05
- (void)dealloc;	// 0x3455cce5
// converted property getter: - (id)differentialStyle;	// 0x3457109d
- (unsigned)key;	// 0x345561e1
// converted property setter: - (void)setBandSize:(unsigned)size;	// 0x345acbb1
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x345561a5
- (void)setDifferentialStyleWithIndex:(unsigned)index;	// 0x3455616d
// converted property setter: - (void)setType:(int)type;	// 0x3455614d
// converted property getter: - (int)type;	// 0x345acba1
@end
