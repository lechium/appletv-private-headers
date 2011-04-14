/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class FujiConfig;

__attribute__((visibility("hidden")))
@interface FujiConfigParser : NSObject {
@private
	XML_ParserStructRef _parser;	// 4 = 0x4
	FujiConfig *_config;	// 8 = 0x8
	int _parserDepth;	// 12 = 0xc
	int _tagListDepth;	// 16 = 0x10
	char **_currentTag;	// 20 = 0x14
}
- (id)init;	// 0x3375b27c
- (void)charData:(const char *)data withLength:(int)length;	// 0x3375b820
- (void)dealloc;	// 0x3375b5f8
- (void)dumpTags;	// 0x3375ac80
- (void)endElement:(const char *)element;	// 0x3375b394
- (id)getConfig;	// 0x3375b12c
- (id)getCountry;	// 0x3375aea0
- (id)getGenericFeedURL;	// 0x3375af54
- (id)getTestNCCPDataURL;	// 0x3375adec
- (id)getTestNCCPIdentityURL;	// 0x3375ad38
- (id)getTestNCCPLoggingURL;	// 0x3375ac84
- (id)getUIBootURL;	// 0x3375b008
- (BOOL)isDeviceSupported;	// 0x3375b1d4
- (BOOL)isLoggedIn;	// 0x3375b19c
- (bool)parse:(id)parse;	// 0x3375b728
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x3375b424
- (BOOL)supportDD5_1;	// 0x3375b0bc
- (BOOL)useTestEnvironment;	// 0x3375b0f4
@end

