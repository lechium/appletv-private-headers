/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, SBJsonStreamParserState, SBJsonTokeniser;
@protocol SBJsonStreamParserDelegate;

@interface SBJsonStreamParser : XXUnknownSuperclass {
	BOOL supportMultipleDocuments;	// 4 = 0x4
	id<SBJsonStreamParserDelegate> delegate;	// 8 = 0x8
	SBJsonTokeniser *tokeniser;	// 12 = 0xc
	NSMutableArray *stateStack;	// 16 = 0x10
	SBJsonStreamParserState *state;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	NSString *error;	// 28 = 0x1c
}
@property(assign) id<SBJsonStreamParserDelegate> delegate;	// G=0x4adb4d; S=0x4adb61; @synthesize
@property(copy) NSString *error;	// G=0x4adb29; S=0x4adb3d; @synthesize
@property(assign) unsigned maxDepth;	// G=0x4adb79; S=0x4adb8d; @synthesize
@property(assign, nonatomic) SBJsonStreamParserState *state;	// G=0x4adba5; S=0x4adbb5; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x4adbc5; @synthesize
@property(assign) BOOL supportMultipleDocuments;	// G=0x4adaf9; S=0x4adb11; @synthesize
- (id)init;	// 0x4ad311
- (void)dealloc;	// 0x4ad3f1
// declared property getter: - (id)delegate;	// 0x4adb4d
// declared property getter: - (id)error;	// 0x4adb29
- (void)handleArrayStart;	// 0x4ad659
- (void)handleObjectStart;	// 0x4ad599
// declared property getter: - (unsigned)maxDepth;	// 0x4adb79
- (void)maxDepthError;	// 0x4ad515
- (int)parse:(id)parse;	// 0x4ad719
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4adb61
// declared property setter: - (void)setError:(id)error;	// 0x4adb3d
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x4adb8d
// declared property setter: - (void)setState:(id)state;	// 0x4adbb5
// declared property setter: - (void)setSupportMultipleDocuments:(BOOL)documents;	// 0x4adb11
// declared property getter: - (id)state;	// 0x4adba5
// declared property getter: - (id)stateStack;	// 0x4adbc5
// declared property getter: - (BOOL)supportMultipleDocuments;	// 0x4adaf9
- (id)tokenName:(int)name;	// 0x4ad47d
@end

