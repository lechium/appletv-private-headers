/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXBorders : NSObject {
}
+ (id)edBorderFromXmlElement:(xmlNode *)xmlElement diagonalType:(int)type state:(id)state;	// 0x31a48829
+ (int)edBorderStyleFromXmlBorderStyleString:(id)xmlBorderStyleString;	// 0x31a48919
+ (id)edBordersFromXmlBordersElement:(xmlNode *)xmlBordersElement state:(id)state;	// 0x31a48685
+ (int)edDiagStyleFromXmlElement:(xmlNode *)xmlElement;	// 0x31a48a95
@end

