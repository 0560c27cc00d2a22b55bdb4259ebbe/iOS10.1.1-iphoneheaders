/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIPreviewInteractionAnimating <NSObject>
@property (nonatomic,copy) NSArray * containerViews; 
@property (getter=isStopped,nonatomic,readonly) BOOL stopped; 
@required
-(void)setAnimationsForInteractiveHighlight:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)setAnimationsForPreview:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)setAnimationsForCancel:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isStopped;
-(NSArray *)containerViews;
-(void)setAnimationsForCommit:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)stopAnimations;
-(void)setContainerViews:(id)arg1;

@end

