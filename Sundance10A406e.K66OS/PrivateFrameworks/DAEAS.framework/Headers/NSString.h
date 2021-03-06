/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSString.h> // Unknown library


@interface NSString (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c100cd
+ (BOOL)expectsContent;	// 0x36c10559
+ (BOOL)frontingBasicTypes;	// 0x36c101c9
+ (BOOL)notifyOfUnknownTokens;	// 0x36c1021d
+ (BOOL)parsingLeafNode;	// 0x36c10121
+ (BOOL)parsingWithSubItems;	// 0x36c10175
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x36c10271
- (int)parsingState;	// 0x36c10555
@end

@interface NSString (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x36c6e925
@end

@interface NSString (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x36c707fd
@end

@interface NSString (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x36c70841
@end

