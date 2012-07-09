/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSFileCoordinator.h> // Unknown library

@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
	NSString *_localPeerID;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x36695bf9; @synthesize=_localPeerID
+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)ubiquitousExternalDataReferenceLocation;	// 0x36695be9
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x36695b29
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x36695b49
- (id)initWithFilePresenter:(id)filePresenter;	// 0x366955b5
- (void)coordinateReadingItemAtLocation:(id)location options:(unsigned)options retryOnError:(BOOL)error error:(id *)error4 byAccessor:(id)accessor;	// 0x3669566d
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options retryOnError:(BOOL)error error:(id *)error4 byAccessor:(id)accessor;	// 0x36695915
- (void)dealloc;	// 0x3669561d
// declared property getter: - (id)localPeerID;	// 0x36695bf9
- (BOOL)shouldRetryForError:(id)error;	// 0x36695a29
@end
