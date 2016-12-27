/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _feedback;
	/*^block*/id _feedbackUpdateBlock;
	double _minimumInterval;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) id feedbackUpdateBlock;                                            //@synthesize feedbackUpdateBlock=_feedbackUpdateBlock - In the implementation block
@property (assign,nonatomic) double minimumInterval;                                          //@synthesize minimumInterval=_minimumInterval - In the implementation block
+(id)strongConfiguration;
+(id)defaultConfiguration;
+(id)lightConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(id)feedbackUpdateBlock;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)feedback;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setFeedbackUpdateBlock:(id)arg1 ;
-(double)minimumInterval;
-(void)setMinimumInterval:(double)arg1 ;
@end

