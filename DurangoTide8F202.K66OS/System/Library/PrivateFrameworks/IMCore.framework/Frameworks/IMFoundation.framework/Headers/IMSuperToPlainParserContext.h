/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFromSuperParserContext.h"
#import "IMFoundation-Structs.h"

@class NSString, NSMutableString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {
	NSMutableString *_plainString;	// 16 = 0x10
	BOOL _extractLinks;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *plainString;	// G=0x3120cfb1; 
- (id)initWithAttributedString:(id)attributedString;	// 0x3120cff9
- (id)initWithAttributedString:(id)attributedString extractLinks:(BOOL)links;	// 0x3120d059
- (void)dealloc;	// 0x3120d011
- (id)name;	// 0x3120cef1
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range characters:(id)characters;	// 0x3120cefd
// declared property getter: - (id)plainString;	// 0x3120cfb1
- (id)resultsForLogging;	// 0x3120cfd1
@end

