/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <Preferences/DevicePINPane.h>

@class CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {

	CDPPaneHeaderView* _headerView;
	double _keyboardOffset;

}

@property (nonatomic,readonly) CGRect availableHeaderRect; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)headerView;
-(void)_layoutSubviews;
-(void)_keyboardLayoutChanged;
-(double)keyboardHeightOffset;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(CGRect)availableHeaderRect;
-(void)didFinishResizingHeaderView;
-(void)didFinishResizingPinView;
@end

