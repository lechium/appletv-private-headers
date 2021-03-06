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
+ (BOOL)acceptsTopLevelLeaves;	// 0x339f55e9
+ (BOOL)expectsContent;	// 0x339f581d
+ (BOOL)frontingBasicTypes;	// 0x339f56e5
+ (BOOL)notifyOfUnknownTokens;	// 0x339f5739
+ (BOOL)parsingLeafNode;	// 0x339f563d
+ (BOOL)parsingWithSubItems;	// 0x339f5691
- (id)commonValue;	// 0x339f578d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x339f57ad
- (int)parsingState;	// 0x339f5819
@end

