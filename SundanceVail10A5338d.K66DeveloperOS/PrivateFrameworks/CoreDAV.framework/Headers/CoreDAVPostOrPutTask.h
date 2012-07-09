/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
	BOOL _forceToServer;	// 140 = 0x8c
	NSString *_previousETag;	// 144 = 0x90
	NSString *_requestDataContentType;	// 148 = 0x94
	NSData *_requestDataPayload;	// 152 = 0x98
	BOOL _sendOrder;	// 156 = 0x9c
	int _absoluteOrder;	// 160 = 0xa0
	NSURL *_priorOrderedURL;	// 164 = 0xa4
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x34c0654d; S=0x34c06435; @synthesize=_absoluteOrder
@property(assign) BOOL forceToServer;	// G=0x34c064b1; S=0x34c064c9; @synthesize=_forceToServer
@property(retain) NSString *previousETag;	// G=0x34c064e1; S=0x34c064f5; @synthesize=_previousETag
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x34c0655d; S=0x34c06459; @synthesize=_priorOrderedURL
@property(retain) NSString *requestDataContentType;	// G=0x34c06505; S=0x34c06519; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x34c06529; S=0x34c0653d; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x34c05f69
- (id)initWithURL:(id)url;	// 0x34c05f45
// declared property getter: - (int)absoluteOrder;	// 0x34c0654d
- (id)additionalHeaderValues;	// 0x34c061fd
- (void)dealloc;	// 0x34c0600d
- (id)description;	// 0x34c06099
// declared property getter: - (BOOL)forceToServer;	// 0x34c064b1
// declared property getter: - (id)previousETag;	// 0x34c064e1
// declared property getter: - (id)priorOrderedURL;	// 0x34c0655d
- (id)requestBody;	// 0x34c063fd
// declared property getter: - (id)requestDataContentType;	// 0x34c06505
// declared property getter: - (id)requestDataPayload;	// 0x34c06529
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x34c06435
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x34c064c9
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x34c064f5
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x34c06459
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x34c06519
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x34c0653d
@end
