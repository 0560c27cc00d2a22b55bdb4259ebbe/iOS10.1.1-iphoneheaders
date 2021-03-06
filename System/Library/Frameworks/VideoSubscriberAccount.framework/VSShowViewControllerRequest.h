/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface VSShowViewControllerRequest : NSObject {

	BOOL _animated;
	unsigned long long _operation;
	UIViewController* _viewController;

}

@property (assign,nonatomic) unsigned long long operation;                   //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)description;
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(BOOL)animated;
-(UIViewController *)viewController;
-(void)setAnimated:(BOOL)arg1 ;
@end

