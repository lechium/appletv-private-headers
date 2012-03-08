/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSString.h> // Unknown library


@interface NSString (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x31daf1c1
+ (BOOL)expectsContent;	// 0x31daf66d
+ (BOOL)frontingBasicTypes;	// 0x31daf2bd
+ (BOOL)notifyOfUnknownTokens;	// 0x31daf311
+ (BOOL)parsingLeafNode;	// 0x31daf215
+ (BOOL)parsingWithSubItems;	// 0x31daf269
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x31daf365
- (int)parsingState;	// 0x31daf669
@end

@interface NSString (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x31e0bf95
@end

@interface NSString (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x31e0dfa9
@end

@interface NSString (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x31e0dfed
@end

