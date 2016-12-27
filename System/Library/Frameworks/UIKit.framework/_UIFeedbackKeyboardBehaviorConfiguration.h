/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UIFeedbackKeyboardBehaviorConfiguration : _UIFeedbackGeneratorConfiguration {

	NSDictionary* _feedbacks;
	double _slowTypingTime;
	double _fastTypingTime;
	double _fastTypingVolumeMultiplier;

}

@property (nonatomic,retain) NSDictionary * feedbacks;                       //@synthesize feedbacks=_feedbacks - In the implementation block
@property (assign,nonatomic) double slowTypingTime;                          //@synthesize slowTypingTime=_slowTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingTime;                          //@synthesize fastTypingTime=_fastTypingTime - In the implementation block
@property (assign,nonatomic) double fastTypingVolumeMultiplier;              //@synthesize fastTypingVolumeMultiplier=_fastTypingVolumeMultiplier - In the implementation block
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)slowTypingTime;
-(double)fastTypingTime;
-(double)fastTypingVolumeMultiplier;
-(NSDictionary *)feedbacks;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(void)setSlowTypingTime:(double)arg1 ;
-(void)setFastTypingTime:(double)arg1 ;
-(void)setFastTypingVolumeMultiplier:(double)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(BOOL)_hasMutableFeedbackKeyPaths;
-(BOOL)defaultEnabled;
@end

