/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "ASParsing.h"

@class NSInvocation, NSMutableDictionary;

@interface ASItem : NSObject <ASParsing> {
	ASItem *_root;	// 4 = 0x4
	ASItem *_parent;	// 8 = 0x8
	int _codePage;	// 12 = 0xc
	int _token;	// 16 = 0x10
	NSObject<ASParsing> *_currentlyParsingSubItem;	// 20 = 0x14
	int _currentlyParsingCPTNumber;	// 24 = 0x18
	NSInvocation *_currentStreamInvocation;	// 28 = 0x1c
	int _parsingState;	// 32 = 0x20
	NSMutableDictionary *_parseRuleUsageNumbers;	// 36 = 0x24
}
@property(retain) NSInvocation *currentStreamInvocation;	// G=0x3441a571; S=0x3441a581; converted property
@property(readonly, retain) ASItem *parent;	// G=0x3441a115; converted property
@property(readonly, assign) int parsingState;	// G=0x3441a561; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x344185bd
+ (BOOL)expectsContent;	// 0x3441a5c5
+ (BOOL)frontingBasicTypes;	// 0x3441873d
+ (BOOL)notifyOfUnknownTokens;	// 0x344187bd
+ (BOOL)parsingLeafNode;	// 0x3441863d
+ (BOOL)parsingWithSubItems;	// 0x344186bd
- (id)init;	// 0x3441883d
- (int)_dataclass;	// 0x344196e1
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)context curToken:(unsigned char)token;	// 0x344197fd
- (BOOL)_itemPathMatches:(id)matches;	// 0x3441a125
- (BOOL)_itemPathWithDCCPTMatches:(id)dccptmatches dccpt:(int)dccpt;	// 0x3441a28d
- (BOOL)_parseNextValueWithDataclass:(int)dataclass context:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict6 parseRules:(id)rules account:(id)account;	// 0x34419881
- (id)_replacementObjectWithCallbackDict:(id)callbackDict;	// 0x3441a1d9
- (void)_setCurrentlyParsingSubItem:(id)item;	// 0x34419591
- (BOOL)_setupFirstParseWithContext:(id)context root:(id)root parent:(id)parent;	// 0x344195d5
- (BOOL)_streamIfNecessaryFromContext:(id)context;	// 0x34419755
- (int)_streamYourLittleHeartOutWithContext:(id)context;	// 0x34418925
- (id)_streamingInvocationForStreamingCallbackDict:(id)streamingCallbackDict dccpt:(int)dccpt;	// 0x3441a3f5
- (id)asParseRules;	// 0x3441a515
// converted property getter: - (id)currentStreamInvocation;	// 0x3441a571
- (void)dealloc;	// 0x344188b1
- (void)ignoreThisContent:(id)content;	// 0x3441a4cd
- (BOOL)nextParsedObjectWithContext:(id)context root:(id)root callbackDict:(id)dict streamCallbackDict:(id)dict4 dataclass:(int)dataclass outParsedObject:(id *)object outCPTNumber:(int *)number account:(id)account;	// 0x34418e29
// converted property getter: - (id)parent;	// 0x3441a115
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x34419cf9
// converted property getter: - (int)parsingState;	// 0x3441a561
// converted property setter: - (void)setCurrentStreamInvocation:(id)invocation;	// 0x3441a581
@end

