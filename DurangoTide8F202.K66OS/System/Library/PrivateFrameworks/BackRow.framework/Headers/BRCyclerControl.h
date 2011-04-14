/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSTimer, NSDictionary;
@protocol BRCyclerDataSource, BRCyclerDelegate, BRProvider;

@interface BRCyclerControl : BRControl {
@private
	id<BRProvider> _provider;	// 44 = 0x2c
	double _interval;	// 48 = 0x30
	double _startInterval;	// 56 = 0x38
	long _index;	// 64 = 0x40
	long _startIndex;	// 68 = 0x44
	BOOL _returnsToStart;	// 72 = 0x48
	NSTimer *_crossFadeTimer;	// 76 = 0x4c
	BRControl *_control;	// 80 = 0x50
	NSDictionary *_subcontrolMetadata;	// 84 = 0x54
	BOOL _initialDisplayOccurred;	// 88 = 0x58
	id<BRCyclerDataSource> _dataSource;	// 92 = 0x5c
	id<BRCyclerDelegate> _delegate;	// 96 = 0x60
	BOOL _startsOnActivate;	// 100 = 0x64
}
@property(assign, nonatomic) id<BRCyclerDataSource> dataSource;	// G=0x3296c919; S=0x3296c929; @synthesize=_dataSource
@property(assign, nonatomic) id<BRCyclerDelegate> delegate;	// G=0x3296c8f9; S=0x3296c909; @synthesize=_delegate
@property(assign) double interval;	// G=0x3296c895; S=0x3296cedd; converted property
@property(assign) BOOL returnsToStart;	// G=0x3296c885; S=0x3296c875; converted property
@property(assign) long startIndex;	// G=0x3296c865; S=0x3296c83d; converted property
@property(assign) double startInterval;	// G=0x3296c8b9; S=0x3296c8a5; converted property
@property(assign, nonatomic) BOOL startsOnActivate;	// G=0x3296c8d9; S=0x3296c8e9; @synthesize=_startsOnActivate
@property(readonly, retain) NSDictionary *subcontrolMetadata;	// G=0x3296c8c9; converted property
+ (id)cyclerWithProvider:(id)provider;	// 0x3296d241
- (id)init;	// 0x3296d201
- (id)initWithProvider:(id)provider;	// 0x3296d13d
- (void)_commonInit;	// 0x3296c939
- (void)_crossFade:(id)fade;	// 0x3296caa5
- (void)_providerUpdated:(id)updated;	// 0x3296cd75
- (void)_returnToStart;	// 0x3296c981
- (void)_startCrossFadeTimer;	// 0x3296c9f5
- (void)_stopCrossFadeTimer;	// 0x3296c9c9
- (id)accessibilityLabel;	// 0x3296d2dd
- (void)controlWasActivated;	// 0x3296d039
- (void)controlWasDeactivated;	// 0x3296cfed
- (void)controlWasFocused;	// 0x3296cfb1
- (void)controlWasUnfocused;	// 0x3296cf65
// declared property getter: - (id)dataSource;	// 0x3296c919
- (void)dealloc;	// 0x3296d0a9
// declared property getter: - (id)delegate;	// 0x3296c8f9
// converted property getter: - (double)interval;	// 0x3296c895
- (void)layoutSubcontrols;	// 0x3296d281
- (id)preferredActionForKey:(id)key;	// 0x3296cd9d
- (void)reload;	// 0x3296c821
// converted property getter: - (BOOL)returnsToStart;	// 0x3296c885
// declared property setter: - (void)setDataSource:(id)source;	// 0x3296c929
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3296c909
// converted property setter: - (void)setInterval:(double)interval;	// 0x3296cedd
// converted property setter: - (void)setReturnsToStart:(BOOL)start;	// 0x3296c875
// converted property setter: - (void)setStartIndex:(long)index;	// 0x3296c83d
// converted property setter: - (void)setStartInterval:(double)interval;	// 0x3296c8a5
// declared property setter: - (void)setStartsOnActivate:(BOOL)activate;	// 0x3296c8e9
- (void)setSubcontrolMetaData:(id)data;	// 0x3296cea5
- (void)start;	// 0x3296cf51
// converted property getter: - (long)startIndex;	// 0x3296c865
// converted property getter: - (double)startInterval;	// 0x3296c8b9
// declared property getter: - (BOOL)startsOnActivate;	// 0x3296c8d9
// converted property getter: - (id)subcontrolMetadata;	// 0x3296c8c9
@end

