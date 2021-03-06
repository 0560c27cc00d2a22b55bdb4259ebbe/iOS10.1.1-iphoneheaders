/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIContentContainer <NSObject>
@property (nonatomic,readonly) CGSize preferredContentSize; 
@required
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

