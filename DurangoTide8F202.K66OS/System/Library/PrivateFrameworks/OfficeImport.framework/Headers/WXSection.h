/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WXSection : NSObject {
}
+ (void)initialize;	// 0x31a3d3a5
+ (void)mapFooter:(xmlNode *)footer toSection:(id)section state:(id)state;	// 0x31a3fe35
+ (void)mapHeader:(xmlNode *)header toSection:(id)section state:(id)state;	// 0x31a3d739
+ (void)mapProperties:(xmlNode *)properties toSection:(id)section state:(id)state;	// 0x31a3da19
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x31a3d561
@end

