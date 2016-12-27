/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {

	BOOL _isLowConfidence;
	NSArray* _interpretations;

}

@property (nonatomic,copy) NSArray * interpretations;              //@synthesize interpretations=_interpretations - In the implementation block
@property (assign,nonatomic) BOOL isLowConfidence;                 //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)interpretations;
-(void)setInterpretations:(NSArray *)arg1 ;
-(id)firstInterpretation;
-(NSDictionary*)allInterpretationStringsAndScores;
-(BOOL)isLowConfidence;
-(id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(id)bestInterpretation;
-(void)setIsLowConfidence:(BOOL)arg1 ;
@end

