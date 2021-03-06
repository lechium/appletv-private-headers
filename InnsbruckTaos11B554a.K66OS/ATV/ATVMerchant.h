/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVReadWriteFeedResource.h"
#import "BRMerchant.h"

@class SKPaymentQueueClient, SKPaymentQueue, ATVDictionaryFeedResource, NSLock, ATVPreferenceFeedResource;
@protocol ATVImageLoader;

__attribute__((visibility("hidden")))
@interface ATVMerchant : BRMerchant <ATVReadWriteFeedResource> {
	ATVPreferenceFeedResource *_preferenceResource;	// 8 = 0x8
	NSLock *_queueLock;	// 12 = 0xc
	ATVDictionaryFeedResource *_sessionResource;	// 16 = 0x10
	SKPaymentQueueClient *_paymentQueueClient;	// 20 = 0x14
	SKPaymentQueue *_paymentQueue;	// 24 = 0x18
	id<ATVImageLoader> _imageLoader;	// 28 = 0x1c
}
@property(readonly, assign) id<ATVImageLoader> imageLoader;	// G=0x1cedf5; @synthesize=_imageLoader
@property(readonly, assign, nonatomic) SKPaymentQueue *paymentQueue;	// G=0x1ceac5; @synthesize=_paymentQueue
@property(readonly, assign, nonatomic) SKPaymentQueueClient *paymentQueueClient;	// G=0x1ce89d; @synthesize=_paymentQueueClient
@property(readonly, assign) ATVDictionaryFeedResource *sessionResource;	// G=0x1cede1; @synthesize=_sessionResource
- (id)initWithIdentifier:(id)identifier;	// 0x1ce3e1
- (BOOL)assignToObject:(id)object;	// 0x1ce669
- (void)clearFeedResources;	// 0x1cedc1
- (id)controllerForScreensaverPhotosSelection;	// 0x1ce82d
- (void)dealloc;	// 0x1ce5b9
- (id)evaluatePlist:(id)plist;	// 0x1ce809
- (id)feedResourceNamed:(id)named;	// 0x1ceb89
// declared property getter: - (id)imageLoader;	// 0x1cedf5
- (id)localizedStringForKey:(id)key;	// 0x1ce7cd
// declared property getter: - (id)paymentQueue;	// 0x1ceac5
// declared property getter: - (id)paymentQueueClient;	// 0x1ce89d
- (void)removePaymentQueue;	// 0x1cee09
- (id)rootController;	// 0x1ce829
// declared property getter: - (id)sessionResource;	// 0x1cede1
- (void)setFeedResource:(id)resource named:(id)named;	// 0x1ceda1
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x1ce831
@end

