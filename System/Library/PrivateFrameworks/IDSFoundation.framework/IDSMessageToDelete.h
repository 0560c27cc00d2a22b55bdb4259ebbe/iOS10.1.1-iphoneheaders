/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSMessageToDelete : NSObject {

	unsigned _dataProtectionClass;
	NSString* _guid;
	NSString* _alternateGUID;

}

@property (assign) unsigned dataProtectionClass;                                   //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (setter=setGUID:,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (setter=setAlternateGUID:,retain) NSString * alternateGUID;              //@synthesize alternateGUID=_alternateGUID - In the implementation block
-(void)dealloc;
-(NSString *)guid;
-(NSString *)alternateGUID;
-(void)setAlternateGUID:(NSString *)arg1 ;
-(void)setGUID:(id)arg1 ;
-(unsigned)dataProtectionClass;
-(void)setDataProtectionClass:(unsigned)arg1 ;
@end

