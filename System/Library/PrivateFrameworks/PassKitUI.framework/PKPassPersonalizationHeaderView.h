/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableHeaderView.h>

@class PKTableHeaderView;

@interface PKPassPersonalizationHeaderView : PKTableHeaderView {

	PKTableHeaderView* _tableHeaderView;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)_configureForCurrentState;
-(id)initWithLogoImage:(id)arg1 description:(id)arg2 ;
@end

