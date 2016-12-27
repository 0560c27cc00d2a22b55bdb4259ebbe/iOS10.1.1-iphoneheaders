/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface HMFLogCategory : NSObject {

	NSObject*<OS_os_log> _internal;
	NSString* _loggingCategory;
	NSString* _loggingSubsystem;

}

@property (nonatomic,readonly) NSString * loggingSubsystem;                //@synthesize loggingSubsystem=_loggingSubsystem - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * loggingCategory;                 //@synthesize loggingCategory=_loggingCategory - In the implementation block
+(void)initialize;
+(id)defaultCategory;
+(id)categoryWithName:(id)arg1 ;
+(void)_addCategory:(id)arg1 inSubsystem:(id)arg2 ;
+(id)_getCategory:(id)arg1 ;
+(id)categoryWithName:(id)arg1 inSubsystem:(id)arg2 ;
-(NSObject*<OS_os_log>)internal;
-(NSString *)loggingCategory;
-(id)initCategory:(id)arg1 inSubsystem:(id)arg2 ;
-(NSString *)loggingSubsystem;
@end

