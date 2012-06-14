/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "NSObject.h"


@protocol ABCardContentProvider <NSObject>
- (id)initWithPerson:(void *)person;
@optional
- (id)backgroundColor;
- (id)contentSwitchingControlBorder;
@required
- (id)contentSwitchingControlPocketShadow;
- (int)defaultContentIndex;
- (id)newContentSwitchingControl;
- (id)newContentViewForItemAtIndex:(int)index;
- (id)newCustomHeaderView;
@optional
- (BOOL)showsContentSwitchingControl;
@end

