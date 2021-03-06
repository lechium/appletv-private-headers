/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPAVDestinationBrowser : NSObject {
	BOOL _scansForDestinationsWhenEnteringForeground;	// 4 = 0x4
	BOOL _isScanning;	// 5 = 0x5
	int _retainCount;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;	// G=0x36f36f4d; S=0x36f36f5d; 
- (id)init;	// 0x36f36d0d
- (void)_beginScanningForDestinationsNotification:(id)destinationsNotification;	// 0x36f36fc9
- (void)_endScanningForDestinationsNotification:(id)destinationsNotification;	// 0x36f37055
- (BOOL)_isDeallocating;	// 0x36f36ce1
- (BOOL)_tryRetain;	// 0x36f36c91
- (void)beginScanningForDestinations;	// 0x36f36ecd
- (void)dealloc;	// 0x36f36e01
- (void)endScanningForDestinations;	// 0x36f36f0d
- (oneway void)release;	// 0x36f36bdd
- (id)retain;	// 0x36f36ba5
- (unsigned)retainCount;	// 0x36f36c7d
// declared property getter: - (BOOL)scansForDestinationsWhenEnteringForeground;	// 0x36f36f4d
// declared property setter: - (void)setScansForDestinationsWhenEnteringForeground:(BOOL)destinationsWhenEnteringForeground;	// 0x36f36f5d
@end

