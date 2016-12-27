/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface IFCentroidScoringParameters : NSObject {

	NSDictionary* _scale;
	long long _divergence;

}

@property (copy) NSDictionary * scale;                //@synthesize scale=_scale - In the implementation block
@property (assign) long long divergence;              //@synthesize divergence=_divergence - In the implementation block
+(id)defaultParameters;
-(void)setScale:(NSDictionary *)arg1 ;
-(NSDictionary *)scale;
-(long long)divergence;
-(void)setDivergence:(long long)arg1 ;
@end

