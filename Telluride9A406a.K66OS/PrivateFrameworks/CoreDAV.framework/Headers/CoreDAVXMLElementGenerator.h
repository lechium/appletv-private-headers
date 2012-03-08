/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSDictionary, NSMutableData, CoreDAVItem, NSURL;

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {
	int _parsingState;	// 4 = 0x4
	SEL _parentElementSetter;	// 8 = 0x8
	CoreDAVItem *_element;	// 12 = 0xc
	CoreDAVItem *_parentElement;	// 16 = 0x10
	CoreDAVXMLElementGenerator *_parentGenerator;	// 20 = 0x14
	NSMutableData *_characters;	// 24 = 0x18
	NSMutableData *_cDATA;	// 28 = 0x1c
	CoreDAVXMLElementGenerator *_currentlyParsingSubItem;	// 32 = 0x20
	NSDictionary *_cachedElementParseRules;	// 36 = 0x24
	BOOL _checkedElementValidityIfRootElement;	// 40 = 0x28
	BOOL _isUnrecognized;	// 41 = 0x29
	NSURL *_baseURL;	// 44 = 0x2c
}
@property(retain) NSURL *baseURL;	// G=0x31c64b11; S=0x31c64b25; @synthesize=_baseURL
@property(retain) NSMutableData *cDATA;	// G=0x31c649f1; S=0x31c64a05; @synthesize=_cDATA
@property(retain) NSDictionary *cachedElementParseRules;	// G=0x31c64ab9; S=0x31c64acd; @synthesize=_cachedElementParseRules
@property(retain) NSMutableData *characters;	// G=0x31c649b9; S=0x31c649cd; @synthesize=_characters
@property(assign) BOOL checkedElementValidityIfRootElement;	// G=0x31c64af1; S=0x31c64b01; @synthesize=_checkedElementValidityIfRootElement
@property(retain) CoreDAVXMLElementGenerator *currentlyParsingSubItem;	// G=0x31c64a29; S=0x31c64a3d; @synthesize=_currentlyParsingSubItem
@property(retain) CoreDAVItem *element;	// G=0x31c64a61; S=0x31c64a75; @synthesize=_element
@property(assign) BOOL isUnrecognized;	// G=0x31c64959; S=0x31c64969; @synthesize=_isUnrecognized
@property(assign) SEL parentElementSetter;	// G=0x31c64999; S=0x31c649a9; @synthesize=_parentElementSetter
@property(assign) CoreDAVXMLElementGenerator *parentGenerator;	// G=0x31c64a99; S=0x31c64aa9; @synthesize=_parentGenerator
@property(assign) int parsingState;	// G=0x31c64979; S=0x31c64989; @synthesize=_parsingState
- (id)initWithParser:(id)parser baseURL:(id)url rootElementNameSpace:(id)space elementName:(id)name parseClass:(Class)aClass;	// 0x31c63ae5
- (id)initWithParser:(id)parser parentGenerator:(id)generator parentElementSetter:(SEL)setter element:(id)element;	// 0x31c63b6d
// declared property getter: - (id)baseURL;	// 0x31c64b11
// declared property getter: - (id)cDATA;	// 0x31c649f1
// declared property getter: - (id)cachedElementParseRules;	// 0x31c64ab9
// declared property getter: - (id)characters;	// 0x31c649b9
// declared property getter: - (BOOL)checkedElementValidityIfRootElement;	// 0x31c64af1
// declared property getter: - (id)currentlyParsingSubItem;	// 0x31c64a29
- (void)dealloc;	// 0x31c63c55
- (id)description;	// 0x31c63d05
// declared property getter: - (id)element;	// 0x31c64a61
- (BOOL)isExpectedNameSpace:(id)space andElementName:(id)name;	// 0x31c63ec5
// declared property getter: - (BOOL)isUnrecognized;	// 0x31c64959
- (void)noteChildCascadingFailure;	// 0x31c648b5
- (void)notifyElement:(id)element ofAttributesFound:(id)attributesFound;	// 0x31c63d51
// declared property getter: - (SEL)parentElementSetter;	// 0x31c64999
// declared property getter: - (id)parentGenerator;	// 0x31c64a99
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x31c64565
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x31c63f8d
- (void)parser:(id)parser foundCDATA:(id)cdata;	// 0x31c647e5
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x31c64731
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x31c64881
- (void)parser:(id)parser validationErrorOccurred:(id)occurred;	// 0x31c64891
- (void)parserDidEndDocument:(id)parser;	// 0x31c648a1
// declared property getter: - (int)parsingState;	// 0x31c64979
- (void)resumeParsingWithParser:(id)parser;	// 0x31c648f5
// declared property setter: - (void)setBaseURL:(id)url;	// 0x31c64b25
// declared property setter: - (void)setCDATA:(id)cdata;	// 0x31c64a05
// declared property setter: - (void)setCachedElementParseRules:(id)rules;	// 0x31c64acd
// declared property setter: - (void)setCharacters:(id)characters;	// 0x31c649cd
// declared property setter: - (void)setCheckedElementValidityIfRootElement:(BOOL)element;	// 0x31c64b01
// declared property setter: - (void)setCurrentlyParsingSubItem:(id)item;	// 0x31c64a3d
// declared property setter: - (void)setElement:(id)element;	// 0x31c64a75
// declared property setter: - (void)setIsUnrecognized:(BOOL)unrecognized;	// 0x31c64969
// declared property setter: - (void)setParentElementSetter:(SEL)setter;	// 0x31c649a9
// declared property setter: - (void)setParentGenerator:(id)generator;	// 0x31c64aa9
// declared property setter: - (void)setParsingState:(int)state;	// 0x31c64989
- (BOOL)tracksRootElement;	// 0x31c63d31
@end

