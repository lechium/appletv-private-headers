/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBParagraphProperties : NSObject {
}
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x329a0f4d
+ (void)mapWordProperties:(WrdParagraphProperties *)properties reader:(id)reader toProperties:(id)properties3;	// 0x3285fb4d
+ (void)readFrom:(id)from wrdProperties:(WrdParagraphProperties *)properties tracked:(WrdParagraphProperties *)tracked document:(id)document properties:(id)properties5;	// 0x3285facd
@end

