/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol EKLayoutContainerViewDelegate;
@interface EKLayoutContainerView : UIView {

	id<EKLayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKLayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)layoutSubviews;
-(void)setDelegate:(id<EKLayoutContainerViewDelegate>)arg1 ;
-(id<EKLayoutContainerViewDelegate>)delegate;
@end

