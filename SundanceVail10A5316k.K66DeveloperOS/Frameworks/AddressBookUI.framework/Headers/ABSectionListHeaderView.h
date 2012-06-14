/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewHeaderFooterView.h> // Unknown library

@protocol ABStyleProvider;

@interface ABSectionListHeaderView : UITableViewHeaderFooterView {
	id<ABStyleProvider> _styleProvider;	// 152 = 0x98
}
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34c57d09; S=0x34c57c7d; @synthesize=_styleProvider
- (void)_updateBackgroundImage;	// 0x34c57c8d
- (void)dealloc;	// 0x34c59d61
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34c57c7d
// declared property getter: - (id)styleProvider;	// 0x34c57d09
@end

