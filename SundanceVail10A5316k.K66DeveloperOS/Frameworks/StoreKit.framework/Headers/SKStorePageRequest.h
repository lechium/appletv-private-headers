/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSDictionary;

@interface SKStorePageRequest : NSObject {
@private
	int _pageStyle;	// 4 = 0x4
	NSDictionary *_productParameters;	// 8 = 0x8
	NSURL *_productURL;	// 12 = 0xc
}
@property(assign, nonatomic) int productPageStyle;	// G=0x34a07a55; S=0x34a07a65; @synthesize=_pageStyle
@property(copy, nonatomic) NSDictionary *productParameters;	// G=0x34a07a75; S=0x34a07a89; @synthesize=_productParameters
@property(copy, nonatomic) NSURL *productURL;	// G=0x34a07a99; S=0x34a07aad; @synthesize=_productURL
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34a077c5
- (id)copyXPCEncoding;	// 0x34a0797d
- (void)dealloc;	// 0x34a07761
// declared property getter: - (int)productPageStyle;	// 0x34a07a55
// declared property getter: - (id)productParameters;	// 0x34a07a75
// declared property getter: - (id)productURL;	// 0x34a07a99
// declared property setter: - (void)setProductPageStyle:(int)style;	// 0x34a07a65
// declared property setter: - (void)setProductParameters:(id)parameters;	// 0x34a07a89
// declared property setter: - (void)setProductURL:(id)url;	// 0x34a07aad
@end

