/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ASPurchasedPage;


@protocol ASChildPurchasedViewController <NSObject>
@property (assign,nonatomic,__weak) id<ASChildPurchasedViewControllerDelegate> delegate; 
@property (nonatomic,retain) ASPurchasedPage * page; 
@required
-(void)setDelegate:(id)arg1;
-(id<ASChildPurchasedViewControllerDelegate>)delegate;
-(ASPurchasedPage *)page;
-(void)setPage:(id)arg1;

@end

