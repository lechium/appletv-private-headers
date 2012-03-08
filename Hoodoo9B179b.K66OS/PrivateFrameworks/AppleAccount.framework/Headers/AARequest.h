/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURLRequest;

@interface AARequest : NSObject {
	NSString *_urlString;	// 4 = 0x4
	BOOL _flushCache;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL flushCache;	// G=0x342e784d; S=0x342e785d; @synthesize=_flushCache
@property(readonly, assign) NSURLRequest *urlRequest;	// G=0x342e7429; 
@property(readonly, retain) NSString *urlString;	// G=0x342e7425; converted property
+ (id)protocolVersion;	// 0x342e73c5
+ (Class)responseClass;	// 0x342e73a9
- (id)initWithURLString:(id)urlstring;	// 0x342e73d1
- (id)bodyDictionary;	// 0x342e7571
- (void)dealloc;	// 0x342e7801
// declared property getter: - (BOOL)flushCache;	// 0x342e784d
- (void)performRequestWithHandler:(id)handler;	// 0x342e769d
// declared property setter: - (void)setFlushCache:(BOOL)cache;	// 0x342e785d
- (id)urlCredential;	// 0x342e756d
// declared property getter: - (id)urlRequest;	// 0x342e7429
// converted property getter: - (id)urlString;	// 0x342e7425
@end

