/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBCell : NSObject {
}
+ (int)convertXlCellTypeToED:(int)ed;	// 0x311d5599
+ (int)convertXlErrorEnumToED:(int)ed;	// 0x311ee3dd
+ (void)readXlCell:(XlCell *)cell edRowInfo:(EDRowInfo **)info edRowBlock:(id)block edRowBlocks:(id)blocks state:(id)state;	// 0x311d53cd
@end
