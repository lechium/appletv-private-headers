/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"


@interface ASBool : ASItem <ASParsingFrontingBasicType> {
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c329f9
+ (BOOL)expectsContent;	// 0x36c32c2d
+ (BOOL)frontingBasicTypes;	// 0x36c32af5
+ (BOOL)notifyOfUnknownTokens;	// 0x36c32b49
+ (BOOL)parsingLeafNode;	// 0x36c32a4d
+ (BOOL)parsingWithSubItems;	// 0x36c32aa1
- (id)commonValue;	// 0x36c32b9d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36c32bbd
- (int)parsingState;	// 0x36c32c29
@end
