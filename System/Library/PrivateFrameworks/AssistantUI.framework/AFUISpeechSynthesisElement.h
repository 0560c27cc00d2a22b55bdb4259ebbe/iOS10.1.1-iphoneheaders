/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISpeechSynthesisElementDelegate;
@class NSString, VSSpeechRequest;

@interface AFUISpeechSynthesisElement : NSObject {

	NSString* _text;
	BOOL _isPhonetic;
	BOOL _eligibleForSynthesis;
	BOOL _provisional;
	BOOL _preprationBlockCompleted;
	BOOL _durationHasElapsed;
	VSSpeechRequest* _speechRequest;
	long long _synthesisResult;
	id<AFUISpeechSynthesisElementDelegate> _delegate;
	NSString* _animationIdentifier;
	/*^block*/id _completion;

}

@property (assign,setter=_setEligibleForSynthesis:,getter=isEligibleForSynthesis,nonatomic) BOOL eligibleForSynthesis;              //@synthesize eligibleForSynthesis=_eligibleForSynthesis - In the implementation block
@property (getter=_completion,nonatomic,readonly) id completion;                                                                    //@synthesize completion=_completion - In the implementation block
@property (setter=_setText:,nonatomic,copy) NSString * text;                                                                        //@synthesize text=_text - In the implementation block
@property (setter=_setPreparationBlockCompleted:) BOOL preprationBlockCompleted;                                                    //@synthesize preprationBlockCompleted=_preprationBlockCompleted - In the implementation block
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;                                                                 //@synthesize durationHasElapsed=_durationHasElapsed - In the implementation block
@property (assign,nonatomic) BOOL isPhonetic;                                                                                       //@synthesize isPhonetic=_isPhonetic - In the implementation block
@property (getter=isProvisional,nonatomic,readonly) BOOL provisional;                                                               //@synthesize provisional=_provisional - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;                                                                       //@synthesize speechRequest=_speechRequest - In the implementation block
@property (assign,nonatomic) long long synthesisResult;                                                                             //@synthesize synthesisResult=_synthesisResult - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISpeechSynthesisElementDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * animationIdentifier;                                                                      //@synthesize animationIdentifier=_animationIdentifier - In the implementation block
-(BOOL)isPhonetic;
-(id)init;
-(void)setDelegate:(id<AFUISpeechSynthesisElementDelegate>)arg1 ;
-(id)description;
-(id<AFUISpeechSynthesisElementDelegate>)delegate;
-(NSString *)text;
-(void)_setText:(id)arg1 ;
-(void)_setDurationHasElapsed:(BOOL)arg1 ;
-(void)_setPreparationBlockCompleted:(BOOL)arg1 ;
-(BOOL)durationHasElapsed;
-(BOOL)preprationBlockCompleted;
-(void)_updateSynthesisEligibility;
-(id)initWithText:(id)arg1 provisional:(BOOL)arg2 eligibleAfterDuration:(double)arg3 preparation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 animationIdentifier:(id)arg6 ;
-(BOOL)isProvisional;
-(BOOL)isEligibleForSynthesis;
-(void)_setEligibleForSynthesis:(BOOL)arg1 ;
-(void)executeCompletion;
-(void)setIsPhonetic:(BOOL)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(long long)synthesisResult;
-(void)setSynthesisResult:(long long)arg1 ;
-(NSString *)animationIdentifier;
-(/*^block*/id)_completion;
@end

