/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>

@class NSDictionary, NSData, NSString, ISDataProvider, NSURL;

@interface SBKRequest : NSObject {
	BOOL _shouldAuthenticate;	// 4 = 0x4
	NSURL *_requestURL;	// 8 = 0x8
	NSString *_action;	// 12 = 0xc
	NSData *_bodyData;	// 16 = 0x10
	int _bodyContentType;	// 20 = 0x14
	NSDictionary *_headers;	// 24 = 0x18
	NSDictionary *_arguments;	// 28 = 0x1c
	int _method;	// 32 = 0x20
	ISDataProvider *_responseDataProvider;	// 36 = 0x24
	BOOL _concurrent;	// 40 = 0x28
	BOOL _includeDeviceGUID;	// 41 = 0x29
}
@property(retain, nonatomic) NSData *bodyData;	// G=0x327c4069; S=0x327c386d; @synthesize=_bodyData
@property(readonly, assign, nonatomic, getter=isConcurrent) BOOL concurrent;	// G=0x327c3ff9; @synthesize=_concurrent
@property(assign, nonatomic) BOOL includeDeviceGUID;	// G=0x327c4049; S=0x327c4059; @synthesize=_includeDeviceGUID
@property(assign, nonatomic) int method;	// G=0x327c4009; S=0x327c4019; @synthesize=_method
@property(retain, nonatomic) ISDataProvider *responseDataProvider;	// G=0x327c4079; S=0x327c4089; @synthesize=_responseDataProvider
@property(assign, nonatomic) BOOL shouldAuthenticate;	// G=0x327c4029; S=0x327c4039; @synthesize=_shouldAuthenticate
@property(readonly, assign, nonatomic) double timeoutInterval;	// G=0x327c36b9; 
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(int)bodyContentEncodingType;	// 0x327c3ef5
+ (id)_contentTypeStringForBodyContentType:(int)bodyContentType;	// 0x327c3f19
+ (id)_methodStringForMethod:(int)method;	// 0x327c3ec5
+ (int)bodyContentEncodingType;	// 0x327c3869
+ (int)bodyContentType;	// 0x327c3865
+ (id)requestWithRequestURL:(id)requestURL;	// 0x327c33f9
- (id)initWithRequestURL:(id)requestURL;	// 0x327c34ad
- (void).cxx_destruct;	// 0x327c40b1
- (id)_defaultHeaderFields;	// 0x327c3d71
- (BOOL)acceptsGzipEncoding;	// 0x327c3d6d
// declared property getter: - (id)bodyData;	// 0x327c4069
- (id)canonicalResponseForResponse:(id)response;	// 0x327c3d59
- (id)copyRequestProperties;	// 0x327c3aa1
- (id)description;	// 0x327c35a5
- (id)descriptionWithoutHeaderFields;	// 0x327c36d1
// declared property getter: - (BOOL)includeDeviceGUID;	// 0x327c4049
// declared property getter: - (BOOL)isConcurrent;	// 0x327c3ff9
// declared property getter: - (int)method;	// 0x327c4009
- (id)newURLOperation;	// 0x327c3f59
// declared property getter: - (id)responseDataProvider;	// 0x327c4079
// declared property setter: - (void)setBodyData:(id)data;	// 0x327c386d
- (void)setBodyDataWithPropertyList:(id)propertyList;	// 0x327c38dd
// declared property setter: - (void)setIncludeDeviceGUID:(BOOL)guid;	// 0x327c4059
// declared property setter: - (void)setMethod:(int)method;	// 0x327c4019
// declared property setter: - (void)setResponseDataProvider:(id)provider;	// 0x327c4089
// declared property setter: - (void)setShouldAuthenticate:(BOOL)authenticate;	// 0x327c4039
- (void)setValue:(id)value forArgument:(id)argument;	// 0x327c37d1
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x327c3789
// declared property getter: - (BOOL)shouldAuthenticate;	// 0x327c4029
// declared property getter: - (double)timeoutInterval;	// 0x327c36b9
@end

