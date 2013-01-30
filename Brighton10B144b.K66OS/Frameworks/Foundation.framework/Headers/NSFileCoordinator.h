/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSMutableDictionary;

@interface NSFileCoordinator : NSObject {
	id _accessArbiter;	// 4 = 0x4
	id _fileReactor;	// 8 = 0x8
	id _purposeID;	// 12 = 0xc
	NSURL *_recentFilePresenterURL;	// 16 = 0x10
	id _accessClaimIDOrIDs;	// 20 = 0x14
	BOOL _isCancelled;	// 24 = 0x18
	NSMutableDictionary *_movedItems;	// 28 = 0x1c
}
@property(retain) id purposeIdentifier;	// G=0x319d51b1; S=0x319d516d; converted property
+ (void)__itemAtURL:(id)url didDisconnectWithPurposeID:(id)purposeID;	// 0x319d4b8d
+ (void)__itemAtURL:(id)url didGainVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x319d4d35
+ (void)__itemAtURL:(id)url didLoseVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x319d4e25
+ (void)__itemAtURL:(id)url didMoveToURL:(id)url2 purposeID:(id)anId;	// 0x319d4aa1
+ (void)__itemAtURL:(id)url didReconnectWithPurposeID:(id)purposeID;	// 0x319d4c61
+ (void)__itemAtURL:(id)url didResolveConflictVersionWithClientID:(id)clientID name:(id)name purposeID:(id)anId;	// 0x319d4f15
+ (void)_addFileProvider:(id)provider;	// 0x319d5005
+ (void)_addFileProvider:(id)provider completionHandler:(id)handler;	// 0x319d5025
+ (id)_canonicalURLForURL:(id)url;	// 0x319d0df1
+ (id)_currentFileCoordinator;	// 0x319d51e9
+ (id)_fileProviders;	// 0x319d50b1
+ (void)_removeFileProvider:(id)provider;	// 0x319d506d
+ (BOOL)_skipCoordinationWork;	// 0x319d1b41
+ (void)addFilePresenter:(id)presenter;	// 0x319d0b31
+ (id)filePresenters;	// 0x319d0bb9
+ (void)removeFilePresenter:(id)presenter;	// 0x319d0b75
- (id)init;	// 0x319d0bf9
- (id)initWithFilePresenter:(id)filePresenter;	// 0x319d0c0d
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x319d3815
- (void)__coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x319d3eed
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options purposeID:(id)anId byAccessor:(id)accessor;	// 0x319d3b8d
- (void)__coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 purposeID:(id)anId byAccessor:(id)accessor;	// 0x319d42ad
- (void)__prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 byAccessor:(id)accessor;	// 0x319d4655
- (void)_blockOnAccessClaim:(id)claim;	// 0x319d1e4d
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x319d22a9
- (void)_coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x319d2c71
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x319d2851
- (void)_coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x319d3241
- (void)_forgetAccessClaimForID:(id)anId;	// 0x319d1d91
- (void)_invokeAccessor:(id)accessor orDont:(BOOL)dont thenRelinquishAccessClaimForID:(id)anId;	// 0x319d208d
- (void)_invokeAccessor:(id)accessor thenCompletionHandler:(id)handler;	// 0x319d0df5
- (void)_itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x319d3721
- (void)_itemAtURL:(id)url willMoveToURL:(id)url2;	// 0x319d371d
- (void)_requestAccessClaim:(id)claim withProcedure:(id)procedure;	// 0x319d1bd9
- (void)_setFileProvider:(id)provider;	// 0x319d50f1
- (void)cancel;	// 0x319d19d9
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x319d0f25
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x319d11b5
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options error:(id *)error byAccessor:(id)accessor;	// 0x319d106d
- (void)coordinateWritingItemAtURL:(id)url options:(unsigned)options writingItemAtURL:(id)url3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x319d1329
- (void)dealloc;	// 0x319d0d3d
- (void)itemAtURL:(id)url didMoveToURL:(id)url2;	// 0x319d194d
- (void)itemAtURL:(id)url willMoveToURL:(id)url2;	// 0x319d18c1
- (void)prepareForReadingItemsAtURLs:(id)urls options:(unsigned)options writingItemsAtURLs:(id)urls3 options:(unsigned)options4 error:(id *)error byAccessor:(id)accessor;	// 0x319d149d
// converted property getter: - (id)purposeIdentifier;	// 0x319d51b1
// converted property setter: - (void)setPurposeIdentifier:(id)identifier;	// 0x319d516d
@end
