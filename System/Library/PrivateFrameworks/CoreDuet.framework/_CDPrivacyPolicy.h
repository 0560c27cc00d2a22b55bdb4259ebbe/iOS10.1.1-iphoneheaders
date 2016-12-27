/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDPrivacyPolicy : NSObject {

	BOOL canPersistOnStorage;
	double temporalPrecision;

}

@property (nonatomic,readonly) BOOL canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
+(id)sharedPrivacyPolicy;
-(id)init;
-(id)description;
-(double)temporalPrecision;
-(BOOL)canPersistOnStorage;
-(id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(BOOL)arg2 ;
@end

