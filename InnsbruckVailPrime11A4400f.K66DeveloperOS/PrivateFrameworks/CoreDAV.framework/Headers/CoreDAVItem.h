/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "NSObject.h"
#import "CoreDAVItem.h"
#import </libobjc.A.h>

@class NSMutableSet, NSMutableArray, NSData, NSString;

@protocol CoreDAVItem <NSObject>
+ (id)copyParseRules;
+ (id)parseRuleCache;
- (id)copyParseRules;
- (void)parserFoundAttributes:(id)attributes;
- (void)parserFoundPayload:(id)payload;
- (void)parserFoundUnrecognizedElement:(id)element;
- (void)parserSuggestsBaseURL:(id)url;
- (BOOL)validate;
- (void)write:(id)write;
@end

@interface CoreDAVItem : NSObject <CoreDAVItem> {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSMutableSet *_attributes;	// 12 = 0xc
	NSMutableArray *_extraChildItems;	// 16 = 0x10
	NSData *_payload;	// 20 = 0x14
	BOOL _useCDATA;	// 24 = 0x18
}
@property(retain) NSMutableSet *attributes;	// G=0x3049abc5; S=0x3049abd9; @synthesize=_attributes
@property(retain) NSMutableArray *extraChildItems;	// G=0x3049abe9; S=0x3049abfd; @synthesize=_extraChildItems
@property(retain) NSString *name;	// G=0x3049ab7d; S=0x3049ab91; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x3049aba1; S=0x3049abb5; @synthesize=_nameSpace
@property(retain) NSData *payload;	// G=0x3049ac0d; S=0x3049ac21; @synthesize=_payload
@property(retain) id payloadAsString;	// G=0x3049aa39; S=0x3049aa99; converted property
@property(assign) BOOL useCDATA;	// G=0x3049ac31; S=0x3049ac49; @synthesize=_useCDATA
+ (id)copyParseRules;	// 0x3049a741
+ (id)parseRuleCache;	// 0x3049a76d
- (id)init;	// 0x3049a3dd
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3049a3e1
// declared property getter: - (id)attributes;	// 0x3049abc5
- (id)childrenToWrite;	// 0x3049a859
- (id)copyParseRules;	// 0x3049a745
- (void)dealloc;	// 0x3049a4d9
- (id)description;	// 0x3049a579
// declared property getter: - (id)extraChildItems;	// 0x3049abe9
- (id)generateXMLString;	// 0x3049aad1
- (id)hashString;	// 0x3049a63d
// declared property getter: - (id)name;	// 0x3049ab7d
// declared property getter: - (id)nameSpace;	// 0x3049aba1
- (void)parserFoundAttributes:(id)attributes;	// 0x3049a815
- (void)parserFoundPayload:(id)payload;	// 0x3049a805
- (void)parserFoundUnrecognizedElement:(id)element;	// 0x3049a7d9
- (void)parserSuggestsBaseURL:(id)url;	// 0x3049aacd
// declared property getter: - (id)payload;	// 0x3049ac0d
// converted property getter: - (id)payloadAsString;	// 0x3049aa39
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3049abd9
// declared property setter: - (void)setExtraChildItems:(id)items;	// 0x3049abfd
// declared property setter: - (void)setName:(id)name;	// 0x3049ab91
// declared property setter: - (void)setNameSpace:(id)space;	// 0x3049abb5
// declared property setter: - (void)setPayload:(id)payload;	// 0x3049ac21
// converted property setter: - (void)setPayloadAsString:(id)string;	// 0x3049aa99
// declared property setter: - (void)setUseCDATA:(BOOL)cdata;	// 0x3049ac49
// declared property getter: - (BOOL)useCDATA;	// 0x3049ac31
- (BOOL)validate;	// 0x3049aa35
- (void)write:(id)write;	// 0x3049a869
@end

