/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBTableRowProperties : NSObject {
}
+ (void)mapProperties:(id)properties toWordProperties:(WrdTableProperties *)wordProperties;	// 0x34a9155d
+ (void)mapWordProperties:(WrdTableProperties *)properties toProperties:(id)properties2;	// 0x3494e0ad
+ (void)readFrom:(id)from wrdProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked properties:(id)properties4;	// 0x3494df71
+ (void)write:(id)write properties:(id)properties wrdProperties:(WrdTableProperties *)properties3 tracked:(WrdTableProperties *)tracked;	// 0x34a914b9
@end

