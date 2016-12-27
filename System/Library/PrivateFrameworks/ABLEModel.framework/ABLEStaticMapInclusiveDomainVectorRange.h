/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLEModel/ABLEStaticMap.h>

@class NSArray;

@interface ABLEStaticMapInclusiveDomainVectorRange : ABLEStaticMap {

	NSArray* _domainVector;
	double _domainMin;
	double _domainMax;

}

@property (readonly) NSArray * domainVector;              //@synthesize domainVector=_domainVector - In the implementation block
@property (readonly) double domainMin;                    //@synthesize domainMin=_domainMin - In the implementation block
@property (readonly) double domainMax;                    //@synthesize domainMax=_domainMax - In the implementation block
-(id)initWithDomainVector:(id)arg1 domainMin:(double)arg2 domainMax:(double)arg3 ;
-(id)initWithJSONDomainVector:(id)arg1 domainMin:(double)arg2 domainMax:(double)arg3 ;
-(NSArray *)domainVector;
-(double)domainMin;
-(double)domainMax;
-(double)map:(double)arg1 ;
@end

