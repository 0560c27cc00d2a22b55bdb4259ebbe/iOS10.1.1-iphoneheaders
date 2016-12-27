/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding> {

	float _confidence;
	NSString* _substring;
	double _timestamp;
	double _duration;
	NSArray* _alternativeSubstrings;
	NSRange _substringRange;

}

@property (nonatomic,copy,readonly) NSString * substring;                    //@synthesize substring=_substring - In the implementation block
@property (nonatomic,readonly) NSRange substringRange;                       //@synthesize substringRange=_substringRange - In the implementation block
@property (nonatomic,readonly) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float confidence;                             //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeSubstrings;              //@synthesize alternativeSubstrings=_alternativeSubstrings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)confidence;
-(NSString *)substring;
-(NSRange)substringRange;
-(id)_initWithSubstring:(id)arg1 range:(NSRange)arg2 timestamp:(double)arg3 duration:(double)arg4 confidence:(float)arg5 alternativeSubstrings:(id)arg6 ;
-(NSArray *)alternativeSubstrings;
@end

