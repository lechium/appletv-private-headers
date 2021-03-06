/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {
	NSData *_inContentAsData;	// 4 = 0x4
}
@property(readonly, assign) NSData *inContentAsData;	// G=0x3692eb8d; @synthesize=_inContentAsData
@property(readonly, assign) NSString *name;	// G=0x3693c4e5; 
@property(readonly, assign) NSArray *resultsForLogging;	// G=0x3693c4f1; 
- (id)initWithContent:(id)content;	// 0x3692e829
- (id)initWithContentAsData:(id)contentAsData;	// 0x3692e85d
- (void)dealloc;	// 0x3692f285
- (id)inContent;	// 0x3693c48d
// declared property getter: - (id)inContentAsData;	// 0x3692eb8d
// declared property getter: - (id)name;	// 0x3693c4e5
- (void)reset;	// 0x3692eb89
// declared property getter: - (id)resultsForLogging;	// 0x3693c4f1
@end

