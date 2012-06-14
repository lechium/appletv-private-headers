/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WBTableProperties : NSObject {
}
+ (void)copy:(id)copy properties:(id)properties toRowProperties:(WrdTableProperties *)rowProperties;	// 0x31292fb1
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x31293731
+ (void)mapProperties:(id)properties writer:(id)writer toWordProperties:(WrdTableProperties *)wordProperties;	// 0x3129374d
+ (void)mapWordProperties:(WrdTableProperties *)properties reader:(id)reader toProperties:(id)properties3;	// 0x31150d0d
+ (void)readFrom:(id)from wrdProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked properties:(id)properties4;	// 0x31150c21
+ (void)write:(id)write properties:(id)properties wrdProperties:(WrdTableProperties *)properties3 tracked:(WrdTableProperties *)tracked;	// 0x31292f2d
@end

