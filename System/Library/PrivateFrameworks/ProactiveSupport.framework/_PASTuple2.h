/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface _PASTuple2 : NSObject <NSCopying> {

	NSObject* _first;
	NSObject* _second;

}

@property (nonatomic,readonly) NSObject * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSObject * second;              //@synthesize second=_second - In the implementation block
+(id)tupleWithFirst:(id)arg1 second:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)second;
-(NSObject *)first;
-(BOOL)isEqualToTuple2:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

