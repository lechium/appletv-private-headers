/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSData.h> // Unknown library
#import "ASParsingLeafNode.h"


@interface NSData (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x32ecf79d
+ (BOOL)expectsContent;	// 0x32ecf47d
+ (BOOL)frontingBasicTypes;	// 0x32ecf6c5
+ (BOOL)notifyOfUnknownTokens;	// 0x32ecf67d
+ (BOOL)parsingLeafNode;	// 0x32ecf755
+ (BOOL)parsingWithSubItems;	// 0x32ecf70d
- (id)initForLengthTokenOfLength:(unsigned)length;	// 0x32ecfd59
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x32ecfddd
- (int)parsingState;	// 0x32ecf479
@end

