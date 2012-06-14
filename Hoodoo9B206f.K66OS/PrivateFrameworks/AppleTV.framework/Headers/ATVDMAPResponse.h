/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString;

@interface ATVDMAPResponse : NSObject {
@private
	NSData *_responseBody;	// 4 = 0x4
	unsigned long _httpStatusCode;	// 8 = 0x8
	NSString *_contentType;	// 12 = 0xc
}
@property(readonly, retain) NSString *contentType;	// G=0x367ec72d; converted property
@property(readonly, assign) unsigned long httpStatusCode;	// G=0x367ec71d; converted property
@property(readonly, retain) NSData *responseBody;	// G=0x367ec70d; converted property
- (id)init;	// 0x367ec585
- (id)initWithResponseBody:(id)responseBody httpStatusCode:(unsigned long)code contentType:(id)type;	// 0x367ec60d
// converted property getter: - (id)contentType;	// 0x367ec72d
- (void)dealloc;	// 0x367ec6ad
// converted property getter: - (unsigned long)httpStatusCode;	// 0x367ec71d
// converted property getter: - (id)responseBody;	// 0x367ec70d
@end
