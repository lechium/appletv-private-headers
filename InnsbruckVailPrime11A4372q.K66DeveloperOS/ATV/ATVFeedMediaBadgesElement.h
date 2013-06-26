/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class UIColor, NSString, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMediaBadgesElement : ATVFeedElement {
	BOOL _closedCaption;	// 4 = 0x4
	NSString *_audioFormat;	// 8 = 0x8
	NSString *_videoFormat;	// 12 = 0xc
	NSArray *_urlBadges;	// 16 = 0x10
	NSDictionary *_styleKeyValues;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *audioFormat;	// G=0x128925; S=0x128939; @synthesize=_audioFormat
@property(assign, nonatomic) BOOL closedCaption;	// G=0x12896d; S=0x12897d; @synthesize=_closedCaption
@property(readonly, assign, nonatomic) UIColor *color;	// G=0x1288d1; 
@property(retain, nonatomic) NSDictionary *styleKeyValues;	// G=0x1289c5; S=0x1289d5; @synthesize=_styleKeyValues
@property(retain, nonatomic) NSArray *urlBadges;	// G=0x12898d; S=0x12899d; @synthesize=_urlBadges
@property(copy, nonatomic) NSString *videoFormat;	// G=0x128949; S=0x12895d; @synthesize=_videoFormat
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x128591
- (void).cxx_destruct;	// 0x1289fd
// declared property getter: - (id)audioFormat;	// 0x128925
// declared property getter: - (BOOL)closedCaption;	// 0x12896d
// declared property getter: - (id)color;	// 0x1288d1
// declared property setter: - (void)setAudioFormat:(id)format;	// 0x128939
// declared property setter: - (void)setClosedCaption:(BOOL)caption;	// 0x12897d
// declared property setter: - (void)setStyleKeyValues:(id)values;	// 0x1289d5
// declared property setter: - (void)setUrlBadges:(id)badges;	// 0x12899d
// declared property setter: - (void)setVideoFormat:(id)format;	// 0x12895d
// declared property getter: - (id)styleKeyValues;	// 0x1289c5
// declared property getter: - (id)urlBadges;	// 0x12898d
// declared property getter: - (id)videoFormat;	// 0x128949
@end
