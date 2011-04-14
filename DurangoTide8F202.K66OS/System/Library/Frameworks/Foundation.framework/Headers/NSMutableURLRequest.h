/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLRequest.h"


@interface NSMutableURLRequest : NSURLRequest {
}
@property(assign) unsigned requestPriority;	// G=0x324c08c5; S=0x324c08e9; converted property
- (void)addValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x32439dbd
- (id)copyWithZone:(NSZone *)zone;	// 0x324bfac1
// converted property getter: - (unsigned)requestPriority;	// 0x324c08c5
- (void)setAllHTTPHeaderFields:(id)fields;	// 0x3244ffd1
- (void)setCachePolicy:(unsigned)policy;	// 0x3244073d
- (void)setContentDispositionEncodingFallbackArray:(id)array;	// 0x324407c5
- (void)setHTTPBody:(id)body;	// 0x324277c1
- (void)setHTTPBodyStream:(id)stream;	// 0x324c0931
- (void)setHTTPContentType:(id)type;	// 0x324bfa51
- (void)setHTTPExtraCookies:(id)cookies;	// 0x324c090d
- (void)setHTTPMethod:(id)method;	// 0x32427779
- (void)setHTTPReferrer:(id)referrer;	// 0x324c0859
- (void)setHTTPShouldHandleCookies:(BOOL)handleCookies;	// 0x32427751
- (void)setHTTPShouldUsePipelining:(BOOL)usePipelining;	// 0x324390e9
- (void)setHTTPUserAgent:(id)agent;	// 0x324bfa35
- (void)setMainDocumentURL:(id)url;	// 0x32440769
- (void)setNetworkServiceType:(unsigned)type;	// 0x324c0979
// converted property setter: - (void)setRequestPriority:(unsigned)priority;	// 0x324c08e9
- (void)setTimeoutInterval:(double)interval;	// 0x32449325
- (void)setURL:(id)url;	// 0x32440941
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3242779d
@end

