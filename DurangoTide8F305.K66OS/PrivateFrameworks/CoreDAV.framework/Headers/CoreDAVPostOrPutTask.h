/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSString, NSData;

@interface CoreDAVPostOrPutTask : CoreDAVTask {
	BOOL _forceToServer;	// 104 = 0x68
	NSString *_previousETag;	// 108 = 0x6c
	NSString *_requestDataContentType;	// 112 = 0x70
	NSData *_requestDataPayload;	// 116 = 0x74
	BOOL _sendOrder;	// 120 = 0x78
	int _order;	// 124 = 0x7c
}
@property(assign) BOOL forceToServer;	// G=0x33870471; S=0x33870481; @synthesize=_forceToServer
@property(assign, nonatomic) int order;	// G=0x33870461; S=0x33870445; @synthesize=_order
@property(retain) NSString *previousETag;	// G=0x33870a79; S=0x33870aed; @synthesize=_previousETag
@property(retain) NSString *requestDataContentType;	// G=0x33870a91; S=0x33870b19; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x33870aa9; S=0x33870b45; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x338709d9
- (id)initWithURL:(id)url;	// 0x338706d9
- (id)additionalHeaderValues;	// 0x338705a5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x33870549
- (void)dealloc;	// 0x33870979
- (id)description;	// 0x33870839
// declared property getter: - (BOOL)forceToServer;	// 0x33870471
// declared property getter: - (int)order;	// 0x33870461
// declared property getter: - (id)previousETag;	// 0x33870a79
- (id)requestBody;	// 0x33870575
// declared property getter: - (id)requestDataContentType;	// 0x33870a91
// declared property getter: - (id)requestDataPayload;	// 0x33870aa9
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x33870481
// declared property setter: - (void)setOrder:(int)order;	// 0x33870445
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x33870aed
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x33870b19
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x33870b45
@end
