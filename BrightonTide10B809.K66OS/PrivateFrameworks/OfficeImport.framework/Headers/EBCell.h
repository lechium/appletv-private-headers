/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EBCell : NSObject {
}
+ (int)convertEDErrorValueEnumToXl:(int)xl;	// 0x34a09f65
+ (int)convertXlCellTypeToED:(int)ed;	// 0x348afe95
+ (int)convertXlErrorEnumToED:(int)ed;	// 0x349ae24d
+ (void)readXlCell:(XlCell *)cell edRowInfo:(EDRowInfo **)info edRowBlock:(id)block edRowBlocks:(id)blocks state:(id)state;	// 0x348afcf5
@end

