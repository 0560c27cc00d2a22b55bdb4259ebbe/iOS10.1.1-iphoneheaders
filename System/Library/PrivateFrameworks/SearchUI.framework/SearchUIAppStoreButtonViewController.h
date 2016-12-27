/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIAccessoryViewController.h>

@class SKUIItemOfferButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController {

	BOOL _appIsInstalled;
	SKUIItemOfferButton* _appStoreButton;

}

@property (retain) SKUIItemOfferButton * appStoreButton;              //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (assign) BOOL appIsInstalled;                               //@synthesize appIsInstalled=_appIsInstalled - In the implementation block
+(BOOL)supportsResult:(id)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(void)setAppStoreButton:(SKUIItemOfferButton *)arg1 ;
-(void)setAppIsInstalled:(BOOL)arg1 ;
-(SKUIItemOfferButton *)appStoreButton;
-(BOOL)appIsInstalled;
-(id)setupViewWithStyle:(unsigned long long)arg1 ;
-(void)buttonPressed;
@end

