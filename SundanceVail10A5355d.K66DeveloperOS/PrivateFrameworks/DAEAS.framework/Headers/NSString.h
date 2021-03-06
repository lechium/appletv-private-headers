/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSString.h> // Unknown library
#import "ASParsingLeafNode.h"


@interface NSString (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x34b4dbe5
+ (BOOL)expectsContent;	// 0x34b4e071
+ (BOOL)frontingBasicTypes;	// 0x34b4dce1
+ (BOOL)notifyOfUnknownTokens;	// 0x34b4dd35
+ (BOOL)parsingLeafNode;	// 0x34b4dc39
+ (BOOL)parsingWithSubItems;	// 0x34b4dc8d
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x34b4dd89
- (int)parsingState;	// 0x34b4e06d
@end

@interface NSString (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x34bac3d5
@end

@interface NSString (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x34bae2ad
@end

@interface NSString (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x34bae2f1
@end

