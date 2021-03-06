/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataItemAcquisitionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataItemAcquisitionMonitor, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVRadioHistoryItem : XXUnknownSuperclass <ATVDataItemAcquisitionDelegate> {
	NSDictionary *_trackData;	// 4 = 0x4
	ATVDataItemAcquisitionMonitor *_acquisitionMonitor;	// 8 = 0x8
}
@property(retain, nonatomic) ATVDataItemAcquisitionMonitor *acquisitionMonitor;	// G=0x65ea1; S=0x65eb1; @synthesize=_acquisitionMonitor
@property(copy, nonatomic) NSDictionary *trackData;	// G=0x65e8d; S=0x655cd; @synthesize=_trackData
+ (id)_processedTrackDataWithRawDictionary:(id)rawDictionary;	// 0x64ba9
+ (id)artworkURLFromVariants:(id)variants;	// 0x64955
- (id)initWithDataClient:(id)dataClient trackData:(id)data;	// 0x654bd
- (void).cxx_destruct;	// 0x65ed9
// declared property getter: - (id)acquisitionMonitor;	// 0x65ea1
- (void)acquisitionMonitor:(id)monitor didAcquireItemWithIdentifier:(id)identifier;	// 0x65889
- (id)concreteValueForProperty:(id)property;	// 0x65655
// declared property setter: - (void)setAcquisitionMonitor:(id)monitor;	// 0x65eb1
// declared property setter: - (void)setTrackData:(id)data;	// 0x655cd
// declared property getter: - (id)trackData;	// 0x65e8d
@end

