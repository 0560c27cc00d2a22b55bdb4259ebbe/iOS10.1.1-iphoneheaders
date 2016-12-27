/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPRecommendation.h>
@class NSString;


@protocol MPRecommendation
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) double score; 
@required
-(NSString *)label;
-(double)score;

@end


@class NSString;

@interface MPRecommendation : NSObject <MPRecommendation> {

	NSString* _label;
	double _score;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) double score;                //@synthesize score=_score - In the implementation block
+(id)recommendationWithLabel:(id)arg1 score:(double)arg2 ;
+(id)sortLabelsForScores:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(double)score;
-(id)initWithLabel:(id)arg1 score:(double)arg2 ;
@end

