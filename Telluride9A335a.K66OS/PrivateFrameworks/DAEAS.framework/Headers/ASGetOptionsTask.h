/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray;

@interface ASGetOptionsTask : ASTask {
	NSArray *_versionArray;	// 104 = 0x68
	NSArray *_commandArray;	// 108 = 0x6c
}
@property(retain) NSArray *commandArray;	// G=0x321ca565; S=0x321ca575; converted property
@property(retain) NSArray *versionArray;	// G=0x321ca511; S=0x321ca521; converted property
+ (void)__setUsePort:(BOOL)port;	// 0x321c9c7d
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x321c9c9d
- (id)_url;	// 0x321c9ded
// converted property getter: - (id)commandArray;	// 0x321ca565
- (int)commandCode;	// 0x321c9ca1
- (int)connectionActionForResponse:(id)response;	// 0x321c9cad
- (void)dealloc;	// 0x321ca4b1
- (BOOL)expectsWBXML;	// 0x321c9ca9
- (void)finishWithError:(id)error;	// 0x321c9f81
- (id)httpMethod;	// 0x321c9c8d
- (BOOL)processContext:(id)context;	// 0x321c9d2d
- (id)requestBody;	// 0x321c9c99
- (BOOL)requiresEASVersionInformaton;	// 0x321ca5b9
// converted property setter: - (void)setCommandArray:(id)array;	// 0x321ca575
// converted property setter: - (void)setVersionArray:(id)array;	// 0x321ca521
// converted property getter: - (id)versionArray;	// 0x321ca511
@end

