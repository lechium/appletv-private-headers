/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetResourceLoadingRequestInternal, NSURLRequest;

@interface AVAssetResourceLoadingRequest : NSObject {
	AVAssetResourceLoadingRequestInternal *_loadingRequest;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL finished;	// G=0x3035b261; 
@property(readonly, assign, nonatomic) NSURLRequest *request;	// G=0x3035b241; 
- (id)initWithResourceLoader:(id)resourceLoader requestDictionary:(id)dictionary;	// 0x3035af6d
- (void)_finishLoadingURLRequestWithDictionary:(id)dictionary context:(id)context;	// 0x3035b489
- (void)dealloc;	// 0x3035b0fd
- (id)description;	// 0x3035b1d9
- (void)finalize;	// 0x3035b195
- (void)finishLoadingWithError:(id)error;	// 0x3035b851
- (void)finishLoadingWithResponse:(id)response data:(id)data redirect:(id)redirect;	// 0x3035b5ed
// declared property getter: - (BOOL)finished;	// 0x3035b261
// declared property getter: - (id)request;	// 0x3035b241
- (id)serializableRepresentation;	// 0x3035b285
- (id)streamingContentKeyRequestDataForApp:(id)app contentIdentifier:(id)identifier options:(id)options error:(id *)error;	// 0x3035ba25
@end
