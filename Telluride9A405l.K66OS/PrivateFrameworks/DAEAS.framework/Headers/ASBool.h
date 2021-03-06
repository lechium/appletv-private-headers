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
+ (BOOL)acceptsTopLevelLeaves;	// 0x341d1141
+ (BOOL)expectsContent;	// 0x341d1375
+ (BOOL)frontingBasicTypes;	// 0x341d123d
+ (BOOL)notifyOfUnknownTokens;	// 0x341d1291
+ (BOOL)parsingLeafNode;	// 0x341d1195
+ (BOOL)parsingWithSubItems;	// 0x341d11e9
- (id)commonValue;	// 0x341d12e5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x341d1305
- (int)parsingState;	// 0x341d1371
@end

