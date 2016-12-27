/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBBannerGestureHandlerDelegate;
#import <SpringBoard/SpringBoard-Structs.h>
@class SBBannerContainerViewController, SBBannerController, SBBannerContextView;

@interface SBBannerGestureHandler : NSObject {

	id<SBBannerGestureHandlerDelegate> _delegate;
	SBBannerContainerViewController* _bannerViewController;
	SBBannerController* _bannerController;

}

@property (nonatomic,readonly) SBBannerContextView * bannerView; 
@property (nonatomic,readonly) SBBannerContainerViewController * bannerViewController;              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (nonatomic,__weak,readonly) SBBannerController * bannerController;                        //@synthesize bannerController=_bannerController - In the implementation block
@property (assign,nonatomic,__weak) id<SBBannerGestureHandlerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
+(id)notificationCenterHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
+(id)pullDownHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerController *)bannerController;
-(BOOL)handleGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5 ;
-(id)initWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerContainerViewController *)bannerViewController;
-(void)setDelegate:(id<SBBannerGestureHandlerDelegate>)arg1 ;
-(id<SBBannerGestureHandlerDelegate>)delegate;
-(void)invalidate;
-(SBBannerContextView *)bannerView;
@end

