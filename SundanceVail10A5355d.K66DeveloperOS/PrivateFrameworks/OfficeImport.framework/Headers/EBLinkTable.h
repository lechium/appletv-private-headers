/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EBLinkTable : NSObject {
}
+ (XlLinkTable *)createXlLinkTableFromLinksCollection:(id)linksCollection workbook:(id)workbook state:(id)state;	// 0x31d8d911
+ (int)mapEDLinkTypeToXl:(int)xl;	// 0x31d8dcc1
+ (int)mapXlLinkTypeToED:(int)ed;	// 0x31c20f8d
+ (void)readFromState:(id)state;	// 0x31c20c51
@end
