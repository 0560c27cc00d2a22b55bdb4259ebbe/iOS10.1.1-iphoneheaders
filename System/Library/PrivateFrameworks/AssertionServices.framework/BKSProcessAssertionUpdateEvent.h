/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSProcessAssertionEvent.h>

@class NSString;

@interface BKSProcessAssertionUpdateEvent : BKSProcessAssertionEvent {

	NSString* _name;
	unsigned _flags;

}

@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned flags;              //@synthesize flags=_flags - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end

