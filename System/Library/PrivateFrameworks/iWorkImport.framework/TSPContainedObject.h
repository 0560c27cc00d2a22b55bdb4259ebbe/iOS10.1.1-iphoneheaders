/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSPObject;

@interface TSPContainedObject : NSObject {

	TSPObject* _owner;

}

@property (assign,nonatomic,__weak) TSPObject * owner;              //@synthesize owner=_owner - In the implementation block
-(void)willModifyForUpgrade;
-(void)willModify;
-(id)objectLocale;
-(TSPObject *)owner;
-(void)setOwner:(TSPObject *)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(id)documentRoot;
@end
