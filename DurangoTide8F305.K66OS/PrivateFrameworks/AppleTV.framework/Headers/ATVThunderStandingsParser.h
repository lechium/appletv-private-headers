/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVThunderXMLParser.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsParser : NSObject <ATVThunderXMLParser> {
@private
	NSMutableArray *_eastStandings;	// 4 = 0x4
	NSMutableArray *_westStandings;	// 8 = 0x8
	NSMutableArray *_currentConfStandings;	// 12 = 0xc
}
- (id)init;	// 0x307ab9d5
- (id)createStorePage;	// 0x307aba61
- (id)createStorePageForError:(int)error;	// 0x307ac3a1
- (void)dealloc;	// 0x307ab979
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x307ab68d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x307ab741
@end
