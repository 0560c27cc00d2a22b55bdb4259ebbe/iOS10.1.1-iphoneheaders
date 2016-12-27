/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTInvocationRecord : NSObject <NSCopying> {

	/*^block*/id _block;
	/*^block*/id _failureBlock;
	NSString* _invocationDescription;

}

@property (nonatomic,copy) id block;                                      //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id failureBlock;                               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) NSString * invocationDescription;              //@synthesize invocationDescription=_invocationDescription - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invoke;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(void)invokeFailure;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(NSString *)invocationDescription;
-(void)setInvocationDescription:(NSString *)arg1 ;
@end

