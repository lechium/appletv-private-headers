/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBColorScheme : NSObject {
}
+ (void)addColorWithIndex:(int)index fromScheme:(PptColorSchemeAtom *)scheme atIndex:(int)index3 inScheme:(id)scheme4;	// 0x319d22c5
+ (void)addColorWithIndex:(int)index fromScheme:(PptColorSchemeAtom *)scheme colorTransform:(/*function-pointer*/ void *)transform atIndex:(int)index4 inScheme:(id)scheme5;	// 0x319d22f9
+ (void)readFromColorScheme:(PptColorSchemeAtom *)colorScheme toColorScheme:(id)colorScheme2 colorMap:(id)map state:(id)state;	// 0x319d2021
@end

