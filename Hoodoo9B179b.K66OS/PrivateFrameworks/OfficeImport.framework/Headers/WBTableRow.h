/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBTableRow : NSObject {
}
+ (void)collectCellProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked for:(id)aFor;	// 0x329a2695
+ (void)readCellsFrom:(id)from textRuns:(id)runs level:(int)level to:(id)to properties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked;	// 0x32874205
+ (void)readFrom:(id)from textRuns:(id)runs to:(id)to index:(int)index row:(id)row;	// 0x32873b5d
@end

