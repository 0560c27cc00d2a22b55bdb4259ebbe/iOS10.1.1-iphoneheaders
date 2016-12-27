/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKSendAnimationContext.h>
@class NSArray, UIView, NSString, CABackdropLayer;


@protocol CKSendAnimationContext <NSObject>
@property (nonatomic,copy) NSArray * animatableViews; 
@property (nonatomic,copy) NSArray * animatableTextViews; 
@property (nonatomic,copy) NSArray * throwBalloonViews; 
@property (nonatomic,copy) NSArray * framesOfAddedChatItems; 
@property (nonatomic,copy) NSArray * throwBalloonViewAttributesCollection; 
@property (nonatomic,retain) UIView * containerView; 
@property (nonatomic,retain) NSString * impactIdentifier; 
@property (assign,nonatomic) BOOL shouldRepeat; 
@property (assign,nonatomic) BOOL isSender; 
@property (nonatomic,retain) NSArray * messages; 
@property (nonatomic,retain) CABackdropLayer * backdropLayer; 
@required
-(UIView *)containerView;
-(void)setContainerView:(id)arg1;
-(CABackdropLayer *)backdropLayer;
-(void)setBackdropLayer:(id)arg1;
-(void)setShouldRepeat:(BOOL)arg1;
-(BOOL)shouldRepeat;
-(NSString *)impactIdentifier;
-(NSArray *)throwBalloonViews;
-(NSArray *)framesOfAddedChatItems;
-(NSArray *)messages;
-(void)setAnimatableViews:(id)arg1;
-(void)setAnimatableTextViews:(id)arg1;
-(void)setImpactIdentifier:(id)arg1;
-(void)setThrowBalloonViews:(id)arg1;
-(void)setIsSender:(BOOL)arg1;
-(NSArray *)animatableViews;
-(NSArray *)animatableTextViews;
-(void)setFramesOfAddedChatItems:(id)arg1;
-(NSArray *)throwBalloonViewAttributesCollection;
-(void)setThrowBalloonViewAttributesCollection:(id)arg1;
-(BOOL)isSender;
-(void)setMessages:(id)arg1;

@end


@class NSArray, UIView, NSString, CABackdropLayer;

@interface CKSendAnimationContext : NSObject <CKSendAnimationContext> {

	BOOL _shouldRepeat;
	BOOL _isSender;
	NSArray* _animatableViews;
	NSArray* _animatableTextViews;
	NSString* _impactIdentifier;
	NSArray* _throwBalloonViews;
	UIView* _containerView;
	NSArray* _framesOfAddedChatItems;
	CABackdropLayer* _backdropLayer;
	NSArray* _messages;
	NSArray* _throwBalloonViewAttributesCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * animatableViews;                                   //@synthesize animatableViews=_animatableViews - In the implementation block
@property (nonatomic,copy) NSArray * animatableTextViews;                               //@synthesize animatableTextViews=_animatableTextViews - In the implementation block
@property (nonatomic,copy) NSArray * throwBalloonViews;                                 //@synthesize throwBalloonViews=_throwBalloonViews - In the implementation block
@property (nonatomic,copy) NSArray * framesOfAddedChatItems;                            //@synthesize framesOfAddedChatItems=_framesOfAddedChatItems - In the implementation block
@property (nonatomic,copy) NSArray * throwBalloonViewAttributesCollection;              //@synthesize throwBalloonViewAttributesCollection=_throwBalloonViewAttributesCollection - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                    //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSString * impactIdentifier;                               //@synthesize impactIdentifier=_impactIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldRepeat;                                         //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (assign,nonatomic) BOOL isSender;                                             //@synthesize isSender=_isSender - In the implementation block
@property (nonatomic,retain) NSArray * messages;                                        //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backdropLayer;                           //@synthesize backdropLayer=_backdropLayer - In the implementation block
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)setBackdropLayer:(CABackdropLayer *)arg1 ;
-(void)setShouldRepeat:(BOOL)arg1 ;
-(BOOL)shouldRepeat;
-(NSString *)impactIdentifier;
-(NSArray *)throwBalloonViews;
-(NSArray *)framesOfAddedChatItems;
-(NSArray *)messages;
-(void)setAnimatableViews:(NSArray *)arg1 ;
-(void)setAnimatableTextViews:(NSArray *)arg1 ;
-(void)setImpactIdentifier:(NSString *)arg1 ;
-(void)setThrowBalloonViews:(NSArray *)arg1 ;
-(void)setIsSender:(BOOL)arg1 ;
-(NSArray *)animatableViews;
-(NSArray *)animatableTextViews;
-(void)setFramesOfAddedChatItems:(NSArray *)arg1 ;
-(NSArray *)throwBalloonViewAttributesCollection;
-(void)setThrowBalloonViewAttributesCollection:(NSArray *)arg1 ;
-(BOOL)isSender;
-(void)setMessages:(NSArray *)arg1 ;
@end

