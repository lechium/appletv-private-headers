/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSString.h> // Unknown library


@interface NSString (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x339d3a65
+ (BOOL)expectsContent;	// 0x339d3ef1
+ (BOOL)frontingBasicTypes;	// 0x339d3b61
+ (BOOL)notifyOfUnknownTokens;	// 0x339d3bb5
+ (BOOL)parsingLeafNode;	// 0x339d3ab9
+ (BOOL)parsingWithSubItems;	// 0x339d3b0d
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x339d3c09
- (int)parsingState;	// 0x339d3eed
@end

@interface NSString (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x33a3274d
@end

@interface NSString (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x33a34625
@end

@interface NSString (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x33a34669
@end
