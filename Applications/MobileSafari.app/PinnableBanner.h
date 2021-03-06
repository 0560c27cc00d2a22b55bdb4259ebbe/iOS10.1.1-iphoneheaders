/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface PinnableBanner : UIView {

	BOOL _pinnedToTop;
	BOOL _initiallyBehindNavigationBar;

}

@property (assign,getter=isPinnedToTop,nonatomic) BOOL pinnedToTop;                                                //@synthesize pinnedToTop=_pinnedToTop - In the implementation block
@property (assign,getter=isInitiallyBehindNavigationBar,nonatomic) BOOL initiallyBehindNavigationBar;              //@synthesize initiallyBehindNavigationBar=_initiallyBehindNavigationBar - In the implementation block
+(double)pinAnimationDelay;
+(double)unpinAnimationDelay;
+(double)unpinAnimationDuration;
-(BOOL)isPinnedToTop;
-(BOOL)isInitiallyBehindNavigationBar;
-(void)setPinnedToTop:(BOOL)arg1 ;
-(void)setInitiallyBehindNavigationBar:(BOOL)arg1 ;
@end

