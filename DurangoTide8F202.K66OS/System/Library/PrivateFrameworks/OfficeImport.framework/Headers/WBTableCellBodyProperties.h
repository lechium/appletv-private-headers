/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBTableCellBodyProperties : NSObject {
}
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x31b1df8d
+ (void)mapProperties:(id)properties toWordProperties:(WrdTableProperties *)wordProperties index:(int)index;	// 0x31b1e031
+ (void)mapWordProperties:(WrdTableProperties *)properties toProperties:(id)properties2 index:(int)index;	// 0x319c0b85
+ (void)readFrom:(WrdTableProperties *)from tracked:(WrdTableProperties *)tracked properties:(id)properties index:(int)index;	// 0x319c0a35
+ (void)write:(id)write wrdProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked index:(int)index;	// 0x31b1dfad
@end

