/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBCellFormatTable : NSObject {
}
+ (id)getStyleNameForCellFormatIndex:(unsigned)cellFormatIndex xlStyleTable:(const XlStyleTable *)table edResources:(id)resources;	// 0x328fbec9
+ (void)readWithState:(id)state;	// 0x328fa909
+ (unsigned)xlCellFormatIndexFromEDCellFormatIndex:(unsigned)edcellFormatIndex state:(id)state;	// 0x32a78839
@end

