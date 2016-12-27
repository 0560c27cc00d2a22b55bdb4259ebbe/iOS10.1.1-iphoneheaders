/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSClue.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CLSMeaningClue : CLSClue <NSCoding> {

	id _relatedData;

}

@property (retain) id relatedData;              //@synthesize relatedData=_relatedData - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRelatedData:(id)arg1 ;
-(id)relatedData;
-(BOOL)isEqualToClue:(id)arg1 ;
@end

