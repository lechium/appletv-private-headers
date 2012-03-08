/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSRequestDelegate.h"

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate> {
@private
	NSMutableDictionary *_rentals;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x309df21d
- (id)init;	// 0x309df289
- (id)_init;	// 0x309df2d5
- (void)_loadRentals;	// 0x309e0441
- (void)_saveRentals;	// 0x309e0555
- (void)addRentalWithItemID:(unsigned long long)itemID databaseID:(id)anId;	// 0x309df365
- (void)dealloc;	// 0x309df319
- (void)removeAllRentalsForDatabaseID:(id)databaseID;	// 0x309dfa1d
- (void)removeRentalWithItemID:(unsigned long long)itemID;	// 0x309df575
- (void)request:(id)request didFailWithError:(id)error;	// 0x309dfcf1
- (void)requestDidFinish:(id)request;	// 0x309dfd21
@end

