/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewBase.h>
#import <SpringBoard/SBDashBoardPageView.h>

@protocol SBDashBoardPageViewControllerProtocol;
@class UIViewController;

@interface SBDashBoardPageViewBase : SBDashBoardViewBase <SBDashBoardPageView> {

	UIViewController*<SBDashBoardPageViewControllerProtocol> _pageViewController;

}

@property (assign,nonatomic,__weak) UIViewController*<SBDashBoardPageViewControllerProtocol> pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
-(UIViewController*<SBDashBoardPageViewControllerProtocol>)pageViewController;
-(void)setPageViewController:(UIViewController*<SBDashBoardPageViewControllerProtocol>)arg1 ;
@end

