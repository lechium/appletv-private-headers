/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>


@interface MPAVDestinationBrowser : NSObject {
	BOOL _scansForDestinationsWhenEnteringForeground;	// 4 = 0x4
	BOOL _isScanning;	// 5 = 0x5
}
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;	// G=0x2e2e4f3d; S=0x2e2e4f4d; 
- (id)init;	// 0x2e2e4c85
- (void)_beginScanningForDestinationsNotification:(id)destinationsNotification;	// 0x2e2e4fc9
- (void)_endScanningForDestinationsNotification:(id)destinationsNotification;	// 0x2e2e5059
- (void)beginScanningForDestinations;	// 0x2e2e4e5d
- (void)dealloc;	// 0x2e2e4d85
- (void)endScanningForDestinations;	// 0x2e2e4ecd
// declared property getter: - (BOOL)scansForDestinationsWhenEnteringForeground;	// 0x2e2e4f3d
// declared property setter: - (void)setScansForDestinationsWhenEnteringForeground:(BOOL)destinationsWhenEnteringForeground;	// 0x2e2e4f4d
@end
