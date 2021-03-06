/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"

@class NSURLDownloadInternal;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
@private
	NSURLDownloadInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL deletesFileUponFailure;	// G=0x3031afb1; S=0x3031af8d; converted property
+ (id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x3031a8a5
+ (id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x3031a6dd
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x3031a969
+ (BOOL)_isEncodingMIMETypeResumable:(id)resumable;	// 0x3031b04d
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;	// 0x3031afd9
- (id)init;	// 0x3031a3bd
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x3031a431
- (id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;	// 0x3031abb1
- (id)_delegate;	// 0x3026d511
- (BOOL)_deletesFileAfterFailure;	// 0x3031af65
- (id)_directoryPath;	// 0x3031b065
- (BOOL)_downloadActive;	// 0x3026d4f1
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x3031a731
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x3031a619
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x3031a8f9
- (id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;	// 0x3031a9b1
- (id)_originatingURL;	// 0x3031b17d
- (id)_resumeInformation;	// 0x3031adb1
- (void)_setDelegate:(id)delegate;	// 0x3031b0b5
- (void)_setDeletesFileAfterFailure:(BOOL)failure;	// 0x3031af41
- (void)_setDirectoryPath:(id)path;	// 0x3031b111
- (void)_setOriginatingURL:(id)url;	// 0x3031b159
- (void)cancel;	// 0x3031ae39
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x3031a2a5
- (void)cleanupChallenges;	// 0x3031a15d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3031a245
- (void)dealloc;	// 0x3026da51
// converted property getter: - (BOOL)deletesFileUponFailure;	// 0x3031afb1
- (void)releaseDelegate;	// 0x3026da11
- (id)request;	// 0x3031ae75
- (id)resumeData;	// 0x3031adf5
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;	// 0x3031b6a5
- (void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;	// 0x3031b5b5
- (void)sendDidCreateDestination:(CFURLRef)send;	// 0x3026d65d
- (void)sendDidFail:(CFErrorRef)send;	// 0x3031b621
- (void)sendDidFinish;	// 0x3026d885
- (void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;	// 0x3031b3c5
- (void)sendDidReceiveData:(long)send;	// 0x3026d77d
- (void)sendDidReceiveResponse:(CFURLResponseRef)send;	// 0x3026d531
- (void)sendDidStart:(CFURLDownloadRef)send;	// 0x3031b1c1
- (unsigned char)sendDownloadShouldUseCredentialStorage;	// 0x3031b351
- (bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;	// 0x3031b539
- (void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;	// 0x3031b49d
- (CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;	// 0x3031b23d
// converted property setter: - (void)setDeletesFileUponFailure:(BOOL)failure;	// 0x3031af8d
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;	// 0x3031aee9
- (id)url;	// 0x3031afe9
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x3031a1cd
@end

