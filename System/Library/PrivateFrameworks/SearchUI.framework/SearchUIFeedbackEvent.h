/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SearchUIFeedbackEvent : NSObject {

	id _result;
	NSString* _actionArea;
	NSString* _actionType;
	NSString* _actionCardType;
	NSString* _actionTarget;
	NSString* _actionDestination;
	NSDate* _timestamp;

}

@property (nonatomic,retain) id result;                               //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * actionArea;                     //@synthesize actionArea=_actionArea - In the implementation block
@property (nonatomic,copy) NSString * actionType;                     //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * actionCardType;                 //@synthesize actionCardType=_actionCardType - In the implementation block
@property (nonatomic,copy) NSString * actionTarget;                   //@synthesize actionTarget=_actionTarget - In the implementation block
@property (nonatomic,copy) NSString * actionDestination;              //@synthesize actionDestination=_actionDestination - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
+(id)feedbackEventOnResult:(id)arg1 actionArea:(id)arg2 actionType:(id)arg3 cardType:(id)arg4 actionTarget:(id)arg5 actionDestination:(id)arg6 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)result;
-(void)setActionType:(NSString *)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)setActionTarget:(NSString *)arg1 ;
-(NSString *)actionType;
-(void)setActionArea:(NSString *)arg1 ;
-(void)setActionCardType:(NSString *)arg1 ;
-(void)setActionDestination:(NSString *)arg1 ;
-(NSString *)actionArea;
-(NSString *)actionCardType;
-(NSString *)actionTarget;
-(NSString *)actionDestination;
@end

