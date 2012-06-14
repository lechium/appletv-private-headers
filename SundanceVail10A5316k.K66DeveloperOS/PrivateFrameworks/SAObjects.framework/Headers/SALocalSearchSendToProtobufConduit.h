/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSData, NSArray, NSURL;

@interface SALocalSearchSendToProtobufConduit : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *attributes;	// G=0x32f6f909; S=0x32f6f985; 
@property(copy, nonatomic) NSURL *endpoint;	// G=0x32f6f9ed; S=0x32f6fa69; 
@property(copy, nonatomic) NSData *rawRequest;	// G=0x32f6fac9; S=0x32f6fae5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f6f82d; S=0x32f6f8a9; 
@property(assign, nonatomic) int timeoutInSeconds;	// G=0x32f6fb35; S=0x32f6fba5; 
+ (id)sendToProtobufConduit;	// 0x32f6f79d
+ (id)sendToProtobufConduitWithDictionary:(id)dictionary context:(id)context;	// 0x32f6f7e1
// declared property getter: - (id)attributes;	// 0x32f6f909
- (id)encodedClassName;	// 0x32f6f791
// declared property getter: - (id)endpoint;	// 0x32f6f9ed
- (id)groupIdentifier;	// 0x32f6f781
// declared property getter: - (id)rawRequest;	// 0x32f6fac9
- (BOOL)requiresResponse;	// 0x32f6fbe9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x32f6f985
// declared property setter: - (void)setEndpoint:(id)endpoint;	// 0x32f6fa69
// declared property setter: - (void)setRawRequest:(id)request;	// 0x32f6fae5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f6f8a9
// declared property setter: - (void)setTimeoutInSeconds:(int)seconds;	// 0x32f6fba5
// declared property getter: - (id)targetAppId;	// 0x32f6f82d
// declared property getter: - (int)timeoutInSeconds;	// 0x32f6fb35
@end

