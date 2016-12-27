/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CountedReference : NSObject {

	BOOL _didScheduleDealloc;
	id _referencedObject;
	NSString* _name;
	unsigned long long _referenceCount;

}

@property (nonatomic,retain) id referencedObject;                            //@synthesize referencedObject=_referencedObject - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long referenceCount;              //@synthesize referenceCount=_referenceCount - In the implementation block
@property (assign,nonatomic) BOOL didScheduleDealloc;                        //@synthesize didScheduleDealloc=_didScheduleDealloc - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)referencedObject;
-(void)setReferencedObject:(id)arg1 ;
-(void)setReferenceCount:(unsigned long long)arg1 ;
-(BOOL)didScheduleDealloc;
-(void)setDidScheduleDealloc:(BOOL)arg1 ;
-(unsigned long long)referenceCount;
@end

